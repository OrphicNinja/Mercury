// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ConvertAchievementStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConvertAchievementStatus() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_ConvertAchievementStatus();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* ConvertAchievementStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_ConvertAchievementStatus, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("ConvertAchievementStatus"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<ConvertAchievementStatus>()
	{
		return ConvertAchievementStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ConvertAchievementStatus(ConvertAchievementStatus_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("ConvertAchievementStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_ConvertAchievementStatus_Hash() { return 3783971715U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_ConvertAchievementStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ConvertAchievementStatus"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_ConvertAchievementStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ConvertAchievementStatus::NONE", (int64)ConvertAchievementStatus::NONE },
				{ "ConvertAchievementStatus::IN_PROGRESS", (int64)ConvertAchievementStatus::IN_PROGRESS },
				{ "ConvertAchievementStatus::UNLOCKED", (int64)ConvertAchievementStatus::UNLOCKED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IN_PROGRESS.Name", "ConvertAchievementStatus::IN_PROGRESS" },
				{ "ModuleRelativePath", "Public/ConvertAchievementStatus.h" },
				{ "NONE.Name", "ConvertAchievementStatus::NONE" },
				{ "UNLOCKED.Name", "ConvertAchievementStatus::UNLOCKED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"ConvertAchievementStatus",
				"ConvertAchievementStatus",
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
