// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZCurrentPlatform_generated_h
#error "ESBZCurrentPlatform.generated.h already included, missing '#pragma once' in ESBZCurrentPlatform.h"
#endif
#define STARBREEZE_ESBZCurrentPlatform_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZCurrentPlatform_h


#define FOREACH_ENUM_ESBZCURRENTPLATFORM(op) \
	op(ESBZCurrentPlatform::EP_UNKNOWN) \
	op(ESBZCurrentPlatform::EP_LINUX) \
	op(ESBZCurrentPlatform::EP_PC) \
	op(ESBZCurrentPlatform::EP_MAC) \
	op(ESBZCurrentPlatform::EP_XBOX) \
	op(ESBZCurrentPlatform::EP_PLAYSTATION) 

enum class ESBZCurrentPlatform : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZCurrentPlatform>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
