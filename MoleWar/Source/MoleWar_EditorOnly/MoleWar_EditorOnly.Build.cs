// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MoleWar_EditorOnly : ModuleRules
{
	public MoleWar_EditorOnly(ReadOnlyTargetRules Target) : base(Target)
	{
        PrivateIncludePaths.AddRange(new string[]
              {
                "MoleWar_EditorOnly",
              });

        PublicDependencyModuleNames.AddRange(new string[] 
        {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "HeadMountedDisplay",
            "MovieSceneTracks",
            "MovieScene",

        });

        PrivateDependencyModuleNames.AddRange(new string[] 
        {
            "UnrealEd",
            "Slate",
            "SlateCore",
            "Sequencer",
            "MovieSceneTools"
        });

    }
}
