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
#ifdef STARBREEZE_SBZPropDamageHealthSignatureDelegate_generated_h
#error "SBZPropDamageHealthSignatureDelegate.generated.h already included, missing '#pragma once' in SBZPropDamageHealthSignatureDelegate.h"
#endif
#define STARBREEZE_SBZPropDamageHealthSignatureDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPropDamageHealthSignatureDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZPropDamageHealthSignature_Parms \
{ \
	UActorComponent* PoolComponent; \
	float Health; \
	bool bDoCosmetics; \
	FSBZPropDamageContext DamageContext; \
}; \
static inline void FSBZPropDamageHealthSignature_DelegateWrapper(const FMulticastScriptDelegate& SBZPropDamageHealthSignature, UActorComponent* PoolComponent, float Health, bool bDoCosmetics, FSBZPropDamageContext const& DamageContext) \
{ \
	_Script_Starbreeze_eventSBZPropDamageHealthSignature_Parms Parms; \
	Parms.PoolComponent=PoolComponent; \
	Parms.Health=Health; \
	Parms.bDoCosmetics=bDoCosmetics ? true : false; \
	Parms.DamageContext=DamageContext; \
	SBZPropDamageHealthSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPropDamageHealthSignatureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
