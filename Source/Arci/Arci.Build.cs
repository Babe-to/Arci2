// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Arci : ModuleRules
{
	public Arci(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
