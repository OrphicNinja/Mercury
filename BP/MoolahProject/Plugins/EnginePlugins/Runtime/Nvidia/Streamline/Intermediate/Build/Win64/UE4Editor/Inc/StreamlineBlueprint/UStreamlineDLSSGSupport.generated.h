// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STREAMLINEBLUEPRINT_UStreamlineDLSSGSupport_generated_h
#error "UStreamlineDLSSGSupport.generated.h already included, missing '#pragma once' in UStreamlineDLSSGSupport.h"
#endif
#define STREAMLINEBLUEPRINT_UStreamlineDLSSGSupport_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_UStreamlineDLSSGSupport_h


#define FOREACH_ENUM_USTREAMLINEDLSSGSUPPORT(op) \
	op(UStreamlineDLSSGSupport::Supported) \
	op(UStreamlineDLSSGSupport::NotSupported) \
	op(UStreamlineDLSSGSupport::NotSupportedIncompatibleHardware) \
	op(UStreamlineDLSSGSupport::NotSupportedDriverOutOfDate) \
	op(UStreamlineDLSSGSupport::NotSupportedOperatingSystemOutOfDate) \
	op(UStreamlineDLSSGSupport::NotSupportedByPlatformAtBuildTime) \
	op(UStreamlineDLSSGSupport::NotSupportedIncompatibleAPICaptureToolActive) 

enum class UStreamlineDLSSGSupport : uint8;
template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineDLSSGSupport>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
