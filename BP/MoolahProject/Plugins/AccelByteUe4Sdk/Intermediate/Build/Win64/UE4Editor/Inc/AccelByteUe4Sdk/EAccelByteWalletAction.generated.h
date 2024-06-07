// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteWalletAction_generated_h
#error "EAccelByteWalletAction.generated.h already included, missing '#pragma once' in EAccelByteWalletAction.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteWalletAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteWalletAction_h


#define FOREACH_ENUM_EACCELBYTEWALLETACTION(op) \
	op(EAccelByteWalletAction::NONE) \
	op(EAccelByteWalletAction::CREDIT) \
	op(EAccelByteWalletAction::PAYMENT) \
	op(EAccelByteWalletAction::DEBIT) 

enum class EAccelByteWalletAction : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteWalletAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
