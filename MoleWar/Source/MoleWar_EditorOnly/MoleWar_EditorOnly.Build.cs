// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MoleWar_EditorOnly : ModuleRules
{
	public MoleWar_EditorOnly(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
