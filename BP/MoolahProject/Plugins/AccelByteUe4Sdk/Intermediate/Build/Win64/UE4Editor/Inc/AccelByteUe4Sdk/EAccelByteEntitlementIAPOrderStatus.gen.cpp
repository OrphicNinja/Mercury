// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteEntitlementIAPOrderStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteEntitlementIAPOrderStatus() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementIAPOrderStatus();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteEntitlementIAPOrderStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementIAPOrderStatus, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteEntitlementIAPOrderStatus"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteEntitlementIAPOrderStatus>()
	{
		return EAccelByteEntitlementIAPOrderStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteEntitlementIAPOrderStatus(EAccelByteEntitlementIAPOrderStatus_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteEntitlementIAPOrderStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementIAPOrderStatus_Hash() { return 2858902965U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementIAPOrderStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteEntitlementIAPOrderStatus"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementIAPOrderStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteEntitlementIAPOrderStatus::NONE", (int64)EAccelByteEntitlementIAPOrderStatus::NONE },
				{ "EAccelByteEntitlementIAPOrderStatus::VERIFIED", (int64)EAccelByteEntitlementIAPOrderStatus::VERIFIED },
				{ "EAccelByteEntitlementIAPOrderStatus::FULFILLED", (int64)EAccelByteEntitlementIAPOrderStatus::FULFILLED },
				{ "EAccelByteEntitlementIAPOrderStatus::FAILED", (int64)EAccelByteEntitlementIAPOrderStatus::FAILED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FAILED.Name", "EAccelByteEntitlementIAPOrderStatus::FAILED" },
				{ "FULFILLED.Name", "EAccelByteEntitlementIAPOrderStatus::FULFILLED" },
				{ "ModuleRelativePath", "Public/EAccelByteEntitlementIAPOrderStatus.h" },
				{ "NONE.Name", "EAccelByteEntitlementIAPOrderStatus::NONE" },
				{ "VERIFIED.Name", "EAccelByteEntitlementIAPOrderStatus::VERIFIED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteEntitlementIAPOrderStatus",
				"EAccelByteEntitlementIAPOrderStatus",
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
