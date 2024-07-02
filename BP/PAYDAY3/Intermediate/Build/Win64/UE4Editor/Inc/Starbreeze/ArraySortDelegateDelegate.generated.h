// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef STARBREEZE_ArraySortDelegateDelegate_generated_h
#error "ArraySortDelegateDelegate.generated.h already included, missing '#pragma once' in ArraySortDelegateDelegate.h"
#endif
#define STARBREEZE_ArraySortDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_ArraySortDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventArraySortDelegate_Parms \
{ \
	UObject* ObjectA; \
	UObject* ObjectB; \
	bool ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_Starbreeze_eventArraySortDelegate_Parms() \
		: ReturnValue(false) \
	{ \
	} \
}; \
static inline bool FArraySortDelegate_DelegateWrapper(const FScriptDelegate& ArraySortDelegate, UObject* ObjectA, UObject* ObjectB) \
{ \
	_Script_Starbreeze_eventArraySortDelegate_Parms Parms; \
	Parms.ObjectA=ObjectA; \
	Parms.ObjectB=ObjectB; \
	ArraySortDelegate.ProcessDelegate<UObject>(&Parms); \
	return !!Parms.ReturnValue; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ArraySortDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
