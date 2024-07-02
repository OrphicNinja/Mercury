// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EPingQuality_generated_h
#error "EPingQuality.generated.h already included, missing '#pragma once' in EPingQuality.h"
#endif
#define STARBREEZE_EPingQuality_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EPingQuality_h


#define FOREACH_ENUM_EPINGQUALITY(op) \
	op(EPingQuality::EPQ_Default) \
	op(EPingQuality::EPQ_Fair) \
	op(EPingQuality::EPQ_High) \
	op(EPingQuality::EPQ_Critical) 

enum class EPingQuality : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EPingQuality>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
