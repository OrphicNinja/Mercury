// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPD3KeyItemContainer;
#ifdef STARBREEZE_SBZOnKeyItemCountChangedDelegateDelegate_generated_h
#error "SBZOnKeyItemCountChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnKeyItemCountChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnKeyItemCountChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnKeyItemCountChangedDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnKeyItemCountChangedDelegate_Parms \
{ \
	UPD3KeyItemContainer* InContainer; \
}; \
static inline void FSBZOnKeyItemCountChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnKeyItemCountChangedDelegate, UPD3KeyItemContainer* InContainer) \
{ \
	_Script_Starbreeze_eventSBZOnKeyItemCountChangedDelegate_Parms Parms; \
	Parms.InContainer=InContainer; \
	SBZOnKeyItemCountChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnKeyItemCountChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
