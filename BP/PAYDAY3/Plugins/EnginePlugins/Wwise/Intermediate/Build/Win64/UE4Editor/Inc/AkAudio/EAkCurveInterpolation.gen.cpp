// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkCurveInterpolation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkCurveInterpolation() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCurveInterpolation();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkCurveInterpolation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCurveInterpolation, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkCurveInterpolation"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkCurveInterpolation>()
	{
		return EAkCurveInterpolation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkCurveInterpolation(EAkCurveInterpolation_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkCurveInterpolation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Hash() { return 2384399407U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkCurveInterpolation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkCurveInterpolation"), 0, Get_Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkCurveInterpolation::Log3", (int64)EAkCurveInterpolation::Log3 },
				{ "EAkCurveInterpolation::Sine", (int64)EAkCurveInterpolation::Sine },
				{ "EAkCurveInterpolation::Log1", (int64)EAkCurveInterpolation::Log1 },
				{ "EAkCurveInterpolation::InvSCurve", (int64)EAkCurveInterpolation::InvSCurve },
				{ "EAkCurveInterpolation::Linear", (int64)EAkCurveInterpolation::Linear },
				{ "EAkCurveInterpolation::SCurve", (int64)EAkCurveInterpolation::SCurve },
				{ "EAkCurveInterpolation::Exp1", (int64)EAkCurveInterpolation::Exp1 },
				{ "EAkCurveInterpolation::SineRecip", (int64)EAkCurveInterpolation::SineRecip },
				{ "EAkCurveInterpolation::Exp3", (int64)EAkCurveInterpolation::Exp3 },
				{ "EAkCurveInterpolation::LastFadeCurve", (int64)EAkCurveInterpolation::LastFadeCurve },
				{ "EAkCurveInterpolation::Constant", (int64)EAkCurveInterpolation::Constant },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Constant.Name", "EAkCurveInterpolation::Constant" },
				{ "Exp1.Name", "EAkCurveInterpolation::Exp1" },
				{ "Exp3.Name", "EAkCurveInterpolation::Exp3" },
				{ "InvSCurve.Name", "EAkCurveInterpolation::InvSCurve" },
				{ "LastFadeCurve.Name", "EAkCurveInterpolation::LastFadeCurve" },
				{ "Linear.Name", "EAkCurveInterpolation::Linear" },
				{ "Log1.Name", "EAkCurveInterpolation::Log1" },
				{ "Log3.Name", "EAkCurveInterpolation::Log3" },
				{ "ModuleRelativePath", "Public/EAkCurveInterpolation.h" },
				{ "SCurve.Name", "EAkCurveInterpolation::SCurve" },
				{ "Sine.Name", "EAkCurveInterpolation::Sine" },
				{ "SineRecip.Name", "EAkCurveInterpolation::SineRecip" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkCurveInterpolation",
				"EAkCurveInterpolation",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
