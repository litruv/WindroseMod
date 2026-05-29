# WindroseMod

UE 5.6 project that cooks mod content and installs a **LogicMods** pak for retail **Windrose** (Steam), loaded via **UE4SS** (`BPModLoaderMod`).

**Requires Unreal Engine 5.6** (see `EngineAssociation` in `R5.uproject`).

---

## Configuration

All scripts read **`config.ini`** in the project root.  
Per-machine overrides: **`config.local.ini`** (same format, gitignored — only paste the keys you need to change).

If a path is left empty, scripts auto-detect where possible. Fallback env vars: `UE_ROOT`, `WINDROSE_GAME_EXE`.

### `[Paths]`

| Key | What it does |
|-----|----------------|
| `UeRoot` | Unreal install folder (contains `Engine\`). Empty → Epic Launcher + `R5.uproject` |
| `GameExe` | Full path to `Windrose-Win64-Shipping.exe`. Empty → Steam library search |
| `LogicModsDir` | Where paks are copied on install |
| `ArchiveDir` | Local build output. Empty → `Releases\ModPak` |

### `[Mod]`

| Key | What it does |
|-----|----------------|
| `PakBaseName` | UE4SS mod id and pak file prefix (`windrosemod.pak`, etc.) |
| `ModCookDir` | Unreal content path to cook (`/Game/...`) |
| `ModActorAssetPath` | Blueprint path written into `config.lua` |
| `ModActorClassName` | Class name written into `config.lua` |

`PakBaseName`, pak filenames, and `Mods["…"]` in `config.lua` must all match.

### `[Import]`

| Key | What it does |
|-----|----------------|
| `UhtHeaderDumpDir` | Header dump folder for `Tools/ImportPipeline/` (default `../UHTHeaderDump`) |

### Other project files

| What | Where |
|------|--------|
| Mod assets | `Content/Mods/WindroseMod/` (`ModActor`, `UI/W_ModStartup`, …) |
| Cook allow/deny lists | `Config/DefaultGame.ini` |

`ModActor` must parent **`Actor`** only, or UE4SS reports `ModClass is not valid`.

---

## Commands

| Command | Does |
|---------|------|
| `BuildAndLaunch-WindroseMod.bat` | Cook → pack → install → launch (reads `config.ini`) |
| `BuildAndLaunch-WindroseMod.bat -clean` | Full recook (`Saved\Cooked` wiped) |
| `LaunchEditor.bat` | Build editor target and open project |
| `Pack-WindroseMod.ps1 -InstallToLogicMods` | Pack/install only |

Installed files: `<LogicModsDir>\<PakBaseName>.pak|.utoc|.ucas` and `<PakBaseName>\config.lua`.

---

## Default Steam layout

| | Path |
|---|------|
| Game | `...\Steam\steamapps\common\Windrose\R5\` |
| LogicMods | `...\R5\Content\Paks\LogicMods\` |
| UE4SS | `...\R5\Binaries\Win64\ue4ss\` |

---

## If the mod does not load

1. UE4SS log: `Loading mod: <PakBaseName>` and `PreBeginPlay` on `ModActor`.
2. `ModClass is not valid` → `ModActor` parent, `ModActorAssetPath`, or `PakBaseName` mismatch.
3. LogicMods has all three pak files + `\<PakBaseName>\config.lua`.
