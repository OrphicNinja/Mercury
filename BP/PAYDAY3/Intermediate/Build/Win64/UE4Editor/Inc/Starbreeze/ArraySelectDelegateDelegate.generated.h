// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef STARBREEZE_ArraySelectDelegateDelegate_generated_h
#error "ArraySelectDelegateDelegate.generated.h already included, missing '#pragma once' in ArraySelectDelegateDelegate.h"
#endif
#define STARBREEZE_ArraySelectDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_ArraySelectDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventArraySelectDelegate_Parms \
{ \
	UObject* Object; \
	bool ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_Starbreeze_eventArraySelectDelegate_Parms() \
		: ReturnValue(false) \
	{ \
	} \
}; \
static inline bool FArraySelectDelegate_DelegateWrapper(const FScriptDelegate& ArraySelectDelegate, UObject* Object) \
{ \
	_Script_Starbreeze_eventArraySelectDelegate_Parms Parms; \
	Parms.Object=Object; \
	ArraySelectDelegate.ProcessDelegate<UObject>(&Parms); \
	return !!Parms.ReturnValue; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ArraySelectDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
