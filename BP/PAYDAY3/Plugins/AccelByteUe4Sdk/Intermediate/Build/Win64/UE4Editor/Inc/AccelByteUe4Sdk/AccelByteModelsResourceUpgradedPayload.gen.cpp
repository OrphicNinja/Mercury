// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsResourceUpgradedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsResourceUpgradedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGameStandardEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsResourceUpgradedPayload>() == std::is_polymorphic<FAccelByteModelsGameStandardEvent>(), "USTRUCT FAccelByteModelsResourceUpgradedPayload cannot be polymorphic unless super FAccelByteModelsGameStandardEvent is polymorphic");

class UScriptStruct* FAccelByteModelsResourceUpgradedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsResourceUpgradedPayload"), sizeof(FAccelByteModelsResourceUpgradedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsResourceUpgradedPayload>()
{
	return FAccelByteModelsResourceUpgradedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload(FAccelByteModelsResourceUpgradedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsResourceUpgradedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsResourceUpgradedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsResourceUpgradedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsResourceUpgradedPayload>(FName(TEXT("AccelByteModelsResourceUpgradedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsResourceUpgradedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResourceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResourceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResourceCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceRating_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResourceRating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResourceSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceLevelRequirement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResourceLevelRequirement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceRarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResourceRarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpgradeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpgradeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpgradeSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpgradeSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpgradeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpgradeLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceUpgradedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsResourceUpgradedPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceUpgradedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceUpgradedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceName = { "ResourceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceUpgradedPayload, ResourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceUpgradedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceUpgradedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceID = { "ResourceID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceUpgradedPayload, ResourceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceUpgradedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceUpgradedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceCategory = { "ResourceCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceUpgradedPayload, ResourceCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceRating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceUpgradedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceUpgradedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceRating = { "ResourceRating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceUpgradedPayload, ResourceRating), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceRating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceRating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceUpgradedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceUpgradedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceSource = { "ResourceSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceUpgradedPayload, ResourceSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceLevelRequirement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceUpgradedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceUpgradedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceLevelRequirement = { "ResourceLevelRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceUpgradedPayload, ResourceLevelRequirement), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceLevelRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceLevelRequirement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceRarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceUpgradedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceUpgradedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceRarity = { "ResourceRarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceUpgradedPayload, ResourceRarity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceRarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceUpgradedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceUpgradedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeType = { "UpgradeType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceUpgradedPayload, UpgradeType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceUpgradedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceUpgradedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeSource = { "UpgradeSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceUpgradedPayload, UpgradeSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceUpgradedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceUpgradedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeLevel = { "UpgradeLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceUpgradedPayload, UpgradeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceRating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceLevelRequirement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_ResourceRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::NewProp_UpgradeLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsGameStandardEvent,
		&NewStructOps,
		"AccelByteModelsResourceUpgradedPayload",
		sizeof(FAccelByteModelsResourceUpgradedPayload),
		alignof(FAccelByteModelsResourceUpgradedPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsResourceUpgradedPayload"), sizeof(FAccelByteModelsResourceUpgradedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsResourceUpgradedPayload_Hash() { return 4159227094U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
