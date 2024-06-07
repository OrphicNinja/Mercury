// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteLeaderboardTimeFrame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteLeaderboardTimeFrame() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLeaderboardTimeFrame();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteLeaderboardTimeFrame_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLeaderboardTimeFrame, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteLeaderboardTimeFrame"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteLeaderboardTimeFrame>()
	{
		return EAccelByteLeaderboardTimeFrame_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteLeaderboardTimeFrame(EAccelByteLeaderboardTimeFrame_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteLeaderboardTimeFrame"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLeaderboardTimeFrame_Hash() { return 2747782844U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLeaderboardTimeFrame()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteLeaderboardTimeFrame"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLeaderboardTimeFrame_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteLeaderboardTimeFrame::ALL_TIME", (int64)EAccelByteLeaderboardTimeFrame::ALL_TIME },
				{ "EAccelByteLeaderboardTimeFrame::CURRENT_SEASON", (int64)EAccelByteLeaderboardTimeFrame::CURRENT_SEASON },
				{ "EAccelByteLeaderboardTimeFrame::CURRENT_MONTH", (int64)EAccelByteLeaderboardTimeFrame::CURRENT_MONTH },
				{ "EAccelByteLeaderboardTimeFrame::CURRENT_WEEK", (int64)EAccelByteLeaderboardTimeFrame::CURRENT_WEEK },
				{ "EAccelByteLeaderboardTimeFrame::TODAY", (int64)EAccelByteLeaderboardTimeFrame::TODAY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ALL_TIME.Name", "EAccelByteLeaderboardTimeFrame::ALL_TIME" },
				{ "BlueprintType", "true" },
				{ "CURRENT_MONTH.Name", "EAccelByteLeaderboardTimeFrame::CURRENT_MONTH" },
				{ "CURRENT_SEASON.Name", "EAccelByteLeaderboardTimeFrame::CURRENT_SEASON" },
				{ "CURRENT_WEEK.Name", "EAccelByteLeaderboardTimeFrame::CURRENT_WEEK" },
				{ "ModuleRelativePath", "Public/EAccelByteLeaderboardTimeFrame.h" },
				{ "TODAY.Name", "EAccelByteLeaderboardTimeFrame::TODAY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteLeaderboardTimeFrame",
				"EAccelByteLeaderboardTimeFrame",
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
