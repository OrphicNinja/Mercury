// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsChannelMessageResponse;
#ifdef ACCELBYTEUE4SDK_DChannelChatResponseDelegate_generated_h
#error "DChannelChatResponseDelegate.generated.h already included, missing '#pragma once' in DChannelChatResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DChannelChatResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DChannelChatResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDChannelChatResponse_Parms \
{ \
	FAccelByteModelsChannelMessageResponse Response; \
}; \
static inline void FDChannelChatResponse_DelegateWrapper(const FScriptDelegate& DChannelChatResponse, FAccelByteModelsChannelMessageResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDChannelChatResponse_Parms Parms; \
	Parms.Response=Response; \
	DChannelChatResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DChannelChatResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
