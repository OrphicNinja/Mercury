// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZHackableActorUnlockMode_generated_h
#error "ESBZHackableActorUnlockMode.generated.h already included, missing '#pragma once' in ESBZHackableActorUnlockMode.h"
#endif
#define STARBREEZE_ESBZHackableActorUnlockMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZHackableActorUnlockMode_h


#define FOREACH_ENUM_ESBZHACKABLEACTORUNLOCKMODE(op) \
	op(ESBZHackableActorUnlockMode::NoSecurity) \
	op(ESBZHackableActorUnlockMode::HackUnlock) \
	op(ESBZHackableActorUnlockMode::KeyItemUnlock) 

enum class ESBZHackableActorUnlockMode : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZHackableActorUnlockMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
