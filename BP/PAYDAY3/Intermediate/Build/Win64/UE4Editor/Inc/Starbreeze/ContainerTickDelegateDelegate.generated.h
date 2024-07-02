// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZObjectContainer;
#ifdef STARBREEZE_ContainerTickDelegateDelegate_generated_h
#error "ContainerTickDelegateDelegate.generated.h already included, missing '#pragma once' in ContainerTickDelegateDelegate.h"
#endif
#define STARBREEZE_ContainerTickDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_ContainerTickDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventContainerTickDelegate_Parms \
{ \
	USBZObjectContainer* Container; \
	float DeltaTime; \
}; \
static inline void FContainerTickDelegate_DelegateWrapper(const FScriptDelegate& ContainerTickDelegate, USBZObjectContainer* Container, float DeltaTime) \
{ \
	_Script_Starbreeze_eventContainerTickDelegate_Parms Parms; \
	Parms.Container=Container; \
	Parms.DeltaTime=DeltaTime; \
	ContainerTickDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ContainerTickDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
