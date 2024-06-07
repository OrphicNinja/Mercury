// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteMatchmakingStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteMatchmakingStatus() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteMatchmakingStatus();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteMatchmakingStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteMatchmakingStatus, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteMatchmakingStatus"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteMatchmakingStatus>()
	{
		return EAccelByteMatchmakingStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteMatchmakingStatus(EAccelByteMatchmakingStatus_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteMatchmakingStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteMatchmakingStatus_Hash() { return 3543690046U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteMatchmakingStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteMatchmakingStatus"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteMatchmakingStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteMatchmakingStatus::Unknown", (int64)EAccelByteMatchmakingStatus::Unknown },
				{ "EAccelByteMatchmakingStatus::Start", (int64)EAccelByteMatchmakingStatus::Start },
				{ "EAccelByteMatchmakingStatus::Timeout", (int64)EAccelByteMatchmakingStatus::Timeout },
				{ "EAccelByteMatchmakingStatus::Cancel", (int64)EAccelByteMatchmakingStatus::Cancel },
				{ "EAccelByteMatchmakingStatus::Done", (int64)EAccelByteMatchmakingStatus::Done },
				{ "EAccelByteMatchmakingStatus::Unavailable", (int64)EAccelByteMatchmakingStatus::Unavailable },
				{ "EAccelByteMatchmakingStatus::Rejected", (int64)EAccelByteMatchmakingStatus::Rejected },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cancel.Name", "EAccelByteMatchmakingStatus::Cancel" },
				{ "Done.Name", "EAccelByteMatchmakingStatus::Done" },
				{ "ModuleRelativePath", "Public/EAccelByteMatchmakingStatus.h" },
				{ "Rejected.Name", "EAccelByteMatchmakingStatus::Rejected" },
				{ "Start.Name", "EAccelByteMatchmakingStatus::Start" },
				{ "Timeout.Name", "EAccelByteMatchmakingStatus::Timeout" },
				{ "Unavailable.Name", "EAccelByteMatchmakingStatus::Unavailable" },
				{ "Unknown.Name", "EAccelByteMatchmakingStatus::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteMatchmakingStatus",
				"EAccelByteMatchmakingStatus",
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
