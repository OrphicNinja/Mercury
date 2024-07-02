// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsCategoryInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsCategoryInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsCategoryInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsCategoryInfo"), sizeof(FAccelByteModelsCategoryInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsCategoryInfo>()
{
	return FAccelByteModelsCategoryInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsCategoryInfo(FAccelByteModelsCategoryInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsCategoryInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsCategoryInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsCategoryInfo()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsCategoryInfo>(FName(TEXT("AccelByteModelsCategoryInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsCategoryInfo;
	struct Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentCategoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParentCategoryPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static void NewProp_Root_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCategoryInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsCategoryInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCategoryInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCategoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCategoryInfo, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_ParentCategoryPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCategoryInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCategoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_ParentCategoryPath = { "ParentCategoryPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCategoryInfo, ParentCategoryPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_ParentCategoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_ParentCategoryPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_CategoryPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCategoryInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCategoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_CategoryPath = { "CategoryPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCategoryInfo, CategoryPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_CategoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_CategoryPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCategoryInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCategoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCategoryInfo, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCategoryInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCategoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCategoryInfo, UpdatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_UpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_UpdatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCategoryInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCategoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCategoryInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCategoryInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCategoryInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_Root_SetBit(void* Obj)
	{
		((FAccelByteModelsCategoryInfo*)Obj)->Root = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsCategoryInfo), &Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_Root_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_ParentCategoryPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_CategoryPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_UpdatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::NewProp_Root,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsCategoryInfo",
		sizeof(FAccelByteModelsCategoryInfo),
		alignof(FAccelByteModelsCategoryInfo),
		Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsCategoryInfo"), sizeof(FAccelByteModelsCategoryInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsCategoryInfo_Hash() { return 1668778624U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
