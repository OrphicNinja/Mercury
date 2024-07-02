// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_OnSafeHouseLoadProgressUpdateDelegate_generated_h
#error "OnSafeHouseLoadProgressUpdateDelegate.generated.h already included, missing '#pragma once' in OnSafeHouseLoadProgressUpdateDelegate.h"
#endif
#define STARBREEZE_OnSafeHouseLoadProgressUpdateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnSafeHouseLoadProgressUpdateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventOnSafeHouseLoadProgressUpdate_Parms \
{ \
	float Progress; \
}; \
static inline void FOnSafeHouseLoadProgressUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnSafeHouseLoadProgressUpdate, float Progress) \
{ \
	_Script_Starbreeze_eventOnSafeHouseLoadProgressUpdate_Parms Parms; \
	Parms.Progress=Progress; \
	OnSafeHouseLoadProgressUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnSafeHouseLoadProgressUpdateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
