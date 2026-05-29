# WindroseMod

LogicMods pak for retail Windrose (UE4SS `BPModLoaderMod`). UE 5.6.

**Setup:** UE 5.6, Windrose (Steam), UE4SS. Fix engine/game paths in `Pack-WindroseMod.ps1` and `BuildAndLaunch-WindroseMod.bat` if needed.

```bat
BuildAndLaunch-WindroseMod.bat
BuildAndLaunch-WindroseMod.bat -clean
```

Cooks `/Game/Mods/WindroseMod` → `windrosemod` in `R5\Content\Paks\LogicMods\`. Entry: `ModActor` (parent `Actor`), UI `W_ModStartup`.

Header-dump rebuild: `../UHTHeaderDump/` + `Tools/ImportPipeline/`.
