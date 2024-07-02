// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZRoomType_generated_h
#error "ESBZRoomType.generated.h already included, missing '#pragma once' in ESBZRoomType.h"
#endif
#define STARBREEZE_ESBZRoomType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZRoomType_h


#define FOREACH_ENUM_ESBZROOMTYPE(op) \
	op(ESBZRoomType::None) \
	op(ESBZRoomType::Public) \
	op(ESBZRoomType::Private) \
	op(ESBZRoomType::Secure) 

enum class ESBZRoomType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZRoomType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
