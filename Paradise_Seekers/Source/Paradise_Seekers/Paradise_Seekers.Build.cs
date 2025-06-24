// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Paradise_Seekers : ModuleRules
{
	public Paradise_Seekers(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"GameplayTags",
			"GameplayAbilities"
		});
	}
}
