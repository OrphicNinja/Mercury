// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZLevelEventDistributorDelegate_generated_h
#error "SBZLevelEventDistributorDelegate.generated.h already included, missing '#pragma once' in SBZLevelEventDistributorDelegate.h"
#endif
#define STARBREEZE_SBZLevelEventDistributorDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLevelEventDistributorDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZLevelEventDistributor_Parms \
{ \
	TArray<int32> CompletedIndexes; \
}; \
static inline void FSBZLevelEventDistributor_DelegateWrapper(const FMulticastScriptDelegate& SBZLevelEventDistributor, TArray<int32> const& CompletedIndexes) \
{ \
	_Script_Starbreeze_eventSBZLevelEventDistributor_Parms Parms; \
	Parms.CompletedIndexes=CompletedIndexes; \
	SBZLevelEventDistributor.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLevelEventDistributorDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
