// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZDialogEndedReason : uint8;
#ifdef STARBREEZE_BPOnDialogEnded_DelegateDelegate_generated_h
#error "BPOnDialogEnded_DelegateDelegate.generated.h already included, missing '#pragma once' in BPOnDialogEnded_DelegateDelegate.h"
#endif
#define STARBREEZE_BPOnDialogEnded_DelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_BPOnDialogEnded_DelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventBPOnDialogEnded_Delegate_Parms \
{ \
	ESBZDialogEndedReason Reason; \
}; \
static inline void FBPOnDialogEnded_Delegate_DelegateWrapper(const FScriptDelegate& BPOnDialogEnded_Delegate, ESBZDialogEndedReason Reason) \
{ \
	_Script_Starbreeze_eventBPOnDialogEnded_Delegate_Parms Parms; \
	Parms.Reason=Reason; \
	BPOnDialogEnded_Delegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_BPOnDialogEnded_DelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
