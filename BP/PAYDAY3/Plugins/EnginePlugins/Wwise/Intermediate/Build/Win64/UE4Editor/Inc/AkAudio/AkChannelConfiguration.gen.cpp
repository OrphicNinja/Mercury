// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkChannelConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkChannelConfiguration() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* AkChannelConfiguration_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkChannelConfiguration, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkChannelConfiguration"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkChannelConfiguration>()
	{
		return AkChannelConfiguration_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkChannelConfiguration(AkChannelConfiguration_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkChannelConfiguration"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Hash() { return 3095476647U; }
	UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkChannelConfiguration"), 0, Get_Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AkChannelConfiguration::Ak_Parent", (int64)AkChannelConfiguration::Ak_Parent },
				{ "AkChannelConfiguration::Ak_MainMix", (int64)AkChannelConfiguration::Ak_MainMix },
				{ "AkChannelConfiguration::Ak_Passthrough", (int64)AkChannelConfiguration::Ak_Passthrough },
				{ "AkChannelConfiguration::Ak_LFE", (int64)AkChannelConfiguration::Ak_LFE },
				{ "AkChannelConfiguration::AK_Audio_Objects", (int64)AkChannelConfiguration::AK_Audio_Objects },
				{ "AkChannelConfiguration::Ak_1_0", (int64)AkChannelConfiguration::Ak_1_0 },
				{ "AkChannelConfiguration::Ak_2_0", (int64)AkChannelConfiguration::Ak_2_0 },
				{ "AkChannelConfiguration::Ak_2_1", (int64)AkChannelConfiguration::Ak_2_1 },
				{ "AkChannelConfiguration::Ak_3_0", (int64)AkChannelConfiguration::Ak_3_0 },
				{ "AkChannelConfiguration::Ak_3_1", (int64)AkChannelConfiguration::Ak_3_1 },
				{ "AkChannelConfiguration::Ak_4_0", (int64)AkChannelConfiguration::Ak_4_0 },
				{ "AkChannelConfiguration::Ak_4_1", (int64)AkChannelConfiguration::Ak_4_1 },
				{ "AkChannelConfiguration::Ak_5_0", (int64)AkChannelConfiguration::Ak_5_0 },
				{ "AkChannelConfiguration::Ak_5_1", (int64)AkChannelConfiguration::Ak_5_1 },
				{ "AkChannelConfiguration::Ak_7_1", (int64)AkChannelConfiguration::Ak_7_1 },
				{ "AkChannelConfiguration::Ak_5_1_2", (int64)AkChannelConfiguration::Ak_5_1_2 },
				{ "AkChannelConfiguration::Ak_7_1_2", (int64)AkChannelConfiguration::Ak_7_1_2 },
				{ "AkChannelConfiguration::Ak_7_1_4", (int64)AkChannelConfiguration::Ak_7_1_4 },
				{ "AkChannelConfiguration::Ak_Auro_9_1", (int64)AkChannelConfiguration::Ak_Auro_9_1 },
				{ "AkChannelConfiguration::Ak_Auro_10_1", (int64)AkChannelConfiguration::Ak_Auro_10_1 },
				{ "AkChannelConfiguration::Ak_Auro_11_1", (int64)AkChannelConfiguration::Ak_Auro_11_1 },
				{ "AkChannelConfiguration::Ak_Auro_13_1", (int64)AkChannelConfiguration::Ak_Auro_13_1 },
				{ "AkChannelConfiguration::Ak_Ambisonics_1st_order", (int64)AkChannelConfiguration::Ak_Ambisonics_1st_order },
				{ "AkChannelConfiguration::Ak_Ambisonics_2nd_order", (int64)AkChannelConfiguration::Ak_Ambisonics_2nd_order },
				{ "AkChannelConfiguration::Ak_Ambisonics_3rd_order", (int64)AkChannelConfiguration::Ak_Ambisonics_3rd_order },
				{ "AkChannelConfiguration::Ak_Ambisonics_4th_order", (int64)AkChannelConfiguration::Ak_Ambisonics_4th_order },
				{ "AkChannelConfiguration::Ak_Ambisonics_5th_order", (int64)AkChannelConfiguration::Ak_Ambisonics_5th_order },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ak_1_0.Name", "AkChannelConfiguration::Ak_1_0" },
				{ "Ak_2_0.Name", "AkChannelConfiguration::Ak_2_0" },
				{ "Ak_2_1.Name", "AkChannelConfiguration::Ak_2_1" },
				{ "Ak_3_0.Name", "AkChannelConfiguration::Ak_3_0" },
				{ "Ak_3_1.Name", "AkChannelConfiguration::Ak_3_1" },
				{ "Ak_4_0.Name", "AkChannelConfiguration::Ak_4_0" },
				{ "Ak_4_1.Name", "AkChannelConfiguration::Ak_4_1" },
				{ "Ak_5_0.Name", "AkChannelConfiguration::Ak_5_0" },
				{ "Ak_5_1.Name", "AkChannelConfiguration::Ak_5_1" },
				{ "Ak_5_1_2.Name", "AkChannelConfiguration::Ak_5_1_2" },
				{ "Ak_7_1.Name", "AkChannelConfiguration::Ak_7_1" },
				{ "Ak_7_1_2.Name", "AkChannelConfiguration::Ak_7_1_2" },
				{ "Ak_7_1_4.Name", "AkChannelConfiguration::Ak_7_1_4" },
				{ "Ak_Ambisonics_1st_order.Name", "AkChannelConfiguration::Ak_Ambisonics_1st_order" },
				{ "Ak_Ambisonics_2nd_order.Name", "AkChannelConfiguration::Ak_Ambisonics_2nd_order" },
				{ "Ak_Ambisonics_3rd_order.Name", "AkChannelConfiguration::Ak_Ambisonics_3rd_order" },
				{ "Ak_Ambisonics_4th_order.Name", "AkChannelConfiguration::Ak_Ambisonics_4th_order" },
				{ "Ak_Ambisonics_5th_order.Name", "AkChannelConfiguration::Ak_Ambisonics_5th_order" },
				{ "AK_Audio_Objects.Name", "AkChannelConfiguration::AK_Audio_Objects" },
				{ "Ak_Auro_10_1.Name", "AkChannelConfiguration::Ak_Auro_10_1" },
				{ "Ak_Auro_11_1.Name", "AkChannelConfiguration::Ak_Auro_11_1" },
				{ "Ak_Auro_13_1.Name", "AkChannelConfiguration::Ak_Auro_13_1" },
				{ "Ak_Auro_9_1.Name", "AkChannelConfiguration::Ak_Auro_9_1" },
				{ "Ak_LFE.Name", "AkChannelConfiguration::Ak_LFE" },
				{ "Ak_MainMix.Name", "AkChannelConfiguration::Ak_MainMix" },
				{ "Ak_Parent.Name", "AkChannelConfiguration::Ak_Parent" },
				{ "Ak_Passthrough.Name", "AkChannelConfiguration::Ak_Passthrough" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AkChannelConfiguration.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"AkChannelConfiguration",
				"AkChannelConfiguration",
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
