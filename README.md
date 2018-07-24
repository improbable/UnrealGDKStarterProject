# SpatialOS Unreal GDK Starter Project

## Introduction

You can use the SpatialOS Unreal GDK Starter Project as the basis for developing a game using the SpatialOS Unreal GDK. To use the Starter Project, you need to follow the [setup guide](https://github.com/improbable/UnrealGDK/blob/master/docs/setup-and-installing.md) for the SpatialOS Unreal GDK. We've enabled use of the `ThirdPersonExampleMap` and a controllable character `StarterGameCharacter` that is based off the Unreal class `Character`.

> Note that the SpatialOS Unreal GDK is currently in **pre-alpha**, and we aren’t supporting any game development on it at this stage.

For more information, see the [SpatialOS Unreal GDK repository](https://github.com/improbable/UnrealGDK) and its [documentation](https://github.com/improbable/UnrealGDK/blob/master/docs/readme.md).

## Helper scripts

| Helper script | Parameters | Description |
| --- | --- | --- |
| CleanGeneratedFiles.bat | `[-a]` | Cleans generated schema and/or type bindings and/or worker code. Call with `-a` flag to clean everything without prompting. |
| CreateGDKSymlinks.bat | `[Unreal GDK path]` | Creates symlinks to the directories in the Unreal GDK containing the SpatialGDK module, plugins, scripts, binaries, and schema. |
| SafeClean.bat | `[-a]` | Cleans the symlinks, uncommitted changes, and all built files. Call with `-a` flag to clean everything without prompting. Optionally calls `CreateGDKSymlinks.bat` to restore the symlinks. |