// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnChargesChangedDelegateDelegate_generated_h
#error "SBZOnChargesChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnChargesChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnChargesChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnChargesChangedDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnChargesChangedDelegate_Parms \
{ \
	int32 NewCount; \
}; \
static inline void FSBZOnChargesChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnChargesChangedDelegate, int32 NewCount) \
{ \
	_Script_Starbreeze_eventSBZOnChargesChangedDelegate_Parms Parms; \
	Parms.NewCount=NewCount; \
	SBZOnChargesChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnChargesChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
