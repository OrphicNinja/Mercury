// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZWindData;
#ifdef STARBREEZE_SBZOnWindChangedDelegateDelegate_generated_h
#error "SBZOnWindChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnWindChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnWindChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnWindChangedDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnWindChangedDelegate_Parms \
{ \
	FSBZWindData WindData; \
	int32 InstanceIndex; \
}; \
static inline void FSBZOnWindChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnWindChangedDelegate, FSBZWindData const& WindData, int32 InstanceIndex) \
{ \
	_Script_Starbreeze_eventSBZOnWindChangedDelegate_Parms Parms; \
	Parms.WindData=WindData; \
	Parms.InstanceIndex=InstanceIndex; \
	SBZOnWindChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnWindChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
