// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef STARBREEZE_SBZSmartLinkReachedSignatureDelegate_generated_h
#error "SBZSmartLinkReachedSignatureDelegate.generated.h already included, missing '#pragma once' in SBZSmartLinkReachedSignatureDelegate.h"
#endif
#define STARBREEZE_SBZSmartLinkReachedSignatureDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSmartLinkReachedSignatureDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZSmartLinkReachedSignature_Parms \
{ \
	AActor* MovingActor; \
	FVector DestinationPoint; \
}; \
static inline void FSBZSmartLinkReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& SBZSmartLinkReachedSignature, AActor* MovingActor, FVector const& DestinationPoint) \
{ \
	_Script_Starbreeze_eventSBZSmartLinkReachedSignature_Parms Parms; \
	Parms.MovingActor=MovingActor; \
	Parms.DestinationPoint=DestinationPoint; \
	SBZSmartLinkReachedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSmartLinkReachedSignatureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
