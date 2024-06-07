// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteItemCurrencyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteItemCurrencyType() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemCurrencyType();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteItemCurrencyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemCurrencyType, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteItemCurrencyType"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteItemCurrencyType>()
	{
		return EAccelByteItemCurrencyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteItemCurrencyType(EAccelByteItemCurrencyType_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteItemCurrencyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemCurrencyType_Hash() { return 45041777U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemCurrencyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteItemCurrencyType"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemCurrencyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteItemCurrencyType::NONE", (int64)EAccelByteItemCurrencyType::NONE },
				{ "EAccelByteItemCurrencyType::REAL", (int64)EAccelByteItemCurrencyType::REAL },
				{ "EAccelByteItemCurrencyType::VIRTUAL", (int64)EAccelByteItemCurrencyType::VIRTUAL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAccelByteItemCurrencyType.h" },
				{ "NONE.Name", "EAccelByteItemCurrencyType::NONE" },
				{ "REAL.Name", "EAccelByteItemCurrencyType::REAL" },
				{ "VIRTUAL.Name", "EAccelByteItemCurrencyType::VIRTUAL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteItemCurrencyType",
				"EAccelByteItemCurrencyType",
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
