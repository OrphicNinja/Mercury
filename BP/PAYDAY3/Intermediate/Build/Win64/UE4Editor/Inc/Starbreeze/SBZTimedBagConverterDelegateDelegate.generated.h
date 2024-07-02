// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZTimedBagConverter;
#ifdef STARBREEZE_SBZTimedBagConverterDelegateDelegate_generated_h
#error "SBZTimedBagConverterDelegateDelegate.generated.h already included, missing '#pragma once' in SBZTimedBagConverterDelegateDelegate.h"
#endif
#define STARBREEZE_SBZTimedBagConverterDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverterDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZTimedBagConverterDelegate_Parms \
{ \
	ASBZTimedBagConverter* BagConverter; \
}; \
static inline void FSBZTimedBagConverterDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZTimedBagConverterDelegate, ASBZTimedBagConverter* BagConverter) \
{ \
	_Script_Starbreeze_eventSBZTimedBagConverterDelegate_Parms Parms; \
	Parms.BagConverter=BagConverter; \
	SBZTimedBagConverterDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverterDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
