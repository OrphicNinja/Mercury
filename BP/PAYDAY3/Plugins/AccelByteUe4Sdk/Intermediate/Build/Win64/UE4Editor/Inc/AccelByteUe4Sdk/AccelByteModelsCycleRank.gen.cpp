// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsCycleRank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsCycleRank() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCycleRank();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FAccelByteModelsCycleRank::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsCycleRank"), sizeof(FAccelByteModelsCycleRank), Get_Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsCycleRank>()
{
	return FAccelByteModelsCycleRank::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsCycleRank(FAccelByteModelsCycleRank::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsCycleRank"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsCycleRank
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsCycleRank()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsCycleRank>(FName(TEXT("AccelByteModelsCycleRank")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsCycleRank;
	struct Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hidden_MetaData[];
#endif
		static void NewProp_Hidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CycleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CycleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCycleRank.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsCycleRank>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_AdditionalData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCycleRank" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCycleRank.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCycleRank, AdditionalData), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_AdditionalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_AdditionalData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Hidden_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCycleRank" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCycleRank.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Hidden_SetBit(void* Obj)
	{
		((FAccelByteModelsCycleRank*)Obj)->Hidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Hidden = { "Hidden", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsCycleRank), &Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Hidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Hidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Hidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Point_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCycleRank" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCycleRank.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCycleRank, Point), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Rank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCycleRank" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCycleRank.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCycleRank, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_CycleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCycleRank" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCycleRank.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_CycleId = { "CycleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCycleRank, CycleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_CycleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_CycleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_AdditionalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Hidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::NewProp_CycleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsCycleRank",
		sizeof(FAccelByteModelsCycleRank),
		alignof(FAccelByteModelsCycleRank),
		Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCycleRank()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsCycleRank"), sizeof(FAccelByteModelsCycleRank), Get_Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsCycleRank_Hash() { return 2783262975U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
