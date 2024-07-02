// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsGlobalAchievementGetContributorsPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsGlobalAchievementGetContributorsPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsGlobalAchievementGetContributorsPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsGlobalAchievementGetContributorsPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsGlobalAchievementGetContributorsPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsGlobalAchievementGetContributorsPayload"), sizeof(FAccelByteModelsGlobalAchievementGetContributorsPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsGlobalAchievementGetContributorsPayload>()
{
	return FAccelByteModelsGlobalAchievementGetContributorsPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload(FAccelByteModelsGlobalAchievementGetContributorsPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsGlobalAchievementGetContributorsPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGlobalAchievementGetContributorsPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGlobalAchievementGetContributorsPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsGlobalAchievementGetContributorsPayload>(FName(TEXT("AccelByteModelsGlobalAchievementGetContributorsPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGlobalAchievementGetContributorsPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGlobalAchievementGetContributorsPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsGlobalAchievementGetContributorsPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::NewProp_AchievementCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGlobalAchievementGetContributorsPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGlobalAchievementGetContributorsPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGlobalAchievementGetContributorsPayload, AchievementCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::NewProp_AchievementCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::NewProp_AchievementCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::NewProp_AchievementCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsGlobalAchievementGetContributorsPayload",
		sizeof(FAccelByteModelsGlobalAchievementGetContributorsPayload),
		alignof(FAccelByteModelsGlobalAchievementGetContributorsPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsGlobalAchievementGetContributorsPayload"), sizeof(FAccelByteModelsGlobalAchievementGetContributorsPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGlobalAchievementGetContributorsPayload_Hash() { return 203301658U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
