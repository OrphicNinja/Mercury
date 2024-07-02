// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZIntStateChangedSignatureDelegate_generated_h
#error "SBZIntStateChangedSignatureDelegate.generated.h already included, missing '#pragma once' in SBZIntStateChangedSignatureDelegate.h"
#endif
#define STARBREEZE_SBZIntStateChangedSignatureDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateChangedSignatureDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZIntStateChangedSignature_Parms \
{ \
	int32 OldState; \
	int32 NewState; \
	bool bDoCosmetics; \
}; \
static inline void FSBZIntStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SBZIntStateChangedSignature, int32 OldState, int32 NewState, bool bDoCosmetics) \
{ \
	_Script_Starbreeze_eventSBZIntStateChangedSignature_Parms Parms; \
	Parms.OldState=OldState; \
	Parms.NewState=NewState; \
	Parms.bDoCosmetics=bDoCosmetics ? true : false; \
	SBZIntStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZIntStateChangedSignatureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
