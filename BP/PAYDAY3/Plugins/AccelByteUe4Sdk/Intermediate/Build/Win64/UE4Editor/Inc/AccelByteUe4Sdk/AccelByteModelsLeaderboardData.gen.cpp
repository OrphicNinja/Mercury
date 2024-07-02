// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsLeaderboardData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsLeaderboardData() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsLeaderboardData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsLeaderboardData"), sizeof(FAccelByteModelsLeaderboardData), Get_Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsLeaderboardData>()
{
	return FAccelByteModelsLeaderboardData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsLeaderboardData(FAccelByteModelsLeaderboardData::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsLeaderboardData"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLeaderboardData
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLeaderboardData()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsLeaderboardData>(FName(TEXT("AccelByteModelsLeaderboardData")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLeaderboardData;
	struct Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Descending_MetaData[];
#endif
		static void NewProp_Descending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Descending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDeleted_MetaData[];
#endif
		static void NewProp_IsDeleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDeleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CyleIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CyleIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CyleIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllTime_MetaData[];
#endif
		static void NewProp_AllTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeletedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeletedAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeaderboardData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsLeaderboardData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Descending_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeaderboardData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeaderboardData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Descending_SetBit(void* Obj)
	{
		((FAccelByteModelsLeaderboardData*)Obj)->Descending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Descending = { "Descending", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsLeaderboardData), &Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Descending_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Descending_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Descending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_IconUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeaderboardData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeaderboardData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_IconUrl = { "IconUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLeaderboardData, IconUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_IconUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_IconUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_IsDeleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeaderboardData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeaderboardData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_IsDeleted_SetBit(void* Obj)
	{
		((FAccelByteModelsLeaderboardData*)Obj)->IsDeleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_IsDeleted = { "IsDeleted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsLeaderboardData), &Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_IsDeleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_IsDeleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_IsDeleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_LeaderboardCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeaderboardData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeaderboardData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLeaderboardData, LeaderboardCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_LeaderboardCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_LeaderboardCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeaderboardData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeaderboardData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLeaderboardData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeaderboardData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeaderboardData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLeaderboardData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_StatCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeaderboardData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeaderboardData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLeaderboardData, StatCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_StatCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_StatCode_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_CyleIds_Inner = { "CyleIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_CyleIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeaderboardData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeaderboardData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_CyleIds = { "CyleIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLeaderboardData, CyleIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_CyleIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_CyleIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_AllTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeaderboardData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeaderboardData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_AllTime_SetBit(void* Obj)
	{
		((FAccelByteModelsLeaderboardData*)Obj)->AllTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_AllTime = { "AllTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsLeaderboardData), &Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_AllTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_AllTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_AllTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeaderboardData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeaderboardData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLeaderboardData, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_DeletedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeaderboardData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeaderboardData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_DeletedAt = { "DeletedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLeaderboardData, DeletedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_DeletedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_DeletedAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Descending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_IconUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_IsDeleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_LeaderboardCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_StatCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_CyleIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_CyleIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_AllTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::NewProp_DeletedAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsLeaderboardData",
		sizeof(FAccelByteModelsLeaderboardData),
		alignof(FAccelByteModelsLeaderboardData),
		Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsLeaderboardData"), sizeof(FAccelByteModelsLeaderboardData), Get_Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLeaderboardData_Hash() { return 1275916218U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
