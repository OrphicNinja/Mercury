// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteCycle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteCycle() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCycle();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteCycle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCycle, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteCycle"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteCycle>()
	{
		return EAccelByteCycle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteCycle(EAccelByteCycle_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteCycle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCycle_Hash() { return 1720779446U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCycle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteCycle"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCycle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteCycle::DAILY", (int64)EAccelByteCycle::DAILY },
				{ "EAccelByteCycle::WEEKLY", (int64)EAccelByteCycle::WEEKLY },
				{ "EAccelByteCycle::MONTHLY", (int64)EAccelByteCycle::MONTHLY },
				{ "EAccelByteCycle::QUARTERLY", (int64)EAccelByteCycle::QUARTERLY },
				{ "EAccelByteCycle::YEARLY", (int64)EAccelByteCycle::YEARLY },
				{ "EAccelByteCycle::ANNUALLY", (int64)EAccelByteCycle::ANNUALLY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ANNUALLY.Name", "EAccelByteCycle::ANNUALLY" },
				{ "BlueprintType", "true" },
				{ "DAILY.Name", "EAccelByteCycle::DAILY" },
				{ "ModuleRelativePath", "Public/EAccelByteCycle.h" },
				{ "MONTHLY.Name", "EAccelByteCycle::MONTHLY" },
				{ "QUARTERLY.Name", "EAccelByteCycle::QUARTERLY" },
				{ "WEEKLY.Name", "EAccelByteCycle::WEEKLY" },
				{ "YEARLY.Name", "EAccelByteCycle::YEARLY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteCycle",
				"EAccelByteCycle",
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
