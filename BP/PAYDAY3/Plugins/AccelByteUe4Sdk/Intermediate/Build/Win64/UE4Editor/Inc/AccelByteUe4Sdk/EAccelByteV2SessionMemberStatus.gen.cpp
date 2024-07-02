// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteV2SessionMemberStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteV2SessionMemberStatus() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionMemberStatus();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteV2SessionMemberStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionMemberStatus, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteV2SessionMemberStatus"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteV2SessionMemberStatus>()
	{
		return EAccelByteV2SessionMemberStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteV2SessionMemberStatus(EAccelByteV2SessionMemberStatus_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteV2SessionMemberStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionMemberStatus_Hash() { return 728936652U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionMemberStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteV2SessionMemberStatus"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionMemberStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteV2SessionMemberStatus::EMPTY", (int64)EAccelByteV2SessionMemberStatus::EMPTY },
				{ "EAccelByteV2SessionMemberStatus::INVITED", (int64)EAccelByteV2SessionMemberStatus::INVITED },
				{ "EAccelByteV2SessionMemberStatus::JOINED", (int64)EAccelByteV2SessionMemberStatus::JOINED },
				{ "EAccelByteV2SessionMemberStatus::CONNECTED", (int64)EAccelByteV2SessionMemberStatus::CONNECTED },
				{ "EAccelByteV2SessionMemberStatus::LEFT", (int64)EAccelByteV2SessionMemberStatus::LEFT },
				{ "EAccelByteV2SessionMemberStatus::DROPPED", (int64)EAccelByteV2SessionMemberStatus::DROPPED },
				{ "EAccelByteV2SessionMemberStatus::REJECTED", (int64)EAccelByteV2SessionMemberStatus::REJECTED },
				{ "EAccelByteV2SessionMemberStatus::KICKED", (int64)EAccelByteV2SessionMemberStatus::KICKED },
				{ "EAccelByteV2SessionMemberStatus::TIMEOUT", (int64)EAccelByteV2SessionMemberStatus::TIMEOUT },
				{ "EAccelByteV2SessionMemberStatus::DISCONNECTED", (int64)EAccelByteV2SessionMemberStatus::DISCONNECTED },
				{ "EAccelByteV2SessionMemberStatus::TERMINATED", (int64)EAccelByteV2SessionMemberStatus::TERMINATED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CONNECTED.Name", "EAccelByteV2SessionMemberStatus::CONNECTED" },
				{ "DISCONNECTED.Name", "EAccelByteV2SessionMemberStatus::DISCONNECTED" },
				{ "DROPPED.Name", "EAccelByteV2SessionMemberStatus::DROPPED" },
				{ "EMPTY.Name", "EAccelByteV2SessionMemberStatus::EMPTY" },
				{ "INVITED.Name", "EAccelByteV2SessionMemberStatus::INVITED" },
				{ "JOINED.Name", "EAccelByteV2SessionMemberStatus::JOINED" },
				{ "KICKED.Name", "EAccelByteV2SessionMemberStatus::KICKED" },
				{ "LEFT.Name", "EAccelByteV2SessionMemberStatus::LEFT" },
				{ "ModuleRelativePath", "Public/EAccelByteV2SessionMemberStatus.h" },
				{ "REJECTED.Name", "EAccelByteV2SessionMemberStatus::REJECTED" },
				{ "TERMINATED.Name", "EAccelByteV2SessionMemberStatus::TERMINATED" },
				{ "TIMEOUT.Name", "EAccelByteV2SessionMemberStatus::TIMEOUT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteV2SessionMemberStatus",
				"EAccelByteV2SessionMemberStatus",
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
