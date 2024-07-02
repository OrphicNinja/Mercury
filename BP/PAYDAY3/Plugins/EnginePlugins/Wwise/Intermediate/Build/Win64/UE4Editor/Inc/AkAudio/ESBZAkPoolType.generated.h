// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_ESBZAkPoolType_generated_h
#error "ESBZAkPoolType.generated.h already included, missing '#pragma once' in ESBZAkPoolType.h"
#endif
#define AKAUDIO_ESBZAkPoolType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_ESBZAkPoolType_h


#define FOREACH_ENUM_ESBZAKPOOLTYPE(op) \
	op(ESBZAkPoolType::NoPool) \
	op(ESBZAkPoolType::MainCharacterFootSteps) \
	op(ESBZAkPoolType::OtherFootSteps) \
	op(ESBZAkPoolType::WeaponImpact) \
	op(ESBZAkPoolType::EnvironmentImpact) \
	op(ESBZAkPoolType::Interaction) \
	op(ESBZAkPoolType::Max) 

enum class ESBZAkPoolType : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<ESBZAkPoolType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
