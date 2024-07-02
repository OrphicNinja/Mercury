// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STREAMLINERHI_EStreamlineSettingOverride_generated_h
#error "EStreamlineSettingOverride.generated.h already included, missing '#pragma once' in EStreamlineSettingOverride.h"
#endif
#define STREAMLINERHI_EStreamlineSettingOverride_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Runtime_Nvidia_Streamline_Source_StreamlineRHI_Public_EStreamlineSettingOverride_h


#define FOREACH_ENUM_ESTREAMLINESETTINGOVERRIDE(op) \
	op(EStreamlineSettingOverride::Enabled) \
	op(EStreamlineSettingOverride::Disabled) \
	op(EStreamlineSettingOverride::UseProjectSettings) 

enum class EStreamlineSettingOverride : uint8;
template<> STREAMLINERHI_API UEnum* StaticEnum<EStreamlineSettingOverride>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
