// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZRequestFeedbackType : uint8;
#ifdef STARBREEZE_SBZOnRequestFeedbackDelegateDelegate_generated_h
#error "SBZOnRequestFeedbackDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnRequestFeedbackDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnRequestFeedbackDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnRequestFeedbackDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnRequestFeedbackDelegate_Parms \
{ \
	ESBZRequestFeedbackType RequestFeedBack; \
	bool bResult; \
	FString ErrorCode; \
}; \
static inline void FSBZOnRequestFeedbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnRequestFeedbackDelegate, ESBZRequestFeedbackType RequestFeedBack, bool bResult, const FString& ErrorCode) \
{ \
	_Script_Starbreeze_eventSBZOnRequestFeedbackDelegate_Parms Parms; \
	Parms.RequestFeedBack=RequestFeedBack; \
	Parms.bResult=bResult ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	SBZOnRequestFeedbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnRequestFeedbackDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
