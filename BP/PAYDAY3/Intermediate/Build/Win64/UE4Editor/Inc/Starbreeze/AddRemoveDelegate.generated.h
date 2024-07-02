// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef STARBREEZE_AddRemoveDelegate_generated_h
#error "AddRemoveDelegate.generated.h already included, missing '#pragma once' in AddRemoveDelegate.h"
#endif
#define STARBREEZE_AddRemoveDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_AddRemoveDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventAddRemove_Parms \
{ \
	UObject* Obj; \
}; \
static inline void FAddRemove_DelegateWrapper(const FMulticastScriptDelegate& AddRemove, UObject* Obj) \
{ \
	_Script_Starbreeze_eventAddRemove_Parms Parms; \
	Parms.Obj=Obj; \
	AddRemove.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_AddRemoveDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
