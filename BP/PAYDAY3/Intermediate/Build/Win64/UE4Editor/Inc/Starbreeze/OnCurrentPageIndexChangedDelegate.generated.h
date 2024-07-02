// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZCarouselWidget;
#ifdef STARBREEZE_OnCurrentPageIndexChangedDelegate_generated_h
#error "OnCurrentPageIndexChangedDelegate.generated.h already included, missing '#pragma once' in OnCurrentPageIndexChangedDelegate.h"
#endif
#define STARBREEZE_OnCurrentPageIndexChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnCurrentPageIndexChangedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnCurrentPageIndexChanged_Parms \
{ \
	USBZCarouselWidget* CarouselWidget; \
	int32 CurrentPageIndex; \
}; \
static inline void FOnCurrentPageIndexChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentPageIndexChanged, USBZCarouselWidget* CarouselWidget, int32 CurrentPageIndex) \
{ \
	_Script_Starbreeze_eventOnCurrentPageIndexChanged_Parms Parms; \
	Parms.CarouselWidget=CarouselWidget; \
	Parms.CurrentPageIndex=CurrentPageIndex; \
	OnCurrentPageIndexChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnCurrentPageIndexChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
