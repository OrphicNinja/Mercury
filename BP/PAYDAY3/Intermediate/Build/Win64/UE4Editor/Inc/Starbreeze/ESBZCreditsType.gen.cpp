// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZCreditsType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZCreditsType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCreditsType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZCreditsType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZCreditsType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZCreditsType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZCreditsType>()
	{
		return ESBZCreditsType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZCreditsType(ESBZCreditsType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZCreditsType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZCreditsType_Hash() { return 3824139722U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZCreditsType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZCreditsType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZCreditsType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZCreditsType::Title", (int64)ESBZCreditsType::Title },
				{ "ESBZCreditsType::SubTitle", (int64)ESBZCreditsType::SubTitle },
				{ "ESBZCreditsType::Heading", (int64)ESBZCreditsType::Heading },
				{ "ESBZCreditsType::Text", (int64)ESBZCreditsType::Text },
				{ "ESBZCreditsType::TextPair", (int64)ESBZCreditsType::TextPair },
				{ "ESBZCreditsType::Image", (int64)ESBZCreditsType::Image },
				{ "ESBZCreditsType::Linebreak", (int64)ESBZCreditsType::Linebreak },
				{ "ESBZCreditsType::MAX", (int64)ESBZCreditsType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Heading.Name", "ESBZCreditsType::Heading" },
				{ "Image.Name", "ESBZCreditsType::Image" },
				{ "Linebreak.Name", "ESBZCreditsType::Linebreak" },
				{ "MAX.Name", "ESBZCreditsType::MAX" },
				{ "ModuleRelativePath", "Public/ESBZCreditsType.h" },
				{ "SubTitle.Name", "ESBZCreditsType::SubTitle" },
				{ "Text.Name", "ESBZCreditsType::Text" },
				{ "TextPair.Name", "ESBZCreditsType::TextPair" },
				{ "Title.Name", "ESBZCreditsType::Title" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZCreditsType",
				"ESBZCreditsType",
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
