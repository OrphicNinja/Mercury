// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMetaRequestResult : uint8;
class USBZInventoryBaseData;
#ifdef STARBREEZE_OnVendorItemTransactionCompleteDelegate_generated_h
#error "OnVendorItemTransactionCompleteDelegate.generated.h already included, missing '#pragma once' in OnVendorItemTransactionCompleteDelegate.h"
#endif
#define STARBREEZE_OnVendorItemTransactionCompleteDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnVendorItemTransactionCompleteDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventOnVendorItemTransactionComplete_Parms \
{ \
	ESBZMetaRequestResult MetaRequestResult; \
	const USBZInventoryBaseData* Item; \
}; \
static inline void FOnVendorItemTransactionComplete_DelegateWrapper(const FMulticastScriptDelegate& OnVendorItemTransactionComplete, ESBZMetaRequestResult MetaRequestResult, const USBZInventoryBaseData* Item) \
{ \
	_Script_Starbreeze_eventOnVendorItemTransactionComplete_Parms Parms; \
	Parms.MetaRequestResult=MetaRequestResult; \
	Parms.Item=Item; \
	OnVendorItemTransactionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnVendorItemTransactionCompleteDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
