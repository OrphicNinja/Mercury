// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_ESoundSourceType_generated_h
#error "ESoundSourceType.generated.h already included, missing '#pragma once' in ESoundSourceType.h"
#endif
#define AKAUDIO_ESoundSourceType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_ESoundSourceType_h


#define FOREACH_ENUM_ESOUNDSOURCETYPE(op) \
	op(ESoundSourceType::Static) \
	op(ESoundSourceType::Dynamic) 

enum class ESoundSourceType : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<ESoundSourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
