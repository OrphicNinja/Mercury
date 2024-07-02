// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZUIHUDContext;
#ifdef STARBREEZE_SBZOnHUDContextChangedDelegate_generated_h
#error "SBZOnHUDContextChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnHUDContextChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnHUDContextChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnHUDContextChangedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnHUDContextChanged_Parms \
{ \
	FSBZUIHUDContext OnHUDContextChanged; \
}; \
static inline void FSBZOnHUDContextChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnHUDContextChanged, FSBZUIHUDContext const& OnHUDContextChanged) \
{ \
	_Script_Starbreeze_eventSBZOnHUDContextChanged_Parms Parms; \
	Parms.OnHUDContextChanged=OnHUDContextChanged; \
	SBZOnHUDContextChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnHUDContextChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
