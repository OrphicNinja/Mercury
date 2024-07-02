// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZBinaryStateChangedSignatureDelegate_generated_h
#error "SBZBinaryStateChangedSignatureDelegate.generated.h already included, missing '#pragma once' in SBZBinaryStateChangedSignatureDelegate.h"
#endif
#define STARBREEZE_SBZBinaryStateChangedSignatureDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateChangedSignatureDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZBinaryStateChangedSignature_Parms \
{ \
	bool bState; \
	bool bDoCosmetics; \
}; \
static inline void FSBZBinaryStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SBZBinaryStateChangedSignature, bool bState, bool bDoCosmetics) \
{ \
	_Script_Starbreeze_eventSBZBinaryStateChangedSignature_Parms Parms; \
	Parms.bState=bState ? true : false; \
	Parms.bDoCosmetics=bDoCosmetics ? true : false; \
	SBZBinaryStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateChangedSignatureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
