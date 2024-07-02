// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZBagTriggerMode_generated_h
#error "ESBZBagTriggerMode.generated.h already included, missing '#pragma once' in ESBZBagTriggerMode.h"
#endif
#define STARBREEZE_ESBZBagTriggerMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZBagTriggerMode_h


#define FOREACH_ENUM_ESBZBAGTRIGGERMODE(op) \
	op(ESBZBagTriggerMode::SecureAndDestroy) \
	op(ESBZBagTriggerMode::DestroyOnly) \
	op(ESBZBagTriggerMode::Teleport) \
	op(ESBZBagTriggerMode::Nothing) 

enum class ESBZBagTriggerMode : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZBagTriggerMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
