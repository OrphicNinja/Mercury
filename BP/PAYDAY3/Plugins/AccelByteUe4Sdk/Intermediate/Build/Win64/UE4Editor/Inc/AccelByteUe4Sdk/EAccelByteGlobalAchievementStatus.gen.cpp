// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteGlobalAchievementStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteGlobalAchievementStatus() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementStatus();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteGlobalAchievementStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementStatus, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteGlobalAchievementStatus"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteGlobalAchievementStatus>()
	{
		return EAccelByteGlobalAchievementStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteGlobalAchievementStatus(EAccelByteGlobalAchievementStatus_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteGlobalAchievementStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementStatus_Hash() { return 1957910355U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteGlobalAchievementStatus"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteGlobalAchievementStatus::NONE", (int64)EAccelByteGlobalAchievementStatus::NONE },
				{ "EAccelByteGlobalAchievementStatus::IN_PROGRESS", (int64)EAccelByteGlobalAchievementStatus::IN_PROGRESS },
				{ "EAccelByteGlobalAchievementStatus::UNLOCKED", (int64)EAccelByteGlobalAchievementStatus::UNLOCKED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IN_PROGRESS.Name", "EAccelByteGlobalAchievementStatus::IN_PROGRESS" },
				{ "ModuleRelativePath", "Public/EAccelByteGlobalAchievementStatus.h" },
				{ "NONE.Name", "EAccelByteGlobalAchievementStatus::NONE" },
				{ "UNLOCKED.Name", "EAccelByteGlobalAchievementStatus::UNLOCKED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteGlobalAchievementStatus",
				"EAccelByteGlobalAchievementStatus",
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
