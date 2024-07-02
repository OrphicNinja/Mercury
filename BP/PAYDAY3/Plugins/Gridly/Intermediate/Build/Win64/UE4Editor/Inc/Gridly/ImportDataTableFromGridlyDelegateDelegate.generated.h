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
#ifdef GRIDLY_ImportDataTableFromGridlyDelegateDelegate_generated_h
#error "ImportDataTableFromGridlyDelegateDelegate.generated.h already included, missing '#pragma once' in ImportDataTableFromGridlyDelegateDelegate.h"
#endif
#define GRIDLY_ImportDataTableFromGridlyDelegateDelegate_generated_h

#define PAYDAY3_Plugins_Gridly_Source_Gridly_Public_ImportDataTableFromGridlyDelegateDelegate_h_7_DELEGATE \
struct _Script_Gridly_eventImportDataTableFromGridlyDelegate_Parms \
{ \
	TArray<FGridlyTableRow> GridlyTableRows; \
	float Progress; \
	FGridlyResult Error; \
}; \
static inline void FImportDataTableFromGridlyDelegate_DelegateWrapper(const FMulticastScriptDelegate& ImportDataTableFromGridlyDelegate, TArray<FGridlyTableRow> const& GridlyTableRows, float Progress, FGridlyResult const& Error) \
{ \
	_Script_Gridly_eventImportDataTableFromGridlyDelegate_Parms Parms; \
	Parms.GridlyTableRows=GridlyTableRows; \
	Parms.Progress=Progress; \
	Parms.Error=Error; \
	ImportDataTableFromGridlyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_Gridly_Source_Gridly_Public_ImportDataTableFromGridlyDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
