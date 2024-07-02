// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZDialogEndedReason_generated_h
#error "ESBZDialogEndedReason.generated.h already included, missing '#pragma once' in ESBZDialogEndedReason.h"
#endif
#define STARBREEZE_ESBZDialogEndedReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZDialogEndedReason_h


#define FOREACH_ENUM_ESBZDIALOGENDEDREASON(op) \
	op(ESBZDialogEndedReason::Completed) \
	op(ESBZDialogEndedReason::Interrupted) \
	op(ESBZDialogEndedReason::FailedToStart) 

enum class ESBZDialogEndedReason : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZDialogEndedReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
