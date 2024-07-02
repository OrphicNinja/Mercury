// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZAIBehaviorCategory : uint8;
#ifdef STARBREEZE_SBZBehaviorCategoryChangedDelegateDelegate_generated_h
#error "SBZBehaviorCategoryChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZBehaviorCategoryChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZBehaviorCategoryChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBehaviorCategoryChangedDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZBehaviorCategoryChangedDelegate_Parms \
{ \
	ESBZAIBehaviorCategory OldCategory; \
	ESBZAIBehaviorCategory NewCategory; \
}; \
static inline void FSBZBehaviorCategoryChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZBehaviorCategoryChangedDelegate, ESBZAIBehaviorCategory OldCategory, ESBZAIBehaviorCategory NewCategory) \
{ \
	_Script_Starbreeze_eventSBZBehaviorCategoryChangedDelegate_Parms Parms; \
	Parms.OldCategory=OldCategory; \
	Parms.NewCategory=NewCategory; \
	SBZBehaviorCategoryChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBehaviorCategoryChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
