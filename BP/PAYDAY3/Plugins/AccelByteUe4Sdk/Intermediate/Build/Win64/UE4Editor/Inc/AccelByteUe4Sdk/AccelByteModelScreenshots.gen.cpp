// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelScreenshots.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelScreenshots() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelScreenshots();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelScreenshots::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelScreenshots, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelScreenshots"), sizeof(FAccelByteModelScreenshots), Get_Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelScreenshots>()
{
	return FAccelByteModelScreenshots::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelScreenshots(FAccelByteModelScreenshots::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelScreenshots"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelScreenshots
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelScreenshots()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelScreenshots>(FName(TEXT("AccelByteModelScreenshots")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelScreenshots;
	struct Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScreenshotId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelScreenshots.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelScreenshots>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_ContentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelScreenshots" },
		{ "ModuleRelativePath", "Public/AccelByteModelScreenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelScreenshots, ContentType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_ContentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelScreenshots" },
		{ "ModuleRelativePath", "Public/AccelByteModelScreenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelScreenshots, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_FileExtension_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelScreenshots" },
		{ "ModuleRelativePath", "Public/AccelByteModelScreenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_FileExtension = { "FileExtension", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelScreenshots, FileExtension), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_FileExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_FileExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_ScreenshotId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelScreenshots" },
		{ "ModuleRelativePath", "Public/AccelByteModelScreenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_ScreenshotId = { "ScreenshotId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelScreenshots, ScreenshotId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_ScreenshotId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_ScreenshotId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Source_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelScreenshots" },
		{ "ModuleRelativePath", "Public/AccelByteModelScreenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelScreenshots, Source), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Url_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelScreenshots" },
		{ "ModuleRelativePath", "Public/AccelByteModelScreenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelScreenshots, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_ContentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_FileExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_ScreenshotId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::NewProp_Url,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelScreenshots",
		sizeof(FAccelByteModelScreenshots),
		alignof(FAccelByteModelScreenshots),
		Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelScreenshots()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelScreenshots"), sizeof(FAccelByteModelScreenshots), Get_Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelScreenshots_Hash() { return 798257810U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
