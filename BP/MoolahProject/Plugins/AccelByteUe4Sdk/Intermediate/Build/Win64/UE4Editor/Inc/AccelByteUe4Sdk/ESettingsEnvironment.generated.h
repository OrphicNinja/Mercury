// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_ESettingsEnvironment_generated_h
#error "ESettingsEnvironment.generated.h already included, missing '#pragma once' in ESettingsEnvironment.h"
#endif
#define ACCELBYTEUE4SDK_ESettingsEnvironment_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ESettingsEnvironment_h


#define FOREACH_ENUM_ESETTINGSENVIRONMENT(op) \
	op(ESettingsEnvironment::Development) \
	op(ESettingsEnvironment::Certification) \
	op(ESettingsEnvironment::Production) \
	op(ESettingsEnvironment::Sandbox) \
	op(ESettingsEnvironment::Integration) \
	op(ESettingsEnvironment::QA) \
	op(ESettingsEnvironment::Default) 

enum class ESettingsEnvironment : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<ESettingsEnvironment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
