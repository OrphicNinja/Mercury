// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_OnTextButtonSubmittedTextDelegate_generated_h
#error "OnTextButtonSubmittedTextDelegate.generated.h already included, missing '#pragma once' in OnTextButtonSubmittedTextDelegate.h"
#endif
#define STARBREEZE_OnTextButtonSubmittedTextDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnTextButtonSubmittedTextDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventOnTextButtonSubmittedText_Parms \
{ \
	FText Text; \
}; \
static inline void FOnTextButtonSubmittedText_DelegateWrapper(const FMulticastScriptDelegate& OnTextButtonSubmittedText, const FText& Text) \
{ \
	_Script_Starbreeze_eventOnTextButtonSubmittedText_Parms Parms; \
	Parms.Text=Text; \
	OnTextButtonSubmittedText.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnTextButtonSubmittedTextDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
