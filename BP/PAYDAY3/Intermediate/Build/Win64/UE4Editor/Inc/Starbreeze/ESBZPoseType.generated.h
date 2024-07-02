// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZPoseType_generated_h
#error "ESBZPoseType.generated.h already included, missing '#pragma once' in ESBZPoseType.h"
#endif
#define STARBREEZE_ESBZPoseType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZPoseType_h


#define FOREACH_ENUM_ESBZPOSETYPE(op) \
	op(ESBZPoseType::FullBody) \
	op(ESBZPoseType::UpperBody) \
	op(ESBZPoseType::UpperBodyEquipped) \
	op(ESBZPoseType::UpperBodyEquippedReady) \
	op(ESBZPoseType::UpperBodyEquippedRelaxed) \
	op(ESBZPoseType::UpperBodyUsingEquipped) \
	op(ESBZPoseType::UpperBodyLeftHandEquipped) \
	op(ESBZPoseType::UpperBodyLeftHandEquippedUsing) 

enum class ESBZPoseType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZPoseType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
