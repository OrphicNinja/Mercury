// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZRequestPresenceResult_generated_h
#error "ESBZRequestPresenceResult.generated.h already included, missing '#pragma once' in ESBZRequestPresenceResult.h"
#endif
#define STARBREEZE_ESBZRequestPresenceResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZRequestPresenceResult_h


#define FOREACH_ENUM_ESBZREQUESTPRESENCERESULT(op) \
	op(ESBZRequestPresenceResult::Success) \
	op(ESBZRequestPresenceResult::AlreadyConnectedOnOtherPlatform) \
	op(ESBZRequestPresenceResult::GetPresenceFailed) 

enum class ESBZRequestPresenceResult : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZRequestPresenceResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
