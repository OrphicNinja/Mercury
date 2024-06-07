// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteMatchmakingSessionStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteMatchmakingSessionStatus() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteMatchmakingSessionStatus();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteMatchmakingSessionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteMatchmakingSessionStatus, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteMatchmakingSessionStatus"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteMatchmakingSessionStatus>()
	{
		return EAccelByteMatchmakingSessionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteMatchmakingSessionStatus(EAccelByteMatchmakingSessionStatus_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteMatchmakingSessionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteMatchmakingSessionStatus_Hash() { return 371108330U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteMatchmakingSessionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteMatchmakingSessionStatus"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteMatchmakingSessionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteMatchmakingSessionStatus::None", (int64)EAccelByteMatchmakingSessionStatus::None },
				{ "EAccelByteMatchmakingSessionStatus::Matched", (int64)EAccelByteMatchmakingSessionStatus::Matched },
				{ "EAccelByteMatchmakingSessionStatus::Done", (int64)EAccelByteMatchmakingSessionStatus::Done },
				{ "EAccelByteMatchmakingSessionStatus::Cancel", (int64)EAccelByteMatchmakingSessionStatus::Cancel },
				{ "EAccelByteMatchmakingSessionStatus::Timeout", (int64)EAccelByteMatchmakingSessionStatus::Timeout },
				{ "EAccelByteMatchmakingSessionStatus::SessionInQueue", (int64)EAccelByteMatchmakingSessionStatus::SessionInQueue },
				{ "EAccelByteMatchmakingSessionStatus::SessionFull", (int64)EAccelByteMatchmakingSessionStatus::SessionFull },
				{ "EAccelByteMatchmakingSessionStatus::SessionTimeout", (int64)EAccelByteMatchmakingSessionStatus::SessionTimeout },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cancel.Name", "EAccelByteMatchmakingSessionStatus::Cancel" },
				{ "Done.Name", "EAccelByteMatchmakingSessionStatus::Done" },
				{ "Matched.Name", "EAccelByteMatchmakingSessionStatus::Matched" },
				{ "ModuleRelativePath", "Public/EAccelByteMatchmakingSessionStatus.h" },
				{ "None.Name", "EAccelByteMatchmakingSessionStatus::None" },
				{ "SessionFull.Name", "EAccelByteMatchmakingSessionStatus::SessionFull" },
				{ "SessionInQueue.Name", "EAccelByteMatchmakingSessionStatus::SessionInQueue" },
				{ "SessionTimeout.Name", "EAccelByteMatchmakingSessionStatus::SessionTimeout" },
				{ "Timeout.Name", "EAccelByteMatchmakingSessionStatus::Timeout" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteMatchmakingSessionStatus",
				"EAccelByteMatchmakingSessionStatus",
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
