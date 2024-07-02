// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef STARBREEZE_DropElementDelegateDelegate_generated_h
#error "DropElementDelegateDelegate.generated.h already included, missing '#pragma once' in DropElementDelegateDelegate.h"
#endif
#define STARBREEZE_DropElementDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_DropElementDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventDropElementDelegate_Parms \
{ \
	UObject* DroppedElement; \
}; \
static inline void FDropElementDelegate_DelegateWrapper(const FMulticastScriptDelegate& DropElementDelegate, UObject* DroppedElement) \
{ \
	_Script_Starbreeze_eventDropElementDelegate_Parms Parms; \
	Parms.DroppedElement=DroppedElement; \
	DropElementDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_DropElementDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
