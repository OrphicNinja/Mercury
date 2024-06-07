// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsChannelMessageNotice;
#ifdef ACCELBYTEUE4SDK_DChannelChatNotifDelegate_generated_h
#error "DChannelChatNotifDelegate.generated.h already included, missing '#pragma once' in DChannelChatNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DChannelChatNotifDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DChannelChatNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDChannelChatNotif_Parms \
{ \
	FAccelByteModelsChannelMessageNotice Notif; \
}; \
static inline void FDChannelChatNotif_DelegateWrapper(const FScriptDelegate& DChannelChatNotif, FAccelByteModelsChannelMessageNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDChannelChatNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DChannelChatNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DChannelChatNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
