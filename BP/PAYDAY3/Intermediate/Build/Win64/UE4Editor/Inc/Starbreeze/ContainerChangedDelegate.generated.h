// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef STARBREEZE_ContainerChangedDelegate_generated_h
#error "ContainerChangedDelegate.generated.h already included, missing '#pragma once' in ContainerChangedDelegate.h"
#endif
#define STARBREEZE_ContainerChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_ContainerChangedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventContainerChanged_Parms \
{ \
	TArray<UObject*> Array; \
}; \
static inline void FContainerChanged_DelegateWrapper(const FMulticastScriptDelegate& ContainerChanged, TArray<UObject*> const& Array) \
{ \
	_Script_Starbreeze_eventContainerChanged_Parms Parms; \
	Parms.Array=Array; \
	ContainerChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ContainerChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
