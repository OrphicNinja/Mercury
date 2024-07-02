// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPlayerDefeatStateChangedData;
#ifdef STARBREEZE_SBZPlayerDefeatStateChangedDelegateDelegate_generated_h
#error "SBZPlayerDefeatStateChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZPlayerDefeatStateChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZPlayerDefeatStateChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerDefeatStateChangedDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZPlayerDefeatStateChangedDelegate_Parms \
{ \
	FSBZPlayerDefeatStateChangedData InData; \
}; \
static inline void FSBZPlayerDefeatStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZPlayerDefeatStateChangedDelegate, FSBZPlayerDefeatStateChangedData const& InData) \
{ \
	_Script_Starbreeze_eventSBZPlayerDefeatStateChangedDelegate_Parms Parms; \
	Parms.InData=InData; \
	SBZPlayerDefeatStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerDefeatStateChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
