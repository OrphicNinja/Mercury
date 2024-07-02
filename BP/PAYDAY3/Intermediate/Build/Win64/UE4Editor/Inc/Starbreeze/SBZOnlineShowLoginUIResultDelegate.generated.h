// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef STARBREEZE_SBZOnlineShowLoginUIResultDelegate_generated_h
#error "SBZOnlineShowLoginUIResultDelegate.generated.h already included, missing '#pragma once' in SBZOnlineShowLoginUIResultDelegate.h"
#endif
#define STARBREEZE_SBZOnlineShowLoginUIResultDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineShowLoginUIResultDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnlineShowLoginUIResult_Parms \
{ \
	APlayerController* PlayerController; \
}; \
static inline void FSBZOnlineShowLoginUIResult_DelegateWrapper(const FMulticastScriptDelegate& SBZOnlineShowLoginUIResult, APlayerController* PlayerController) \
{ \
	_Script_Starbreeze_eventSBZOnlineShowLoginUIResult_Parms Parms; \
	Parms.PlayerController=PlayerController; \
	SBZOnlineShowLoginUIResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnlineShowLoginUIResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
