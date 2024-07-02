// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZNotificationType_generated_h
#error "ESBZNotificationType.generated.h already included, missing '#pragma once' in ESBZNotificationType.h"
#endif
#define STARBREEZE_ESBZNotificationType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZNotificationType_h


#define FOREACH_ENUM_ESBZNOTIFICATIONTYPE(op) \
	op(ESBZNotificationType::NotificationError) \
	op(ESBZNotificationType::NotificationWarning) \
	op(ESBZNotificationType::NotificationNormal) \
	op(ESBZNotificationType::NotificationEmpty) 

enum class ESBZNotificationType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZNotificationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
