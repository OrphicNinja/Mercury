// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
#ifdef STARBREEZE_MontageMoveTaskCompletedSignatureDelegate_generated_h
#error "MontageMoveTaskCompletedSignatureDelegate.generated.h already included, missing '#pragma once' in MontageMoveTaskCompletedSignatureDelegate.h"
#endif
#define STARBREEZE_MontageMoveTaskCompletedSignatureDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_MontageMoveTaskCompletedSignatureDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventMontageMoveTaskCompletedSignature_Parms \
{ \
	TEnumAsByte<EPathFollowingResult::Type> Result; \
	AAIController* AIController; \
}; \
static inline void FMontageMoveTaskCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& MontageMoveTaskCompletedSignature, EPathFollowingResult::Type Result, AAIController* AIController) \
{ \
	_Script_Starbreeze_eventMontageMoveTaskCompletedSignature_Parms Parms; \
	Parms.Result=Result; \
	Parms.AIController=AIController; \
	MontageMoveTaskCompletedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_MontageMoveTaskCompletedSignatureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
