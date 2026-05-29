# Ensures engine plugins required by UnrealEditor-R5.dll imports are enabled in R5.uproject.
param(
    [string]$ProjectRoot = "",
    [string]$EngineRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ProjectRoot) { $ProjectRoot = Get-WindroseModProjectRoot }
$uprojectPath = Join-Path $ProjectRoot "R5.uproject"
if (-not $EngineRoot) {
    $EngineRoot = Join-Path (Resolve-UnrealEngineRoot -UprojectPath $uprojectPath) "Engine"
}
$dllPath = Join-Path $ProjectRoot "Binaries\Win64\UnrealEditor-R5.dll"
if (-not (Test-Path $dllPath)) {
    Write-Error "Build UnrealEditor-R5.dll first."
    exit 1
}

# Module name -> plugin folder name (engine plugins only)
$moduleToPlugin = @{
    'GameplayStateTreeModule' = 'GameplayStateTree'
    'StateTreeModule'           = 'StateTree'
    'SignificanceManager'       = 'SignificanceManager'
    'PoseSearch'                = 'PoseSearch'
    'ReplicationGraph'          = 'ReplicationGraph'
    'AudioModulation'           = 'AudioModulation'
    'Soundscape'                = 'Soundscape'
    'MetasoundEngine'           = 'Metasound'
    'Niagara'                   = 'Niagara'
    'NiagaraAnimNotifies'       = 'Niagara'
    'GameplayAbilities'         = 'GameplayAbilities'
    'AudioGameplay'             = 'AudioGameplay'
    'AudioGameplayVolume'       = 'AudioGameplayVolume'
    'GameFeatures'              = 'GameFeatures'
    'GameSettings'              = 'GameSettings'
    'EnhancedInput'             = 'EnhancedInput'
}

$imports = & python -c @"
import struct
path = r'$dllPath'
with open(path,'rb') as f: data=f.read()
e_lfanew=struct.unpack_from('<I',data,0x3c)[0]
opt_hdr=e_lfanew+24
magic=struct.unpack_from('<H',data,opt_hdr)[0]
dd_off=opt_hdr+ (112 if magic==0x20b else 96)
imp_rva,_=struct.unpack_from('<II',data,dd_off+8)
def rva_to_off(rva):
    num_sections=struct.unpack_from('<H',data,e_lfanew+6)[0]
    sec_off=e_lfanew+24+struct.unpack_from('<H',data,e_lfanew+20)[0]
    for i in range(num_sections):
        off=sec_off+i*40
        virt_size, virt_addr, raw_size, raw_ptr = struct.unpack_from('<IIII',data,off+8)
        if virt_addr<=rva<virt_addr+max(virt_size,raw_size):
            return raw_ptr+(rva-virt_addr)
    return None
off=rva_to_off(imp_rva)
names=set()
while off:
    orig,_,_,rva_name,_=struct.unpack_from('<IIIII',data,off)
    if orig==0 and rva_name==0: break
    noff=rva_to_off(rva_name)
    name=b''
    while data[noff]!=0: name+=bytes([data[noff]]); noff+=1
    name=name.decode('ascii',errors='ignore')
    if name.startswith('UnrealEditor-') and name.endswith('.dll'):
        names.add(name[13:-4])
    off+=20
for n in sorted(names): print(n)
"@

$neededPlugins = [System.Collections.Generic.HashSet[string]]::new()
foreach ($mod in $imports) {
    if ($moduleToPlugin.ContainsKey($mod)) {
        [void]$neededPlugins.Add($moduleToPlugin[$mod])
    }
}

$json = Get-Content -Path $uprojectPath -Raw | ConvertFrom-Json
$existing = @{}
foreach ($p in $json.Plugins) { $existing[$p.Name] = $p }

$added = 0
foreach ($pluginName in ($neededPlugins | Sort-Object)) {
    if ($existing.ContainsKey($pluginName)) { continue }
    $json.Plugins += [PSCustomObject]@{ Name = $pluginName; Enabled = $true }
    $added++
    Write-Host "Added plugin: $pluginName"
}

if ($added -gt 0) {
    ($json | ConvertTo-Json -Depth 6) | Set-Content -Path $uprojectPath -Encoding UTF8
}
Write-Host "Done. Added $added plugin(s). Enable any remaining Missing import lines from Saved/Logs/R5.log manually."
