// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAppearanceType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAppearanceType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAppearanceType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAppearanceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAppearanceType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAppearanceType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAppearanceType>()
	{
		return ESBZAppearanceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAppearanceType(ESBZAppearanceType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAppearanceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAppearanceType_Hash() { return 1166807315U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAppearanceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAppearanceType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAppearanceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAppearanceType::NoType", (int64)ESBZAppearanceType::NoType },
				{ "ESBZAppearanceType::Character", (int64)ESBZAppearanceType::Character },
				{ "ESBZAppearanceType::Mask", (int64)ESBZAppearanceType::Mask },
				{ "ESBZAppearanceType::Suit", (int64)ESBZAppearanceType::Suit },
				{ "ESBZAppearanceType::Gloves", (int64)ESBZAppearanceType::Gloves },
				{ "ESBZAppearanceType::Watches", (int64)ESBZAppearanceType::Watches },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Character.Name", "ESBZAppearanceType::Character" },
				{ "Gloves.Name", "ESBZAppearanceType::Gloves" },
				{ "Mask.Name", "ESBZAppearanceType::Mask" },
				{ "ModuleRelativePath", "Public/ESBZAppearanceType.h" },
				{ "NoType.Name", "ESBZAppearanceType::NoType" },
				{ "Suit.Name", "ESBZAppearanceType::Suit" },
				{ "Watches.Name", "ESBZAppearanceType::Watches" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAppearanceType",
				"ESBZAppearanceType",
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
