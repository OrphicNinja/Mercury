// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZBinaryStateNode;
#ifdef STARBREEZE_SBZOnBinaryStateChangedDelegate_generated_h
#error "SBZOnBinaryStateChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnBinaryStateChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnBinaryStateChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnBinaryStateChangedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnBinaryStateChanged_Parms \
{ \
	ASBZBinaryStateNode* BinaryStateNode; \
	bool bState; \
}; \
static inline void FSBZOnBinaryStateChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnBinaryStateChanged, ASBZBinaryStateNode* BinaryStateNode, bool bState) \
{ \
	_Script_Starbreeze_eventSBZOnBinaryStateChanged_Parms Parms; \
	Parms.BinaryStateNode=BinaryStateNode; \
	Parms.bState=bState ? true : false; \
	SBZOnBinaryStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnBinaryStateChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
