// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUGCUploadContentURLResponseV2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUGCUploadContentURLResponseV2() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsUGCUploadContentURLResponseV2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUGCUploadContentURLResponseV2"), sizeof(FAccelByteModelsUGCUploadContentURLResponseV2), Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUGCUploadContentURLResponseV2>()
{
	return FAccelByteModelsUGCUploadContentURLResponseV2::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2(FAccelByteModelsUGCUploadContentURLResponseV2::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUGCUploadContentURLResponseV2"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCUploadContentURLResponseV2
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCUploadContentURLResponseV2()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUGCUploadContentURLResponseV2>(FName(TEXT("AccelByteModelsUGCUploadContentURLResponseV2")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCUploadContentURLResponseV2;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCUploadContentURLResponseV2.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUGCUploadContentURLResponseV2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_ContentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCUploadContentURLResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCUploadContentURLResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCUploadContentURLResponseV2, ContentType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_ContentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_FileExtension_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCUploadContentURLResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCUploadContentURLResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_FileExtension = { "FileExtension", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCUploadContentURLResponseV2, FileExtension), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_FileExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_FileExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_Url_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCUploadContentURLResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCUploadContentURLResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCUploadContentURLResponseV2, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_FileLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCUploadContentURLResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCUploadContentURLResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_FileLocation = { "FileLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCUploadContentURLResponseV2, FileLocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_FileLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_FileLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_ContentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_FileExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::NewProp_FileLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsUGCUploadContentURLResponseV2",
		sizeof(FAccelByteModelsUGCUploadContentURLResponseV2),
		alignof(FAccelByteModelsUGCUploadContentURLResponseV2),
		Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUGCUploadContentURLResponseV2"), sizeof(FAccelByteModelsUGCUploadContentURLResponseV2), Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUploadContentURLResponseV2_Hash() { return 2612164636U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
