// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef SBZUTILITYPLUGIN_OnPlayerUnregisterDelegateDelegate_generated_h
#error "OnPlayerUnregisterDelegateDelegate.generated.h already included, missing '#pragma once' in OnPlayerUnregisterDelegateDelegate.h"
#endif
#define SBZUTILITYPLUGIN_OnPlayerUnregisterDelegateDelegate_generated_h

#define PAYDAY3_Plugins_EnginePlugins_SBZUtilityPlugin_Source_SBZUtilityPlugin_Public_OnPlayerUnregisterDelegateDelegate_h_6_DELEGATE \
struct _Script_SBZUtilityPlugin_eventOnPlayerUnregisterDelegate_Parms \
{ \
	FUniqueNetIdRepl UniquePlayerId; \
}; \
static inline void FOnPlayerUnregisterDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerUnregisterDelegate, FUniqueNetIdRepl const& UniquePlayerId) \
{ \
	_Script_SBZUtilityPlugin_eventOnPlayerUnregisterDelegate_Parms Parms; \
	Parms.UniquePlayerId=UniquePlayerId; \
	OnPlayerUnregisterDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_SBZUtilityPlugin_Source_SBZUtilityPlugin_Public_OnPlayerUnregisterDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
