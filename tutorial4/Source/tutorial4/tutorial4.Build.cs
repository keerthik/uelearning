// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class tutorial4 : ModuleRules
{
	public tutorial4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
