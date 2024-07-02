// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZAICrewDefeatStateChangedData;
#ifdef STARBREEZE_SBZAICrewDefeatStateChangedDelegateDelegate_generated_h
#error "SBZAICrewDefeatStateChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZAICrewDefeatStateChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZAICrewDefeatStateChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewDefeatStateChangedDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZAICrewDefeatStateChangedDelegate_Parms \
{ \
	FSBZAICrewDefeatStateChangedData InData; \
}; \
static inline void FSBZAICrewDefeatStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZAICrewDefeatStateChangedDelegate, FSBZAICrewDefeatStateChangedData const& InData) \
{ \
	_Script_Starbreeze_eventSBZAICrewDefeatStateChangedDelegate_Parms Parms; \
	Parms.InData=InData; \
	SBZAICrewDefeatStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAICrewDefeatStateChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
