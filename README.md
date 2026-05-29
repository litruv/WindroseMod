# WindroseMod

UE 5.6 project to build a **LogicMods** pak for retail **Windrose** (Steam), loaded via **UE4SS** (`BPModLoaderMod`).

This folder is the **git repository root**. Optional sibling `../UHTHeaderDump/` (not in git) is used only by `Tools/ImportPipeline/` when re-importing from a header dump.

`Saved/` and `Intermediate/` stay on disk locally but are not tracked (see `.gitignore`).

## Requirements

- **Unreal Engine 5.6** (scripts default to `d:\UE_5.6`)
- **Retail Windrose** (Steam)
- **UE4SS** under `R5\Binaries\Win64\ue4ss\` with `BPModLoaderMod` enabled

Edit `Pack-WindroseMod.ps1` and `BuildAndLaunch-WindroseMod.bat` if your engine or game paths differ.

## Mod content

Cook/pack target: `/Game/Mods/WindroseMod`

| Asset | Path |
|-------|------|
| `ModActor` | UE4SS entry (`config.lua`; parent should be `Actor`) |
| `UI/W_ModStartup` | Startup widget |
| `Maps/L_ModStartup` | Optional dev map |

Installed pak: `windrosemod` (+ IoStore `.utoc` / `.ucas`) in `R5\Content\Paks\LogicMods\`.

## Quick start

```bat
BuildAndLaunch-WindroseMod.bat
```

Full recook:

```bat
BuildAndLaunch-WindroseMod.bat -clean
```

Pack only:

```powershell
powershell -File Pack-WindroseMod.ps1 -InstallToLogicMods
```

Cleanup (keeps `Saved/` and `Intermediate/`):

```bat
Cleanup-WindroseModProject.bat
```

## Workflows

1. **Mod only:** Update game → UE4SS if needed → `BuildAndLaunch-WindroseMod.bat` → check UE4SS log for `windrosemod` / `PreBeginPlay`.
2. **Rebuild from dump:** Place UHT export in `../UHTHeaderDump/` → `Tools/ImportPipeline/` → build editor → fix link logs → mod loop above.

## Git upload

```powershell
git add .
git status
git commit -m "Initial Windrose mod project"
git remote add origin <url>
git push -u origin main
```

Expect ~11k tracked files (`Source/`, `Plugins/` sources, `Content/Mods/`, scripts). No `Saved/`, `Binaries/`, or cooked `Releases/`.

## Local workspace (optional)

```
WindroseModding/
  WindroseMod/          ← this repo
  UHTHeaderDump/        ← local only, for import pipeline
  WindroseMod - Copy/   ← backup; not in git
```
