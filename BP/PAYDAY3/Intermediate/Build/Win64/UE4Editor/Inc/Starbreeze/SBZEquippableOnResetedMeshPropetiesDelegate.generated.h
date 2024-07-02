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
#ifdef STARBREEZE_SBZEquippableOnResetedMeshPropetiesDelegate_generated_h
#error "SBZEquippableOnResetedMeshPropetiesDelegate.generated.h already included, missing '#pragma once' in SBZEquippableOnResetedMeshPropetiesDelegate.h"
#endif
#define STARBREEZE_SBZEquippableOnResetedMeshPropetiesDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnResetedMeshPropetiesDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZEquippableOnResetedMeshPropeties_Parms \
{ \
	const UMeshComponent* Reference; \
	USBZOutlineComponent* OutlineComponent; \
}; \
static inline void FSBZEquippableOnResetedMeshPropeties_DelegateWrapper(const FMulticastScriptDelegate& SBZEquippableOnResetedMeshPropeties, const UMeshComponent* Reference, USBZOutlineComponent* OutlineComponent) \
{ \
	_Script_Starbreeze_eventSBZEquippableOnResetedMeshPropeties_Parms Parms; \
	Parms.Reference=Reference; \
	Parms.OutlineComponent=OutlineComponent; \
	SBZEquippableOnResetedMeshPropeties.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnResetedMeshPropetiesDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
