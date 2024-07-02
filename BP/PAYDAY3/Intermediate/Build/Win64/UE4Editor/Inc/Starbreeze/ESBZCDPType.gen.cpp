// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZCDPType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZCDPType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCDPType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZCDPType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZCDPType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZCDPType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZCDPType>()
	{
		return ESBZCDPType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZCDPType(ESBZCDPType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZCDPType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZCDPType_Hash() { return 2753702548U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZCDPType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZCDPType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZCDPType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZCDPType::Float", (int64)ESBZCDPType::Float },
				{ "ESBZCDPType::Boolean", (int64)ESBZCDPType::Boolean },
				{ "ESBZCDPType::Integer", (int64)ESBZCDPType::Integer },
				{ "ESBZCDPType::ColorRGB", (int64)ESBZCDPType::ColorRGB },
				{ "ESBZCDPType::ColorRGBA", (int64)ESBZCDPType::ColorRGBA },
				{ "ESBZCDPType::SelectRBG", (int64)ESBZCDPType::SelectRBG },
				{ "ESBZCDPType::Pattern", (int64)ESBZCDPType::Pattern },
				{ "ESBZCDPType::Digits", (int64)ESBZCDPType::Digits },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boolean.Name", "ESBZCDPType::Boolean" },
				{ "ColorRGB.Name", "ESBZCDPType::ColorRGB" },
				{ "ColorRGBA.Name", "ESBZCDPType::ColorRGBA" },
				{ "Digits.Name", "ESBZCDPType::Digits" },
				{ "Float.Name", "ESBZCDPType::Float" },
				{ "Integer.Name", "ESBZCDPType::Integer" },
				{ "ModuleRelativePath", "Public/ESBZCDPType.h" },
				{ "Pattern.Name", "ESBZCDPType::Pattern" },
				{ "SelectRBG.Name", "ESBZCDPType::SelectRBG" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZCDPType",
				"ESBZCDPType",
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
