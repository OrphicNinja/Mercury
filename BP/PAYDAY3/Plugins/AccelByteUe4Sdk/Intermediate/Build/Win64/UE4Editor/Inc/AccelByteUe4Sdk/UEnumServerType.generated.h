// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_UEnumServerType_generated_h
#error "UEnumServerType.generated.h already included, missing '#pragma once' in UEnumServerType.h"
#endif
#define ACCELBYTEUE4SDK_UEnumServerType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_UEnumServerType_h


#define FOREACH_ENUM_UENUMSERVERTYPE(op) \
	op(UEnumServerType::NONE) \
	op(UEnumServerType::CLOUDSERVER) \
	op(UEnumServerType::LOCALSERVER) 

enum class UEnumServerType : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<UEnumServerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
