// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZPlayDialogResult_generated_h
#error "ESBZPlayDialogResult.generated.h already included, missing '#pragma once' in ESBZPlayDialogResult.h"
#endif
#define STARBREEZE_ESBZPlayDialogResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZPlayDialogResult_h


#define FOREACH_ENUM_ESBZPLAYDIALOGRESULT(op) \
	op(ESBZPlayDialogResult::Successful) \
	op(ESBZPlayDialogResult::Failed) \
	op(ESBZPlayDialogResult::Queued) 

enum class ESBZPlayDialogResult : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZPlayDialogResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
