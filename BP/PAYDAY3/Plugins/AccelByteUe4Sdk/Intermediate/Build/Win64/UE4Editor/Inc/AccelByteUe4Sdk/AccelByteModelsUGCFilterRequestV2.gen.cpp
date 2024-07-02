// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUGCFilterRequestV2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUGCFilterRequestV2() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsUGCFilterRequestV2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUGCFilterRequestV2"), sizeof(FAccelByteModelsUGCFilterRequestV2), Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUGCFilterRequestV2>()
{
	return FAccelByteModelsUGCFilterRequestV2::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2(FAccelByteModelsUGCFilterRequestV2::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUGCFilterRequestV2"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCFilterRequestV2
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCFilterRequestV2()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUGCFilterRequestV2>(FName(TEXT("AccelByteModelsUGCFilterRequestV2")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCFilterRequestV2;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCFilterRequestV2.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUGCFilterRequestV2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCFilterRequestV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCFilterRequestV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCFilterRequestV2, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCFilterRequestV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCFilterRequestV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCFilterRequestV2, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_SubType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCFilterRequestV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCFilterRequestV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_SubType = { "SubType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCFilterRequestV2, SubType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_SubType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_SubType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCFilterRequestV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCFilterRequestV2.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCFilterRequestV2, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_SubType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::NewProp_Tags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsUGCFilterRequestV2",
		sizeof(FAccelByteModelsUGCFilterRequestV2),
		alignof(FAccelByteModelsUGCFilterRequestV2),
		Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUGCFilterRequestV2"), sizeof(FAccelByteModelsUGCFilterRequestV2), Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2_Hash() { return 3234306050U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
