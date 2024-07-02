// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZServiceStatus : uint8;
#ifdef STARBREEZE_SBZOnNetworkStatusDelegateDelegate_generated_h
#error "SBZOnNetworkStatusDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnNetworkStatusDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnNetworkStatusDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnNetworkStatusDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnNetworkStatusDelegate_Parms \
{ \
	ESBZServiceStatus ZServiceStatus; \
}; \
static inline void FSBZOnNetworkStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnNetworkStatusDelegate, ESBZServiceStatus ZServiceStatus) \
{ \
	_Script_Starbreeze_eventSBZOnNetworkStatusDelegate_Parms Parms; \
	Parms.ZServiceStatus=ZServiceStatus; \
	SBZOnNetworkStatusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnNetworkStatusDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
