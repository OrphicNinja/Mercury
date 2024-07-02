// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
struct FSBZPropDamageContext;
#ifdef STARBREEZE_SBZPropDamageHitsSignatureDelegate_generated_h
#error "SBZPropDamageHitsSignatureDelegate.generated.h already included, missing '#pragma once' in SBZPropDamageHitsSignatureDelegate.h"
#endif
#define STARBREEZE_SBZPropDamageHitsSignatureDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPropDamageHitsSignatureDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZPropDamageHitsSignature_Parms \
{ \
	UActorComponent* PoolComponent; \
	int32 Hits; \
	bool bDoCosmetics; \
	FSBZPropDamageContext DamageContext; \
}; \
static inline void FSBZPropDamageHitsSignature_DelegateWrapper(const FMulticastScriptDelegate& SBZPropDamageHitsSignature, UActorComponent* PoolComponent, int32 Hits, bool bDoCosmetics, FSBZPropDamageContext const& DamageContext) \
{ \
	_Script_Starbreeze_eventSBZPropDamageHitsSignature_Parms Parms; \
	Parms.PoolComponent=PoolComponent; \
	Parms.Hits=Hits; \
	Parms.bDoCosmetics=bDoCosmetics ? true : false; \
	Parms.DamageContext=DamageContext; \
	SBZPropDamageHitsSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPropDamageHitsSignatureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
