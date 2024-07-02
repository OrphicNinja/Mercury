// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsReportingSubmitDataBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsReportingSubmitDataBase() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteReportingCategory();
// End Cross Module References
class UScriptStruct* FAccelByteModelsReportingSubmitDataBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsReportingSubmitDataBase"), sizeof(FAccelByteModelsReportingSubmitDataBase), Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsReportingSubmitDataBase>()
{
	return FAccelByteModelsReportingSubmitDataBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase(FAccelByteModelsReportingSubmitDataBase::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsReportingSubmitDataBase"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsReportingSubmitDataBase
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsReportingSubmitDataBase()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsReportingSubmitDataBase>(FName(TEXT("AccelByteModelsReportingSubmitDataBase")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsReportingSubmitDataBase;
	struct Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtensionCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtensionCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsReportingSubmitDataBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsReportingSubmitDataBase>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsReportingSubmitDataBase" },
		{ "ModuleRelativePath", "Public/AccelByteModelsReportingSubmitDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsReportingSubmitDataBase, Category), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteReportingCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Comment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsReportingSubmitDataBase" },
		{ "ModuleRelativePath", "Public/AccelByteModelsReportingSubmitDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsReportingSubmitDataBase, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ObjectId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsReportingSubmitDataBase" },
		{ "ModuleRelativePath", "Public/AccelByteModelsReportingSubmitDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsReportingSubmitDataBase, ObjectId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ObjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ObjectId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ObjectType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsReportingSubmitDataBase" },
		{ "ModuleRelativePath", "Public/AccelByteModelsReportingSubmitDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsReportingSubmitDataBase, ObjectType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ObjectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Reason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsReportingSubmitDataBase" },
		{ "ModuleRelativePath", "Public/AccelByteModelsReportingSubmitDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsReportingSubmitDataBase, Reason), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Reason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_UserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsReportingSubmitDataBase" },
		{ "ModuleRelativePath", "Public/AccelByteModelsReportingSubmitDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsReportingSubmitDataBase, UserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_UserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_UserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ExtensionCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsReportingSubmitDataBase" },
		{ "ModuleRelativePath", "Public/AccelByteModelsReportingSubmitDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ExtensionCategory = { "ExtensionCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsReportingSubmitDataBase, ExtensionCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ExtensionCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ExtensionCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Comment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ObjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_UserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::NewProp_ExtensionCategory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsReportingSubmitDataBase",
		sizeof(FAccelByteModelsReportingSubmitDataBase),
		alignof(FAccelByteModelsReportingSubmitDataBase),
		Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsReportingSubmitDataBase"), sizeof(FAccelByteModelsReportingSubmitDataBase), Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase_Hash() { return 4290745052U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
