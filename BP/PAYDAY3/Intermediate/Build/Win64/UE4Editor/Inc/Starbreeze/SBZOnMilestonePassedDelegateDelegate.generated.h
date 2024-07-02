// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMilestoneType : uint8;
#ifdef STARBREEZE_SBZOnMilestonePassedDelegateDelegate_generated_h
#error "SBZOnMilestonePassedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnMilestonePassedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnMilestonePassedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnMilestonePassedDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnMilestonePassedDelegate_Parms \
{ \
	ESBZMilestoneType MilestoneType; \
	FString MilestoneName; \
}; \
static inline void FSBZOnMilestonePassedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnMilestonePassedDelegate, const ESBZMilestoneType MilestoneType, const FString& MilestoneName) \
{ \
	_Script_Starbreeze_eventSBZOnMilestonePassedDelegate_Parms Parms; \
	Parms.MilestoneType=MilestoneType; \
	Parms.MilestoneName=MilestoneName; \
	SBZOnMilestonePassedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnMilestonePassedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
