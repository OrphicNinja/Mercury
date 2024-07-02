// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteEntitlementItemIdentityType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteEntitlementItemIdentityType() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementItemIdentityType();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteEntitlementItemIdentityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementItemIdentityType, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteEntitlementItemIdentityType"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteEntitlementItemIdentityType>()
	{
		return EAccelByteEntitlementItemIdentityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteEntitlementItemIdentityType(EAccelByteEntitlementItemIdentityType_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteEntitlementItemIdentityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementItemIdentityType_Hash() { return 2676633998U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementItemIdentityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteEntitlementItemIdentityType"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementItemIdentityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteEntitlementItemIdentityType::NONE", (int64)EAccelByteEntitlementItemIdentityType::NONE },
				{ "EAccelByteEntitlementItemIdentityType::ITEM_ID", (int64)EAccelByteEntitlementItemIdentityType::ITEM_ID },
				{ "EAccelByteEntitlementItemIdentityType::ITEM_SKU", (int64)EAccelByteEntitlementItemIdentityType::ITEM_SKU },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ITEM_ID.Name", "EAccelByteEntitlementItemIdentityType::ITEM_ID" },
				{ "ITEM_SKU.Name", "EAccelByteEntitlementItemIdentityType::ITEM_SKU" },
				{ "ModuleRelativePath", "Public/EAccelByteEntitlementItemIdentityType.h" },
				{ "NONE.Name", "EAccelByteEntitlementItemIdentityType::NONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteEntitlementItemIdentityType",
				"EAccelByteEntitlementItemIdentityType",
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
