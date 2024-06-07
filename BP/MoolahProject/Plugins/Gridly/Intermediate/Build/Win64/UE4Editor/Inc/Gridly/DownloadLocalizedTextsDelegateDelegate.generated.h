// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPolyglotTextData;
struct FGridlyResult;
#ifdef GRIDLY_DownloadLocalizedTextsDelegateDelegate_generated_h
#error "DownloadLocalizedTextsDelegateDelegate.generated.h already included, missing '#pragma once' in DownloadLocalizedTextsDelegateDelegate.h"
#endif
#define GRIDLY_DownloadLocalizedTextsDelegateDelegate_generated_h

#define MoolahProject_Plugins_Gridly_Source_Gridly_Public_DownloadLocalizedTextsDelegateDelegate_h_7_DELEGATE \
struct _Script_Gridly_eventDownloadLocalizedTextsDelegate_Parms \
{ \
	TArray<FPolyglotTextData> PolyglotTextDatas; \
	float Progress; \
	FGridlyResult Error; \
}; \
static inline void FDownloadLocalizedTextsDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadLocalizedTextsDelegate, TArray<FPolyglotTextData> const& PolyglotTextDatas, float Progress, FGridlyResult const& Error) \
{ \
	_Script_Gridly_eventDownloadLocalizedTextsDelegate_Parms Parms; \
	Parms.PolyglotTextDatas=PolyglotTextDatas; \
	Parms.Progress=Progress; \
	Parms.Error=Error; \
	DownloadLocalizedTextsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_Gridly_Source_Gridly_Public_DownloadLocalizedTextsDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
