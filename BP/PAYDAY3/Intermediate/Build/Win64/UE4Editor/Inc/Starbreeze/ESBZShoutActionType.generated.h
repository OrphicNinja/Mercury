// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZShoutActionType_generated_h
#error "ESBZShoutActionType.generated.h already included, missing '#pragma once' in ESBZShoutActionType.h"
#endif
#define STARBREEZE_ESBZShoutActionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZShoutActionType_h


#define FOREACH_ENUM_ESBZSHOUTACTIONTYPE(op) \
	op(ESBZShoutActionType::None) \
	op(ESBZShoutActionType::Mark) \
	op(ESBZShoutActionType::HelpMe) \
	op(ESBZShoutActionType::HelpOther) \
	op(ESBZShoutActionType::Callout) \
	op(ESBZShoutActionType::Comment) \
	op(ESBZShoutActionType::GetDown) \
	op(ESBZShoutActionType::CopSurrender) 

enum class ESBZShoutActionType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZShoutActionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
