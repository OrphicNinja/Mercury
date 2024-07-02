// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZMultiCodeDelegateDelegate_generated_h
#error "SBZMultiCodeDelegateDelegate.generated.h already included, missing '#pragma once' in SBZMultiCodeDelegateDelegate.h"
#endif
#define STARBREEZE_SBZMultiCodeDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZMultiCodeDelegate_Parms \
{ \
	int32 CorrectCodesNum; \
}; \
static inline void FSBZMultiCodeDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZMultiCodeDelegate, int32 CorrectCodesNum) \
{ \
	_Script_Starbreeze_eventSBZMultiCodeDelegate_Parms Parms; \
	Parms.CorrectCodesNum=CorrectCodesNum; \
	SBZMultiCodeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
