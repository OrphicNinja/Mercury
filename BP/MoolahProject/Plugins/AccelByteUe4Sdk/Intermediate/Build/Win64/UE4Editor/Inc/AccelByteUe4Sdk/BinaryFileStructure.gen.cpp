// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/BinaryFileStructure.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBinaryFileStructure() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FBinaryFileStructure();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FArrayByte();
// End Cross Module References
class UScriptStruct* FBinaryFileStructure::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FBinaryFileStructure_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBinaryFileStructure, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("BinaryFileStructure"), sizeof(FBinaryFileStructure), Get_Z_Construct_UScriptStruct_FBinaryFileStructure_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FBinaryFileStructure>()
{
	return FBinaryFileStructure::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBinaryFileStructure(FBinaryFileStructure::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("BinaryFileStructure"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBinaryFileStructure
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBinaryFileStructure()
	{
		UScriptStruct::DeferCppStructOps<FBinaryFileStructure>(FName(TEXT("BinaryFileStructure")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBinaryFileStructure;
	struct Z_Construct_UScriptStruct_FBinaryFileStructure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Segments_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Segments_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Segments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BinaryFileStructure.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBinaryFileStructure>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::NewProp_Segments_ValueProp = { "Segments", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FArrayByte, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::NewProp_Segments_Key_KeyProp = { "Segments_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::NewProp_Segments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BinaryFileStructure" },
		{ "ModuleRelativePath", "Public/BinaryFileStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBinaryFileStructure, Segments), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::NewProp_Segments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::NewProp_Segments_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::NewProp_Segments_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::NewProp_Segments,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"BinaryFileStructure",
		sizeof(FBinaryFileStructure),
		alignof(FBinaryFileStructure),
		Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBinaryFileStructure()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBinaryFileStructure_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BinaryFileStructure"), sizeof(FBinaryFileStructure), Get_Z_Construct_UScriptStruct_FBinaryFileStructure_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBinaryFileStructure_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBinaryFileStructure_Hash() { return 4193210430U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
