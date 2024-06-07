// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
#ifdef SBZUTILITYPLUGIN_OnPlayerRegisterDelegateDelegate_generated_h
#error "OnPlayerRegisterDelegateDelegate.generated.h already included, missing '#pragma once' in OnPlayerRegisterDelegateDelegate.h"
#endif
#define SBZUTILITYPLUGIN_OnPlayerRegisterDelegateDelegate_generated_h

#define MoolahProject_Plugins_EnginePlugins_SBZUtilityPlugin_Source_SBZUtilityPlugin_Public_OnPlayerRegisterDelegateDelegate_h_7_DELEGATE \
struct _Script_SBZUtilityPlugin_eventOnPlayerRegisterDelegate_Parms \
{ \
	APlayerState* PlayerState; \
}; \
static inline void FOnPlayerRegisterDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerRegisterDelegate, APlayerState* PlayerState) \
{ \
	_Script_SBZUtilityPlugin_eventOnPlayerRegisterDelegate_Parms Parms; \
	Parms.PlayerState=PlayerState; \
	OnPlayerRegisterDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_SBZUtilityPlugin_Source_SBZUtilityPlugin_Public_OnPlayerRegisterDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
