// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsResourceActionedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsResourceActionedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGameStandardEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsResourceActionedPayload>() == std::is_polymorphic<FAccelByteModelsGameStandardEvent>(), "USTRUCT FAccelByteModelsResourceActionedPayload cannot be polymorphic unless super FAccelByteModelsGameStandardEvent is polymorphic");

class UScriptStruct* FAccelByteModelsResourceActionedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsResourceActionedPayload"), sizeof(FAccelByteModelsResourceActionedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsResourceActionedPayload>()
{
	return FAccelByteModelsResourceActionedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsResourceActionedPayload(FAccelByteModelsResourceActionedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsResourceActionedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsResourceActionedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsResourceActionedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsResourceActionedPayload>(FName(TEXT("AccelByteModelsResourceActionedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsResourceActionedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EquipLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActionTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceActionedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsResourceActionedPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceActionedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceActionedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceName = { "ResourceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceActionedPayload, ResourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceActionedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceActionedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceID = { "ResourceID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceActionedPayload, ResourceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceActionedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceActionedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceCategory = { "ResourceCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceActionedPayload, ResourceCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceRating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceActionedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceActionedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceRating = { "ResourceRating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceActionedPayload, ResourceRating), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceRating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceRating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceActionedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceActionedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceSource = { "ResourceSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceActionedPayload, ResourceSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceLevelRequirement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceActionedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceActionedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceLevelRequirement = { "ResourceLevelRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceActionedPayload, ResourceLevelRequirement), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceLevelRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceLevelRequirement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceRarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceActionedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceActionedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceRarity = { "ResourceRarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceActionedPayload, ResourceRarity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceRarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_EquipLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceActionedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceActionedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_EquipLocation = { "EquipLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceActionedPayload, EquipLocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_EquipLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_EquipLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceActionedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceActionedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceActionedPayload, ActionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ActionTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsResourceActionedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsResourceActionedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ActionTarget = { "ActionTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsResourceActionedPayload, ActionTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ActionTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ActionTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceRating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceLevelRequirement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ResourceRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_EquipLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::NewProp_ActionTarget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsGameStandardEvent,
		&NewStructOps,
		"AccelByteModelsResourceActionedPayload",
		sizeof(FAccelByteModelsResourceActionedPayload),
		alignof(FAccelByteModelsResourceActionedPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsResourceActionedPayload"), sizeof(FAccelByteModelsResourceActionedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsResourceActionedPayload_Hash() { return 645709945U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
