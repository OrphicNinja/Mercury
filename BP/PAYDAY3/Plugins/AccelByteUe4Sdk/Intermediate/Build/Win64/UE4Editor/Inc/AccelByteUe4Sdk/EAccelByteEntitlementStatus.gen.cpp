// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteEntitlementStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteEntitlementStatus() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementStatus();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteEntitlementStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementStatus, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteEntitlementStatus"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteEntitlementStatus>()
	{
		return EAccelByteEntitlementStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteEntitlementStatus(EAccelByteEntitlementStatus_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteEntitlementStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementStatus_Hash() { return 1170122249U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteEntitlementStatus"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteEntitlementStatus::NONE", (int64)EAccelByteEntitlementStatus::NONE },
				{ "EAccelByteEntitlementStatus::ACTIVE", (int64)EAccelByteEntitlementStatus::ACTIVE },
				{ "EAccelByteEntitlementStatus::INACTIVE", (int64)EAccelByteEntitlementStatus::INACTIVE },
				{ "EAccelByteEntitlementStatus::CONSUMED", (int64)EAccelByteEntitlementStatus::CONSUMED },
				{ "EAccelByteEntitlementStatus::REVOKED", (int64)EAccelByteEntitlementStatus::REVOKED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACTIVE.Name", "EAccelByteEntitlementStatus::ACTIVE" },
				{ "BlueprintType", "true" },
				{ "CONSUMED.Name", "EAccelByteEntitlementStatus::CONSUMED" },
				{ "INACTIVE.Name", "EAccelByteEntitlementStatus::INACTIVE" },
				{ "ModuleRelativePath", "Public/EAccelByteEntitlementStatus.h" },
				{ "NONE.Name", "EAccelByteEntitlementStatus::NONE" },
				{ "REVOKED.Name", "EAccelByteEntitlementStatus::REVOKED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteEntitlementStatus",
				"EAccelByteEntitlementStatus",
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
