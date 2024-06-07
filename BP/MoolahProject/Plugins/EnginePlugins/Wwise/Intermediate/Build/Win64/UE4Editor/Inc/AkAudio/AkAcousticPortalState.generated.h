// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkAcousticPortalState_generated_h
#error "AkAcousticPortalState.generated.h already included, missing '#pragma once' in AkAcousticPortalState.h"
#endif
#define AKAUDIO_AkAcousticPortalState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortalState_h


#define FOREACH_ENUM_AKACOUSTICPORTALSTATE(op) \
	op(AkAcousticPortalState::Closed) \
	op(AkAcousticPortalState::Open) 

enum class AkAcousticPortalState : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<AkAcousticPortalState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
