// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPlayerController;
class ISBZViewTargetCollectionInterface;
#ifdef STARBREEZE_SBZViewTargetCollectionChangedDelegateDelegate_generated_h
#error "SBZViewTargetCollectionChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZViewTargetCollectionChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZViewTargetCollectionChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionChangedDelegateDelegate_h_9_DELEGATE \
struct _Script_Starbreeze_eventSBZViewTargetCollectionChangedDelegate_Parms \
{ \
	ASBZPlayerController* PlayerController; \
	TScriptInterface<ISBZViewTargetCollectionInterface> ViewTargetCollection; \
}; \
static inline void FSBZViewTargetCollectionChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZViewTargetCollectionChangedDelegate, ASBZPlayerController* PlayerController, TScriptInterface<ISBZViewTargetCollectionInterface> const& ViewTargetCollection) \
{ \
	_Script_Starbreeze_eventSBZViewTargetCollectionChangedDelegate_Parms Parms; \
	Parms.PlayerController=PlayerController; \
	Parms.ViewTargetCollection=ViewTargetCollection; \
	SBZViewTargetCollectionChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
