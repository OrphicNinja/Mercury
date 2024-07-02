// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshComponent;
class USBZOutlineComponent;
#ifdef STARBREEZE_SBZEquippableOnMeshPropetiesUpdatedDelegate_generated_h
#error "SBZEquippableOnMeshPropetiesUpdatedDelegate.generated.h already included, missing '#pragma once' in SBZEquippableOnMeshPropetiesUpdatedDelegate.h"
#endif
#define STARBREEZE_SBZEquippableOnMeshPropetiesUpdatedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnMeshPropetiesUpdatedDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZEquippableOnMeshPropetiesUpdated_Parms \
{ \
	const UMeshComponent* Reference; \
	USBZOutlineComponent* OutlineComponent; \
	bool bIsReset; \
}; \
static inline void FSBZEquippableOnMeshPropetiesUpdated_DelegateWrapper(const FMulticastScriptDelegate& SBZEquippableOnMeshPropetiesUpdated, const UMeshComponent* Reference, USBZOutlineComponent* OutlineComponent, bool bIsReset) \
{ \
	_Script_Starbreeze_eventSBZEquippableOnMeshPropetiesUpdated_Parms Parms; \
	Parms.Reference=Reference; \
	Parms.OutlineComponent=OutlineComponent; \
	Parms.bIsReset=bIsReset ? true : false; \
	SBZEquippableOnMeshPropetiesUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnMeshPropetiesUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
