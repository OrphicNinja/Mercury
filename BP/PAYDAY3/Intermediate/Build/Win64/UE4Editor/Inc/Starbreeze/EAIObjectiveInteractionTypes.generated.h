// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EAIObjectiveInteractionTypes_generated_h
#error "EAIObjectiveInteractionTypes.generated.h already included, missing '#pragma once' in EAIObjectiveInteractionTypes.h"
#endif
#define STARBREEZE_EAIObjectiveInteractionTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EAIObjectiveInteractionTypes_h


#define FOREACH_ENUM_EAIOBJECTIVEINTERACTIONTYPES(op) \
	op(EAIObjectiveInteractionTypes::DirectInteraction) \
	op(EAIObjectiveInteractionTypes::CutGlassInteraction) \
	op(EAIObjectiveInteractionTypes::ThrowInteraction) \
	op(EAIObjectiveInteractionTypes::MoveToAndWait) 

enum class EAIObjectiveInteractionTypes : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EAIObjectiveInteractionTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
