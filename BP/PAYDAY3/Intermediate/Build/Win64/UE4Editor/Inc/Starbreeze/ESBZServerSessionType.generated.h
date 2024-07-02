// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZServerSessionType_generated_h
#error "ESBZServerSessionType.generated.h already included, missing '#pragma once' in ESBZServerSessionType.h"
#endif
#define STARBREEZE_ESBZServerSessionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZServerSessionType_h


#define FOREACH_ENUM_ESBZSERVERSESSIONTYPE(op) \
	op(ESBZServerSessionType::ListenServer) \
	op(ESBZServerSessionType::DedicatedServer) 

enum class ESBZServerSessionType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZServerSessionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
