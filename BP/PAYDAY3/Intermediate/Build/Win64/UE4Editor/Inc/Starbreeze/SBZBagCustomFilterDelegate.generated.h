// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZBagHandle;
#ifdef STARBREEZE_SBZBagCustomFilterDelegate_generated_h
#error "SBZBagCustomFilterDelegate.generated.h already included, missing '#pragma once' in SBZBagCustomFilterDelegate.h"
#endif
#define STARBREEZE_SBZBagCustomFilterDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBagCustomFilterDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZBagCustomFilter_Parms \
{ \
	FSBZBagHandle BagHandle; \
	bool Ret; \
}; \
static inline void FSBZBagCustomFilter_DelegateWrapper(const FScriptDelegate& SBZBagCustomFilter, FSBZBagHandle BagHandle, bool& Ret) \
{ \
	_Script_Starbreeze_eventSBZBagCustomFilter_Parms Parms; \
	Parms.BagHandle=BagHandle; \
	Parms.Ret=Ret ? true : false; \
	SBZBagCustomFilter.ProcessDelegate<UObject>(&Parms); \
	Ret=Parms.Ret; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBagCustomFilterDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
