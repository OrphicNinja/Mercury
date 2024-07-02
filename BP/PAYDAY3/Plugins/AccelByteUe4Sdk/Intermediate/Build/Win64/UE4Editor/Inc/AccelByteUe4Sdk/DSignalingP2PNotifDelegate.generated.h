// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_DSignalingP2PNotifDelegate_generated_h
#error "DSignalingP2PNotifDelegate.generated.h already included, missing '#pragma once' in DSignalingP2PNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DSignalingP2PNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSignalingP2PNotifDelegate_h_5_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDSignalingP2PNotif_Parms \
{ \
	FString UserID; \
	FString Message; \
}; \
static inline void FDSignalingP2PNotif_DelegateWrapper(const FScriptDelegate& DSignalingP2PNotif, const FString& UserID, const FString& Message) \
{ \
	_Script_AccelByteUe4Sdk_eventDSignalingP2PNotif_Parms Parms; \
	Parms.UserID=UserID; \
	Parms.Message=Message; \
	DSignalingP2PNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSignalingP2PNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
