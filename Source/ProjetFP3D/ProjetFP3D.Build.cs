// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjetFP3D : ModuleRules
{
	public ProjetFP3D(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
