// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ERepNodeRoutingStrategy_generated_h
#error "ERepNodeRoutingStrategy.generated.h already included, missing '#pragma once' in ERepNodeRoutingStrategy.h"
#endif
#define STARBREEZE_ERepNodeRoutingStrategy_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ERepNodeRoutingStrategy_h


#define FOREACH_ENUM_EREPNODEROUTINGSTRATEGY(op) \
	op(ERepNodeRoutingStrategy::NotRouted) \
	op(ERepNodeRoutingStrategy::DependentActor) \
	op(ERepNodeRoutingStrategy::RelevantAllConnections) \
	op(ERepNodeRoutingStrategy::Spatialize_Static) \
	op(ERepNodeRoutingStrategy::Spatialize_Dynamic) \
	op(ERepNodeRoutingStrategy::Spatialize_Dormancy) \
	op(ERepNodeRoutingStrategy::Spatialize_Dynamic_Frequency) \
	op(ERepNodeRoutingStrategy::PrototypingOnly) 

enum class ERepNodeRoutingStrategy : uint32;
template<> STARBREEZE_API UEnum* StaticEnum<ERepNodeRoutingStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
