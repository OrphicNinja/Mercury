// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetMemberRolesListResponse;
#ifdef ACCELBYTEUE4SDK_GetMemberRolesSuccessDelegate_generated_h
#error "GetMemberRolesSuccessDelegate.generated.h already included, missing '#pragma once' in GetMemberRolesSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_GetMemberRolesSuccessDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetMemberRolesSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventGetMemberRolesSuccess_Parms \
{ \
	FAccelByteModelsGetMemberRolesListResponse Response; \
}; \
static inline void FGetMemberRolesSuccess_DelegateWrapper(const FScriptDelegate& GetMemberRolesSuccess, FAccelByteModelsGetMemberRolesListResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventGetMemberRolesSuccess_Parms Parms; \
	Parms.Response=Response; \
	GetMemberRolesSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetMemberRolesSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
