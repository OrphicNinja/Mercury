// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/QuerySystemMessageOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuerySystemMessageOptions() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FQuerySystemMessageOptions();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FQuerySystemMessageOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuerySystemMessageOptions, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("QuerySystemMessageOptions"), sizeof(FQuerySystemMessageOptions), Get_Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FQuerySystemMessageOptions>()
{
	return FQuerySystemMessageOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuerySystemMessageOptions(FQuerySystemMessageOptions::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("QuerySystemMessageOptions"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFQuerySystemMessageOptions
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFQuerySystemMessageOptions()
	{
		UScriptStruct::DeferCppStructOps<FQuerySystemMessageOptions>(FName(TEXT("QuerySystemMessageOptions")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFQuerySystemMessageOptions;
	struct Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnreadOnly_MetaData[];
#endif
		static void NewProp_UnreadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnreadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartCreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartCreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndCreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndCreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuerySystemMessageOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuerySystemMessageOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_UnreadOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuerySystemMessageOptions" },
		{ "ModuleRelativePath", "Public/QuerySystemMessageOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_UnreadOnly_SetBit(void* Obj)
	{
		((FQuerySystemMessageOptions*)Obj)->UnreadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_UnreadOnly = { "UnreadOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQuerySystemMessageOptions), &Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_UnreadOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_UnreadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_UnreadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_StartCreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuerySystemMessageOptions" },
		{ "ModuleRelativePath", "Public/QuerySystemMessageOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_StartCreatedAt = { "StartCreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuerySystemMessageOptions, StartCreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_StartCreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_StartCreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_EndCreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuerySystemMessageOptions" },
		{ "ModuleRelativePath", "Public/QuerySystemMessageOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_EndCreatedAt = { "EndCreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuerySystemMessageOptions, EndCreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_EndCreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_EndCreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuerySystemMessageOptions" },
		{ "ModuleRelativePath", "Public/QuerySystemMessageOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuerySystemMessageOptions, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuerySystemMessageOptions" },
		{ "ModuleRelativePath", "Public/QuerySystemMessageOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuerySystemMessageOptions, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Limit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuerySystemMessageOptions" },
		{ "ModuleRelativePath", "Public/QuerySystemMessageOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuerySystemMessageOptions, Limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Limit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_UnreadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_StartCreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_EndCreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::NewProp_Limit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"QuerySystemMessageOptions",
		sizeof(FQuerySystemMessageOptions),
		alignof(FQuerySystemMessageOptions),
		Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuerySystemMessageOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuerySystemMessageOptions"), sizeof(FQuerySystemMessageOptions), Get_Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuerySystemMessageOptions_Hash() { return 316313381U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
