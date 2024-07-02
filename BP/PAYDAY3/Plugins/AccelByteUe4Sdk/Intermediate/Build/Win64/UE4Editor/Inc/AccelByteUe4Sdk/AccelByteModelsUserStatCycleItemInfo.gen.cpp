// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUserStatCycleItemInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUserStatCycleItemInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsUserStatCycleItemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUserStatCycleItemInfo"), sizeof(FAccelByteModelsUserStatCycleItemInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUserStatCycleItemInfo>()
{
	return FAccelByteModelsUserStatCycleItemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo(FAccelByteModelsUserStatCycleItemInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUserStatCycleItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserStatCycleItemInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserStatCycleItemInfo()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUserStatCycleItemInfo>(FName(TEXT("AccelByteModelsUserStatCycleItemInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserStatCycleItemInfo;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CycleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CycleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CycleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CycleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatCycleItemInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUserStatCycleItemInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_StatCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatCycleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatCycleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatCycleItemInfo, StatCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_StatCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_StatCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_StatName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatCycleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatCycleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatCycleItemInfo, StatName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_StatName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CycleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatCycleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatCycleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CycleId = { "CycleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatCycleItemInfo, CycleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CycleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CycleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CycleName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatCycleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatCycleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CycleName = { "CycleName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatCycleItemInfo, CycleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CycleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CycleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatCycleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatCycleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatCycleItemInfo, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatCycleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatCycleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatCycleItemInfo, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatCycleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatCycleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatCycleItemInfo, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatCycleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatCycleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatCycleItemInfo, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatCycleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatCycleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatCycleItemInfo, UpdatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_UpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_UpdatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatCycleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatCycleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatCycleItemInfo, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_StatCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CycleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CycleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_UpdatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsUserStatCycleItemInfo",
		sizeof(FAccelByteModelsUserStatCycleItemInfo),
		alignof(FAccelByteModelsUserStatCycleItemInfo),
		Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUserStatCycleItemInfo"), sizeof(FAccelByteModelsUserStatCycleItemInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatCycleItemInfo_Hash() { return 383822086U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
