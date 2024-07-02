// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteV2SessionJoinability.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteV2SessionJoinability() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionJoinability();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteV2SessionJoinability_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionJoinability, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteV2SessionJoinability"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteV2SessionJoinability>()
	{
		return EAccelByteV2SessionJoinability_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteV2SessionJoinability(EAccelByteV2SessionJoinability_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteV2SessionJoinability"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionJoinability_Hash() { return 1751561674U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionJoinability()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteV2SessionJoinability"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionJoinability_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteV2SessionJoinability::EMPTY", (int64)EAccelByteV2SessionJoinability::EMPTY },
				{ "EAccelByteV2SessionJoinability::CLOSED", (int64)EAccelByteV2SessionJoinability::CLOSED },
				{ "EAccelByteV2SessionJoinability::INVITE_ONLY", (int64)EAccelByteV2SessionJoinability::INVITE_ONLY },
				{ "EAccelByteV2SessionJoinability::OPEN", (int64)EAccelByteV2SessionJoinability::OPEN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CLOSED.Name", "EAccelByteV2SessionJoinability::CLOSED" },
				{ "EMPTY.Name", "EAccelByteV2SessionJoinability::EMPTY" },
				{ "INVITE_ONLY.Name", "EAccelByteV2SessionJoinability::INVITE_ONLY" },
				{ "ModuleRelativePath", "Public/EAccelByteV2SessionJoinability.h" },
				{ "OPEN.Name", "EAccelByteV2SessionJoinability::OPEN" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteV2SessionJoinability",
				"EAccelByteV2SessionJoinability",
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
