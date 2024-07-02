// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteItemType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteItemType() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemType();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemType, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteItemType"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteItemType>()
	{
		return EAccelByteItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteItemType(EAccelByteItemType_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemType_Hash() { return 1090006275U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteItemType"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteItemType::NONE", (int64)EAccelByteItemType::NONE },
				{ "EAccelByteItemType::APP", (int64)EAccelByteItemType::APP },
				{ "EAccelByteItemType::COINS", (int64)EAccelByteItemType::COINS },
				{ "EAccelByteItemType::INGAMEITEM", (int64)EAccelByteItemType::INGAMEITEM },
				{ "EAccelByteItemType::BUNDLE", (int64)EAccelByteItemType::BUNDLE },
				{ "EAccelByteItemType::CODE", (int64)EAccelByteItemType::CODE },
				{ "EAccelByteItemType::SUBSCRIPTION", (int64)EAccelByteItemType::SUBSCRIPTION },
				{ "EAccelByteItemType::SEASON", (int64)EAccelByteItemType::SEASON },
				{ "EAccelByteItemType::MEDIA", (int64)EAccelByteItemType::MEDIA },
				{ "EAccelByteItemType::OPTIONBOX", (int64)EAccelByteItemType::OPTIONBOX },
				{ "EAccelByteItemType::EXTENSION", (int64)EAccelByteItemType::EXTENSION },
				{ "EAccelByteItemType::LOOTBOX", (int64)EAccelByteItemType::LOOTBOX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "APP.Name", "EAccelByteItemType::APP" },
				{ "BlueprintType", "true" },
				{ "BUNDLE.Name", "EAccelByteItemType::BUNDLE" },
				{ "CODE.Name", "EAccelByteItemType::CODE" },
				{ "COINS.Name", "EAccelByteItemType::COINS" },
				{ "EXTENSION.Name", "EAccelByteItemType::EXTENSION" },
				{ "INGAMEITEM.Name", "EAccelByteItemType::INGAMEITEM" },
				{ "LOOTBOX.Name", "EAccelByteItemType::LOOTBOX" },
				{ "MEDIA.Name", "EAccelByteItemType::MEDIA" },
				{ "ModuleRelativePath", "Public/EAccelByteItemType.h" },
				{ "NONE.Name", "EAccelByteItemType::NONE" },
				{ "OPTIONBOX.Name", "EAccelByteItemType::OPTIONBOX" },
				{ "SEASON.Name", "EAccelByteItemType::SEASON" },
				{ "SUBSCRIPTION.Name", "EAccelByteItemType::SUBSCRIPTION" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteItemType",
				"EAccelByteItemType",
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
