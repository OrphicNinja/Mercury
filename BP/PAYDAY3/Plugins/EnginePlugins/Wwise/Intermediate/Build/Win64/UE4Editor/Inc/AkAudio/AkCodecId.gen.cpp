// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCodecId.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCodecId() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkCodecId();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* AkCodecId_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkCodecId, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCodecId"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkCodecId>()
	{
		return AkCodecId_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkCodecId(AkCodecId_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkCodecId"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_AkCodecId_Hash() { return 1172540462U; }
	UEnum* Z_Construct_UEnum_AkAudio_AkCodecId()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkCodecId"), 0, Get_Z_Construct_UEnum_AkAudio_AkCodecId_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AkCodecId::None", (int64)AkCodecId::None },
				{ "AkCodecId::PCM", (int64)AkCodecId::PCM },
				{ "AkCodecId::ADPCM", (int64)AkCodecId::ADPCM },
				{ "AkCodecId::XMA", (int64)AkCodecId::XMA },
				{ "AkCodecId::Vorbis", (int64)AkCodecId::Vorbis },
				{ "AkCodecId::AAC", (int64)AkCodecId::AAC },
				{ "AkCodecId::ATRAC9", (int64)AkCodecId::ATRAC9 },
				{ "AkCodecId::OpusNX", (int64)AkCodecId::OpusNX },
				{ "AkCodecId::AkOpus", (int64)AkCodecId::AkOpus },
				{ "AkCodecId::AkOpusWEM", (int64)AkCodecId::AkOpusWEM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AAC.Name", "AkCodecId::AAC" },
				{ "ADPCM.Name", "AkCodecId::ADPCM" },
				{ "AkOpus.Name", "AkCodecId::AkOpus" },
				{ "AkOpusWEM.Name", "AkCodecId::AkOpusWEM" },
				{ "ATRAC9.Name", "AkCodecId::ATRAC9" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AkCodecId.h" },
				{ "None.Name", "AkCodecId::None" },
				{ "OpusNX.Name", "AkCodecId::OpusNX" },
				{ "PCM.Name", "AkCodecId::PCM" },
				{ "Vorbis.Name", "AkCodecId::Vorbis" },
				{ "XMA.Name", "AkCodecId::XMA" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"AkCodecId",
				"AkCodecId",
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
