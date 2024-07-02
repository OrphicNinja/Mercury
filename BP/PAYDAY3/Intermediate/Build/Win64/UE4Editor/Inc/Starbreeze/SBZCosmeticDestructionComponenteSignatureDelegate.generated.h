// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZCosmeticDestructionType : uint8;
struct FSBZCosmeticDestructionContext;
#ifdef STARBREEZE_SBZCosmeticDestructionComponenteSignatureDelegate_generated_h
#error "SBZCosmeticDestructionComponenteSignatureDelegate.generated.h already included, missing '#pragma once' in SBZCosmeticDestructionComponenteSignatureDelegate.h"
#endif
#define STARBREEZE_SBZCosmeticDestructionComponenteSignatureDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponenteSignatureDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZCosmeticDestructionComponenteSignature_Parms \
{ \
	ESBZCosmeticDestructionType Type; \
	FSBZCosmeticDestructionContext HitContext; \
}; \
static inline void FSBZCosmeticDestructionComponenteSignature_DelegateWrapper(const FMulticastScriptDelegate& SBZCosmeticDestructionComponenteSignature, ESBZCosmeticDestructionType Type, FSBZCosmeticDestructionContext const& HitContext) \
{ \
	_Script_Starbreeze_eventSBZCosmeticDestructionComponenteSignature_Parms Parms; \
	Parms.Type=Type; \
	Parms.HitContext=HitContext; \
	SBZCosmeticDestructionComponenteSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponenteSignatureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
