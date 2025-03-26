// Copyright Epic Games,
// 	Inc. All Rights Reserved.

using UnrealBuildTool;

public class tutorial5 : ModuleRules
{
	public tutorial5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { 
			"BasicMenuRuntime",
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"NavigationSystem",
			"AIModule",
			"Niagara",
			"EnhancedInput" 
		});
    }
}
