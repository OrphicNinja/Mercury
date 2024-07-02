// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBagType;
#ifdef STARBREEZE_SBZSecuredBagVisualizeBagAddedSignatureDelegate_generated_h
#error "SBZSecuredBagVisualizeBagAddedSignatureDelegate.generated.h already included, missing '#pragma once' in SBZSecuredBagVisualizeBagAddedSignatureDelegate.h"
#endif
#define STARBREEZE_SBZSecuredBagVisualizeBagAddedSignatureDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeBagAddedSignatureDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZSecuredBagVisualizeBagAddedSignature_Parms \
{ \
	const USBZBagType* BagType; \
}; \
static inline void FSBZSecuredBagVisualizeBagAddedSignature_DelegateWrapper(const FMulticastScriptDelegate& SBZSecuredBagVisualizeBagAddedSignature, const USBZBagType* BagType) \
{ \
	_Script_Starbreeze_eventSBZSecuredBagVisualizeBagAddedSignature_Parms Parms; \
	Parms.BagType=BagType; \
	SBZSecuredBagVisualizeBagAddedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeBagAddedSignatureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
