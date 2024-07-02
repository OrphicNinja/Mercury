// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMetaRequestResult : uint8;
struct FGuid;
#ifdef STARBREEZE_OnMetaRequestResultAndItemIdBluePrintDelegateDelegate_generated_h
#error "OnMetaRequestResultAndItemIdBluePrintDelegateDelegate.generated.h already included, missing '#pragma once' in OnMetaRequestResultAndItemIdBluePrintDelegateDelegate.h"
#endif
#define STARBREEZE_OnMetaRequestResultAndItemIdBluePrintDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnMetaRequestResultAndItemIdBluePrintDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnMetaRequestResultAndItemIdBluePrintDelegate_Parms \
{ \
	ESBZMetaRequestResult Result; \
	FGuid Guid; \
}; \
static inline void FOnMetaRequestResultAndItemIdBluePrintDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMetaRequestResultAndItemIdBluePrintDelegate, ESBZMetaRequestResult Result, FGuid Guid) \
{ \
	_Script_Starbreeze_eventOnMetaRequestResultAndItemIdBluePrintDelegate_Parms Parms; \
	Parms.Result=Result; \
	Parms.Guid=Guid; \
	OnMetaRequestResultAndItemIdBluePrintDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnMetaRequestResultAndItemIdBluePrintDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
