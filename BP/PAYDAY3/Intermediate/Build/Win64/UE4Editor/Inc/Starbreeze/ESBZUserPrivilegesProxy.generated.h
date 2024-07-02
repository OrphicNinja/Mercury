// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZUserPrivilegesProxy_generated_h
#error "ESBZUserPrivilegesProxy.generated.h already included, missing '#pragma once' in ESBZUserPrivilegesProxy.h"
#endif
#define STARBREEZE_ESBZUserPrivilegesProxy_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZUserPrivilegesProxy_h


#define FOREACH_ENUM_ESBZUSERPRIVILEGESPROXY(op) \
	op(ESBZUserPrivilegesProxy::CanPlay) \
	op(ESBZUserPrivilegesProxy::CanPlayOnline) \
	op(ESBZUserPrivilegesProxy::CanCommunicateOnline) \
	op(ESBZUserPrivilegesProxy::CanUseUserGeneratedContent) \
	op(ESBZUserPrivilegesProxy::CanUserCrossPlay) 

enum class ESBZUserPrivilegesProxy : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZUserPrivilegesProxy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
