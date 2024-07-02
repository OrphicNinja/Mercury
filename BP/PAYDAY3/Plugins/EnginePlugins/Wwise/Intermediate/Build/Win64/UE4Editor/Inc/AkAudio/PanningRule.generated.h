// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_PanningRule_generated_h
#error "PanningRule.generated.h already included, missing '#pragma once' in PanningRule.h"
#endif
#define AKAUDIO_PanningRule_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PanningRule_h


#define FOREACH_ENUM_PANNINGRULE(op) \
	op(PanningRule::PanningRule_Speakers) \
	op(PanningRule::PanningRule_Headphones) 

enum class PanningRule : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<PanningRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
