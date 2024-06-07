// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkCurveInterpolation_generated_h
#error "EAkCurveInterpolation.generated.h already included, missing '#pragma once' in EAkCurveInterpolation.h"
#endif
#define AKAUDIO_EAkCurveInterpolation_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCurveInterpolation_h


#define FOREACH_ENUM_EAKCURVEINTERPOLATION(op) \
	op(EAkCurveInterpolation::Log3) \
	op(EAkCurveInterpolation::Sine) \
	op(EAkCurveInterpolation::Log1) \
	op(EAkCurveInterpolation::InvSCurve) \
	op(EAkCurveInterpolation::Linear) \
	op(EAkCurveInterpolation::SCurve) \
	op(EAkCurveInterpolation::Exp1) \
	op(EAkCurveInterpolation::SineRecip) \
	op(EAkCurveInterpolation::Exp3) \
	op(EAkCurveInterpolation::LastFadeCurve) \
	op(EAkCurveInterpolation::Constant) 

enum class EAkCurveInterpolation : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<EAkCurveInterpolation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
