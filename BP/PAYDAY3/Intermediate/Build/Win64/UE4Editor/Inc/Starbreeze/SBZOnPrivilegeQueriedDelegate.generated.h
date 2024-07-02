// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZUserPrivilegesProxy : uint8;
#ifdef STARBREEZE_SBZOnPrivilegeQueriedDelegate_generated_h
#error "SBZOnPrivilegeQueriedDelegate.generated.h already included, missing '#pragma once' in SBZOnPrivilegeQueriedDelegate.h"
#endif
#define STARBREEZE_SBZOnPrivilegeQueriedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnPrivilegeQueriedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnPrivilegeQueried_Parms \
{ \
	ESBZUserPrivilegesProxy Privilege; \
	bool bPrivilegeAllowed; \
}; \
static inline void FSBZOnPrivilegeQueried_DelegateWrapper(const FMulticastScriptDelegate& SBZOnPrivilegeQueried, ESBZUserPrivilegesProxy Privilege, bool bPrivilegeAllowed) \
{ \
	_Script_Starbreeze_eventSBZOnPrivilegeQueried_Parms Parms; \
	Parms.Privilege=Privilege; \
	Parms.bPrivilegeAllowed=bPrivilegeAllowed ? true : false; \
	SBZOnPrivilegeQueried.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnPrivilegeQueriedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
