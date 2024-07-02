// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZPartyError_generated_h
#error "ESBZPartyError.generated.h already included, missing '#pragma once' in ESBZPartyError.h"
#endif
#define STARBREEZE_ESBZPartyError_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZPartyError_h


#define FOREACH_ENUM_ESBZPARTYERROR(op) \
	op(ESBZPartyError::DifferentGameClientsVersion) \
	op(ESBZPartyError::FriendNotFound) \
	op(ESBZPartyError::PartyLeaderLeft) \
	op(ESBZPartyError::DifferentHostingProvider) 

enum class ESBZPartyError : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZPartyError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
