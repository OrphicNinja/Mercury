// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EPlayerReadyStatusValue_generated_h
#error "EPlayerReadyStatusValue.generated.h already included, missing '#pragma once' in EPlayerReadyStatusValue.h"
#endif
#define STARBREEZE_EPlayerReadyStatusValue_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EPlayerReadyStatusValue_h


#define FOREACH_ENUM_EPLAYERREADYSTATUSVALUE(op) \
	op(EPlayerReadyStatusValue::Loading) \
	op(EPlayerReadyStatusValue::NotReady) \
	op(EPlayerReadyStatusValue::Ready) \
	op(EPlayerReadyStatusValue::Transition) \
	op(EPlayerReadyStatusValue::InGame) 

enum class EPlayerReadyStatusValue : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EPlayerReadyStatusValue>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
