// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPersonalMessageNotice;
#ifdef ACCELBYTEUE4SDK_DPersonalChatNotifDelegate_generated_h
#error "DPersonalChatNotifDelegate.generated.h already included, missing '#pragma once' in DPersonalChatNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPersonalChatNotifDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPersonalChatNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPersonalChatNotif_Parms \
{ \
	FAccelByteModelsPersonalMessageNotice Notif; \
}; \
static inline void FDPersonalChatNotif_DelegateWrapper(const FScriptDelegate& DPersonalChatNotif, FAccelByteModelsPersonalMessageNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDPersonalChatNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DPersonalChatNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPersonalChatNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
