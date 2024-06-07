// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPaginatedLeaderboardData;
#ifdef ACCELBYTEUE4SDK_DModelsPaginatedLeaderboardDataDelegate_generated_h
#error "DModelsPaginatedLeaderboardDataDelegate.generated.h already included, missing '#pragma once' in DModelsPaginatedLeaderboardDataDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsPaginatedLeaderboardDataDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedLeaderboardDataDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsPaginatedLeaderboardData_Parms \
{ \
	FAccelByteModelsPaginatedLeaderboardData Response; \
}; \
static inline void FDModelsPaginatedLeaderboardData_DelegateWrapper(const FScriptDelegate& DModelsPaginatedLeaderboardData, FAccelByteModelsPaginatedLeaderboardData Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsPaginatedLeaderboardData_Parms Parms; \
	Parms.Response=Response; \
	DModelsPaginatedLeaderboardData.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedLeaderboardDataDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
