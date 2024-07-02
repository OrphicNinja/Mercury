// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZPhonemeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZPhonemeType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPhonemeType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZPhonemeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZPhonemeType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZPhonemeType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZPhonemeType>()
	{
		return ESBZPhonemeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZPhonemeType(ESBZPhonemeType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZPhonemeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZPhonemeType_Hash() { return 560371165U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZPhonemeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZPhonemeType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZPhonemeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZPhonemeType::AAA", (int64)ESBZPhonemeType::AAA },
				{ "ESBZPhonemeType::SSS", (int64)ESBZPhonemeType::SSS },
				{ "ESBZPhonemeType::MBP", (int64)ESBZPhonemeType::MBP },
				{ "ESBZPhonemeType::NTD", (int64)ESBZPhonemeType::NTD },
				{ "ESBZPhonemeType::TTH", (int64)ESBZPhonemeType::TTH },
				{ "ESBZPhonemeType::GK", (int64)ESBZPhonemeType::GK },
				{ "ESBZPhonemeType::OHH", (int64)ESBZPhonemeType::OHH },
				{ "ESBZPhonemeType::RRR", (int64)ESBZPhonemeType::RRR },
				{ "ESBZPhonemeType::AHH", (int64)ESBZPhonemeType::AHH },
				{ "ESBZPhonemeType::EH", (int64)ESBZPhonemeType::EH },
				{ "ESBZPhonemeType::IEE", (int64)ESBZPhonemeType::IEE },
				{ "ESBZPhonemeType::H", (int64)ESBZPhonemeType::H },
				{ "ESBZPhonemeType::UUU", (int64)ESBZPhonemeType::UUU },
				{ "ESBZPhonemeType::WWW", (int64)ESBZPhonemeType::WWW },
				{ "ESBZPhonemeType::SSH", (int64)ESBZPhonemeType::SSH },
				{ "ESBZPhonemeType::FFF", (int64)ESBZPhonemeType::FFF },
				{ "ESBZPhonemeType::L", (int64)ESBZPhonemeType::L },
				{ "ESBZPhonemeType::SP", (int64)ESBZPhonemeType::SP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AAA.Name", "ESBZPhonemeType::AAA" },
				{ "AHH.Name", "ESBZPhonemeType::AHH" },
				{ "BlueprintType", "true" },
				{ "EH.Name", "ESBZPhonemeType::EH" },
				{ "FFF.Name", "ESBZPhonemeType::FFF" },
				{ "GK.Name", "ESBZPhonemeType::GK" },
				{ "H.Name", "ESBZPhonemeType::H" },
				{ "IEE.Name", "ESBZPhonemeType::IEE" },
				{ "L.Name", "ESBZPhonemeType::L" },
				{ "MBP.Name", "ESBZPhonemeType::MBP" },
				{ "ModuleRelativePath", "Public/ESBZPhonemeType.h" },
				{ "NTD.Name", "ESBZPhonemeType::NTD" },
				{ "OHH.Name", "ESBZPhonemeType::OHH" },
				{ "RRR.Name", "ESBZPhonemeType::RRR" },
				{ "SP.Name", "ESBZPhonemeType::SP" },
				{ "SSH.Name", "ESBZPhonemeType::SSH" },
				{ "SSS.Name", "ESBZPhonemeType::SSS" },
				{ "TTH.Name", "ESBZPhonemeType::TTH" },
				{ "UUU.Name", "ESBZPhonemeType::UUU" },
				{ "WWW.Name", "ESBZPhonemeType::WWW" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZPhonemeType",
				"ESBZPhonemeType",
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
