// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_OnControlsReferenceActionPressedDelegate_generated_h
#error "OnControlsReferenceActionPressedDelegate.generated.h already included, missing '#pragma once' in OnControlsReferenceActionPressedDelegate.h"
#endif
#define STARBREEZE_OnControlsReferenceActionPressedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnControlsReferenceActionPressedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventOnControlsReferenceActionPressed_Parms \
{ \
	FName ActionName; \
}; \
static inline void FOnControlsReferenceActionPressed_DelegateWrapper(const FScriptDelegate& OnControlsReferenceActionPressed, FName ActionName) \
{ \
	_Script_Starbreeze_eventOnControlsReferenceActionPressed_Parms Parms; \
	Parms.ActionName=ActionName; \
	OnControlsReferenceActionPressed.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnControlsReferenceActionPressedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
