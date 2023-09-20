// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Onspace : ModuleRules
{
	public Onspace(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "HeadMountedDisplay" });


		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
