// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZLoginCode_generated_h
#error "ESBZLoginCode.generated.h already included, missing '#pragma once' in ESBZLoginCode.h"
#endif
#define STARBREEZE_ESBZLoginCode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZLoginCode_h


#define FOREACH_ENUM_ESBZLOGINCODE(op) \
	op(ESBZLoginCode::Success) \
	op(ESBZLoginCode::LoginFailed) \
	op(ESBZLoginCode::NebulaConnectionFailed) \
	op(ESBZLoginCode::LoginBadRequest) \
	op(ESBZLoginCode::LoginWrongCreds) \
	op(ESBZLoginCode::LoginLinkingTokenNotFound) \
	op(ESBZLoginCode::LoginLinkingDiffNAccount) \
	op(ESBZLoginCode::LoginPlayerBanned) 

enum class ESBZLoginCode : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZLoginCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
