// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMetaRequestResult : uint8;
class USBZSkillLine;
#ifdef STARBREEZE_OnSkillLineRequestResultDelegateDelegate_generated_h
#error "OnSkillLineRequestResultDelegateDelegate.generated.h already included, missing '#pragma once' in OnSkillLineRequestResultDelegateDelegate.h"
#endif
#define STARBREEZE_OnSkillLineRequestResultDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnSkillLineRequestResultDelegateDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventOnSkillLineRequestResultDelegate_Parms \
{ \
	ESBZMetaRequestResult Result; \
	const USBZSkillLine* SkillLine; \
}; \
static inline void FOnSkillLineRequestResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSkillLineRequestResultDelegate, ESBZMetaRequestResult Result, const USBZSkillLine* SkillLine) \
{ \
	_Script_Starbreeze_eventOnSkillLineRequestResultDelegate_Parms Parms; \
	Parms.Result=Result; \
	Parms.SkillLine=SkillLine; \
	OnSkillLineRequestResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnSkillLineRequestResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
