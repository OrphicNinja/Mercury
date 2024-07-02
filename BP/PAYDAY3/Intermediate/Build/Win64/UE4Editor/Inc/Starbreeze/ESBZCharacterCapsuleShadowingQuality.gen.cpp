// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZCharacterCapsuleShadowingQuality.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZCharacterCapsuleShadowingQuality() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterCapsuleShadowingQuality();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZCharacterCapsuleShadowingQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZCharacterCapsuleShadowingQuality, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZCharacterCapsuleShadowingQuality"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZCharacterCapsuleShadowingQuality>()
	{
		return ESBZCharacterCapsuleShadowingQuality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZCharacterCapsuleShadowingQuality(ESBZCharacterCapsuleShadowingQuality_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZCharacterCapsuleShadowingQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZCharacterCapsuleShadowingQuality_Hash() { return 1776066654U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterCapsuleShadowingQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZCharacterCapsuleShadowingQuality"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZCharacterCapsuleShadowingQuality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZCharacterCapsuleShadowingQuality::Disabled", (int64)ESBZCharacterCapsuleShadowingQuality::Disabled },
				{ "ESBZCharacterCapsuleShadowingQuality::Low", (int64)ESBZCharacterCapsuleShadowingQuality::Low },
				{ "ESBZCharacterCapsuleShadowingQuality::Medium", (int64)ESBZCharacterCapsuleShadowingQuality::Medium },
				{ "ESBZCharacterCapsuleShadowingQuality::High", (int64)ESBZCharacterCapsuleShadowingQuality::High },
				{ "ESBZCharacterCapsuleShadowingQuality::Epic", (int64)ESBZCharacterCapsuleShadowingQuality::Epic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disabled.Name", "ESBZCharacterCapsuleShadowingQuality::Disabled" },
				{ "Epic.Name", "ESBZCharacterCapsuleShadowingQuality::Epic" },
				{ "High.Name", "ESBZCharacterCapsuleShadowingQuality::High" },
				{ "Low.Name", "ESBZCharacterCapsuleShadowingQuality::Low" },
				{ "Medium.Name", "ESBZCharacterCapsuleShadowingQuality::Medium" },
				{ "ModuleRelativePath", "Public/ESBZCharacterCapsuleShadowingQuality.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZCharacterCapsuleShadowingQuality",
				"ESBZCharacterCapsuleShadowingQuality",
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
