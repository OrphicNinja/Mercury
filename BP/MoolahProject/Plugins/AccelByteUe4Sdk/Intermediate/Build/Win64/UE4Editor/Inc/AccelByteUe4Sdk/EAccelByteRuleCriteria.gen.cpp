// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteRuleCriteria.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteRuleCriteria() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRuleCriteria();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteRuleCriteria_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRuleCriteria, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteRuleCriteria"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteRuleCriteria>()
	{
		return EAccelByteRuleCriteria_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteRuleCriteria(EAccelByteRuleCriteria_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteRuleCriteria"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRuleCriteria_Hash() { return 940775414U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRuleCriteria()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteRuleCriteria"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRuleCriteria_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteRuleCriteria::MINIMUM", (int64)EAccelByteRuleCriteria::MINIMUM },
				{ "EAccelByteRuleCriteria::MAXIMUM", (int64)EAccelByteRuleCriteria::MAXIMUM },
				{ "EAccelByteRuleCriteria::EQUAL", (int64)EAccelByteRuleCriteria::EQUAL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EQUAL.Name", "EAccelByteRuleCriteria::EQUAL" },
				{ "MAXIMUM.Name", "EAccelByteRuleCriteria::MAXIMUM" },
				{ "MINIMUM.Name", "EAccelByteRuleCriteria::MINIMUM" },
				{ "ModuleRelativePath", "Public/EAccelByteRuleCriteria.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteRuleCriteria",
				"EAccelByteRuleCriteria",
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
