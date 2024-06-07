// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGridlyTableRow;
struct FGridlyResult;
#ifdef GRIDLY_DownloadGridlyNativeCultureDelegateDelegate_generated_h
#error "DownloadGridlyNativeCultureDelegateDelegate.generated.h already included, missing '#pragma once' in DownloadGridlyNativeCultureDelegateDelegate.h"
#endif
#define GRIDLY_DownloadGridlyNativeCultureDelegateDelegate_generated_h

#define MoolahProject_Plugins_Gridly_Source_Gridly_Public_DownloadGridlyNativeCultureDelegateDelegate_h_7_DELEGATE \
struct _Script_Gridly_eventDownloadGridlyNativeCultureDelegate_Parms \
{ \
	TArray<FGridlyTableRow> NativeCultureTextData; \
	float Progress; \
	FGridlyResult Error; \
}; \
static inline void FDownloadGridlyNativeCultureDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadGridlyNativeCultureDelegate, TArray<FGridlyTableRow> const& NativeCultureTextData, float Progress, FGridlyResult const& Error) \
{ \
	_Script_Gridly_eventDownloadGridlyNativeCultureDelegate_Parms Parms; \
	Parms.NativeCultureTextData=NativeCultureTextData; \
	Parms.Progress=Progress; \
	Parms.Error=Error; \
	DownloadGridlyNativeCultureDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_Gridly_Source_Gridly_Public_DownloadGridlyNativeCultureDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
