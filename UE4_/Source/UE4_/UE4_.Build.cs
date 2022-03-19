// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE4_ : ModuleRules
{
	public UE4_(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
