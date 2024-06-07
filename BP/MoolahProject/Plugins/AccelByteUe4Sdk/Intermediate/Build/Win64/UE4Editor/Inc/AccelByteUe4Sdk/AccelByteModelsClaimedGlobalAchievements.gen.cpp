// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsClaimedGlobalAchievements.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsClaimedGlobalAchievements() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsClaimedGlobalAchievements::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsClaimedGlobalAchievements"), sizeof(FAccelByteModelsClaimedGlobalAchievements), Get_Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsClaimedGlobalAchievements>()
{
	return FAccelByteModelsClaimedGlobalAchievements::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements(FAccelByteModelsClaimedGlobalAchievements::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsClaimedGlobalAchievements"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsClaimedGlobalAchievements
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsClaimedGlobalAchievements()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsClaimedGlobalAchievements>(FName(TEXT("AccelByteModelsClaimedGlobalAchievements")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsClaimedGlobalAchievements;
	struct Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AchievedAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsClaimedGlobalAchievements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsClaimedGlobalAchievements>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::NewProp_AchievementCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsClaimedGlobalAchievements" },
		{ "ModuleRelativePath", "Public/AccelByteModelsClaimedGlobalAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsClaimedGlobalAchievements, AchievementCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::NewProp_AchievementCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::NewProp_AchievementCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::NewProp_AchievedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsClaimedGlobalAchievements" },
		{ "ModuleRelativePath", "Public/AccelByteModelsClaimedGlobalAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::NewProp_AchievedAt = { "AchievedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsClaimedGlobalAchievements, AchievedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::NewProp_AchievedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::NewProp_AchievedAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::NewProp_AchievementCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::NewProp_AchievedAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsClaimedGlobalAchievements",
		sizeof(FAccelByteModelsClaimedGlobalAchievements),
		alignof(FAccelByteModelsClaimedGlobalAchievements),
		Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsClaimedGlobalAchievements"), sizeof(FAccelByteModelsClaimedGlobalAchievements), Get_Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsClaimedGlobalAchievements_Hash() { return 3699451041U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
