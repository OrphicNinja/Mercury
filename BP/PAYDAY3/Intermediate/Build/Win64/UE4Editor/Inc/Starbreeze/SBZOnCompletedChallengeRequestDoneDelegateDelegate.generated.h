// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZChallengeData;
#ifdef STARBREEZE_SBZOnCompletedChallengeRequestDoneDelegateDelegate_generated_h
#error "SBZOnCompletedChallengeRequestDoneDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnCompletedChallengeRequestDoneDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnCompletedChallengeRequestDoneDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnCompletedChallengeRequestDoneDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnCompletedChallengeRequestDoneDelegate_Parms \
{ \
	FSBZChallengeData ChallengeData; \
}; \
static inline void FSBZOnCompletedChallengeRequestDoneDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnCompletedChallengeRequestDoneDelegate, FSBZChallengeData const& ChallengeData) \
{ \
	_Script_Starbreeze_eventSBZOnCompletedChallengeRequestDoneDelegate_Parms Parms; \
	Parms.ChallengeData=ChallengeData; \
	SBZOnCompletedChallengeRequestDoneDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnCompletedChallengeRequestDoneDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
