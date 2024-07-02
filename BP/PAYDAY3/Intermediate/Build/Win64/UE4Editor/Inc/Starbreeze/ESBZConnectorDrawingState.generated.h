// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZConnectorDrawingState_generated_h
#error "ESBZConnectorDrawingState.generated.h already included, missing '#pragma once' in ESBZConnectorDrawingState.h"
#endif
#define STARBREEZE_ESBZConnectorDrawingState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZConnectorDrawingState_h


#define FOREACH_ENUM_ESBZCONNECTORDRAWINGSTATE(op) \
	op(ESBZConnectorDrawingState::Volumes) \
	op(ESBZConnectorDrawingState::Doors) \
	op(ESBZConnectorDrawingState::Components) \
	op(ESBZConnectorDrawingState::Navlinks) \
	op(ESBZConnectorDrawingState::Other) 

enum class ESBZConnectorDrawingState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZConnectorDrawingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
