// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZChallengeData;
#ifdef STARBREEZE_SBZOnCompletedAchievementRequestDoneDelegateDelegate_generated_h
#error "SBZOnCompletedAchievementRequestDoneDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnCompletedAchievementRequestDoneDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnCompletedAchievementRequestDoneDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnCompletedAchievementRequestDoneDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnCompletedAchievementRequestDoneDelegate_Parms \
{ \
	FSBZChallengeData ChallengeData; \
}; \
static inline void FSBZOnCompletedAchievementRequestDoneDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnCompletedAchievementRequestDoneDelegate, FSBZChallengeData const& ChallengeData) \
{ \
	_Script_Starbreeze_eventSBZOnCompletedAchievementRequestDoneDelegate_Parms Parms; \
	Parms.ChallengeData=ChallengeData; \
	SBZOnCompletedAchievementRequestDoneDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnCompletedAchievementRequestDoneDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
