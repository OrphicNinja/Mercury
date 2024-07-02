// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnSanitizeDisplayNamesCompleteDelegate_generated_h
#error "SBZOnSanitizeDisplayNamesCompleteDelegate.generated.h already included, missing '#pragma once' in SBZOnSanitizeDisplayNamesCompleteDelegate.h"
#endif
#define STARBREEZE_SBZOnSanitizeDisplayNamesCompleteDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnSanitizeDisplayNamesCompleteDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnSanitizeDisplayNamesComplete_Parms \
{ \
	TArray<FString> SanitizedDisplayNames; \
}; \
static inline void FSBZOnSanitizeDisplayNamesComplete_DelegateWrapper(const FMulticastScriptDelegate& SBZOnSanitizeDisplayNamesComplete, TArray<FString> const& SanitizedDisplayNames) \
{ \
	_Script_Starbreeze_eventSBZOnSanitizeDisplayNamesComplete_Parms Parms; \
	Parms.SanitizedDisplayNames=SanitizedDisplayNames; \
	SBZOnSanitizeDisplayNamesComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnSanitizeDisplayNamesCompleteDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
