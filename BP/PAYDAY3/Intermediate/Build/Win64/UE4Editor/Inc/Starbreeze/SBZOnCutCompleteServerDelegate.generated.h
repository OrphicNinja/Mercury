// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STARBREEZE_SBZOnCutCompleteServerDelegate_generated_h
#error "SBZOnCutCompleteServerDelegate.generated.h already included, missing '#pragma once' in SBZOnCutCompleteServerDelegate.h"
#endif
#define STARBREEZE_SBZOnCutCompleteServerDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnCutCompleteServerDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnCutCompleteServer_Parms \
{ \
	AActor* CuttableActor; \
}; \
static inline void FSBZOnCutCompleteServer_DelegateWrapper(const FMulticastScriptDelegate& SBZOnCutCompleteServer, AActor* CuttableActor) \
{ \
	_Script_Starbreeze_eventSBZOnCutCompleteServer_Parms Parms; \
	Parms.CuttableActor=CuttableActor; \
	SBZOnCutCompleteServer.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnCutCompleteServerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
