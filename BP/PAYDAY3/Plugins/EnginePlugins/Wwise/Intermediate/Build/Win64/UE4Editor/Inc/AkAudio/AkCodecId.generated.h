// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkCodecId_generated_h
#error "AkCodecId.generated.h already included, missing '#pragma once' in AkCodecId.h"
#endif
#define AKAUDIO_AkCodecId_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCodecId_h


#define FOREACH_ENUM_AKCODECID(op) \
	op(AkCodecId::None) \
	op(AkCodecId::PCM) \
	op(AkCodecId::ADPCM) \
	op(AkCodecId::XMA) \
	op(AkCodecId::Vorbis) \
	op(AkCodecId::AAC) \
	op(AkCodecId::ATRAC9) \
	op(AkCodecId::OpusNX) \
	op(AkCodecId::AkOpus) \
	op(AkCodecId::AkOpusWEM) 

enum class AkCodecId : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<AkCodecId>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
