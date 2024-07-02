// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsJoinDefaultChannelResponse;
#ifdef ACCELBYTEUE4SDK_DJoinDefaultChannelChatResponseDelegate_generated_h
#error "DJoinDefaultChannelChatResponseDelegate.generated.h already included, missing '#pragma once' in DJoinDefaultChannelChatResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DJoinDefaultChannelChatResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DJoinDefaultChannelChatResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDJoinDefaultChannelChatResponse_Parms \
{ \
	FAccelByteModelsJoinDefaultChannelResponse Response; \
}; \
static inline void FDJoinDefaultChannelChatResponse_DelegateWrapper(const FScriptDelegate& DJoinDefaultChannelChatResponse, FAccelByteModelsJoinDefaultChannelResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDJoinDefaultChannelChatResponse_Parms Parms; \
	Parms.Response=Response; \
	DJoinDefaultChannelChatResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DJoinDefaultChannelChatResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
