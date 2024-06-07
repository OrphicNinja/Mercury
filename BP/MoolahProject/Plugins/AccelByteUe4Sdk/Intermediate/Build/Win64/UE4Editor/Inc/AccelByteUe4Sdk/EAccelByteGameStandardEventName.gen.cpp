// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteGameStandardEventName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteGameStandardEventName() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGameStandardEventName();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteGameStandardEventName_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGameStandardEventName, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteGameStandardEventName"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteGameStandardEventName>()
	{
		return EAccelByteGameStandardEventName_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteGameStandardEventName(EAccelByteGameStandardEventName_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteGameStandardEventName"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGameStandardEventName_Hash() { return 3268337712U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGameStandardEventName()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteGameStandardEventName"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGameStandardEventName_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteGameStandardEventName::resource_Sourced", (int64)EAccelByteGameStandardEventName::resource_Sourced },
				{ "EAccelByteGameStandardEventName::resource_Sinked", (int64)EAccelByteGameStandardEventName::resource_Sinked },
				{ "EAccelByteGameStandardEventName::resource_Upgraded", (int64)EAccelByteGameStandardEventName::resource_Upgraded },
				{ "EAccelByteGameStandardEventName::resource_Actioned", (int64)EAccelByteGameStandardEventName::resource_Actioned },
				{ "EAccelByteGameStandardEventName::quest_Started", (int64)EAccelByteGameStandardEventName::quest_Started },
				{ "EAccelByteGameStandardEventName::quest_Ended", (int64)EAccelByteGameStandardEventName::quest_Ended },
				{ "EAccelByteGameStandardEventName::player_Leveled", (int64)EAccelByteGameStandardEventName::player_Leveled },
				{ "EAccelByteGameStandardEventName::player_Dead", (int64)EAccelByteGameStandardEventName::player_Dead },
				{ "EAccelByteGameStandardEventName::reward_Collected", (int64)EAccelByteGameStandardEventName::reward_Collected },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAccelByteGameStandardEventName.h" },
				{ "player_Dead.Name", "EAccelByteGameStandardEventName::player_Dead" },
				{ "player_Leveled.Name", "EAccelByteGameStandardEventName::player_Leveled" },
				{ "quest_Ended.Name", "EAccelByteGameStandardEventName::quest_Ended" },
				{ "quest_Started.Name", "EAccelByteGameStandardEventName::quest_Started" },
				{ "resource_Actioned.Name", "EAccelByteGameStandardEventName::resource_Actioned" },
				{ "resource_Sinked.Name", "EAccelByteGameStandardEventName::resource_Sinked" },
				{ "resource_Sourced.Name", "EAccelByteGameStandardEventName::resource_Sourced" },
				{ "resource_Upgraded.Name", "EAccelByteGameStandardEventName::resource_Upgraded" },
				{ "reward_Collected.Name", "EAccelByteGameStandardEventName::reward_Collected" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteGameStandardEventName",
				"EAccelByteGameStandardEventName",
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
