// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZVolumeType_generated_h
#error "ESBZVolumeType.generated.h already included, missing '#pragma once' in ESBZVolumeType.h"
#endif
#define STARBREEZE_ESBZVolumeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZVolumeType_h


#define FOREACH_ENUM_ESBZVOLUMETYPE(op) \
	op(ESBZVolumeType::Master) \
	op(ESBZVolumeType::Music) \
	op(ESBZVolumeType::VO) \
	op(ESBZVolumeType::SFX) \
	op(ESBZVolumeType::HUD) \
	op(ESBZVolumeType::VOIP) \
	op(ESBZVolumeType::Cinematic) 

enum class ESBZVolumeType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZVolumeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
