// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class topdown : ModuleRules
{
	public topdown(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { 
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"UMG",
			"NavigationSystem",
			"AIModule",
			"Niagara",
			"EnhancedInput" });
    }
}
