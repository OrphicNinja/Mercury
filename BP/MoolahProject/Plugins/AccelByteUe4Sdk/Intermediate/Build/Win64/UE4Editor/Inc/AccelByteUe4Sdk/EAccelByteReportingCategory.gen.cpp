// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteReportingCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteReportingCategory() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteReportingCategory();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteReportingCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteReportingCategory, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteReportingCategory"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteReportingCategory>()
	{
		return EAccelByteReportingCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteReportingCategory(EAccelByteReportingCategory_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteReportingCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteReportingCategory_Hash() { return 2585675527U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteReportingCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteReportingCategory"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteReportingCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteReportingCategory::UGC", (int64)EAccelByteReportingCategory::UGC },
				{ "EAccelByteReportingCategory::USER", (int64)EAccelByteReportingCategory::USER },
				{ "EAccelByteReportingCategory::CHAT", (int64)EAccelByteReportingCategory::CHAT },
				{ "EAccelByteReportingCategory::EXTENSION", (int64)EAccelByteReportingCategory::EXTENSION },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CHAT.Name", "EAccelByteReportingCategory::CHAT" },
				{ "EXTENSION.Name", "EAccelByteReportingCategory::EXTENSION" },
				{ "ModuleRelativePath", "Public/EAccelByteReportingCategory.h" },
				{ "UGC.Name", "EAccelByteReportingCategory::UGC" },
				{ "USER.Name", "EAccelByteReportingCategory::USER" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteReportingCategory",
				"EAccelByteReportingCategory",
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
