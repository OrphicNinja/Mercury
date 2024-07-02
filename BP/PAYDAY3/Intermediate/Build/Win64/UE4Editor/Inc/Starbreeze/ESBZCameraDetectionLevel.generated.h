// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZCameraDetectionLevel_generated_h
#error "ESBZCameraDetectionLevel.generated.h already included, missing '#pragma once' in ESBZCameraDetectionLevel.h"
#endif
#define STARBREEZE_ESBZCameraDetectionLevel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZCameraDetectionLevel_h


#define FOREACH_ENUM_ESBZCAMERADETECTIONLEVEL(op) \
	op(ESBZCameraDetectionLevel::None) \
	op(ESBZCameraDetectionLevel::Investigate) \
	op(ESBZCameraDetectionLevel::Criminal) \
	op(ESBZCameraDetectionLevel::Alarm) 

enum class ESBZCameraDetectionLevel : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZCameraDetectionLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
