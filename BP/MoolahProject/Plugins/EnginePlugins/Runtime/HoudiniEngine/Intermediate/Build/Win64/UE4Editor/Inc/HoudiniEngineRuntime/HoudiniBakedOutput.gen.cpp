// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniBakedOutput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniBakedOutput() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObject();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier();
// End Cross Module References
class UScriptStruct* FHoudiniBakedOutput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniBakedOutput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBakedOutput, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBakedOutput"), sizeof(FHoudiniBakedOutput), Get_Z_Construct_UScriptStruct_FHoudiniBakedOutput_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBakedOutput>()
{
	return FHoudiniBakedOutput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniBakedOutput(FHoudiniBakedOutput::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniBakedOutput"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniBakedOutput
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniBakedOutput()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniBakedOutput>(FName(TEXT("HoudiniBakedOutput")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniBakedOutput;
	struct Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedOutputObjects_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedOutputObjects_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedOutputObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BakedOutputObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBakedOutput>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_ValueProp = { "BakedOutputObjects", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FHoudiniBakedOutputObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_Key_KeyProp = { "BakedOutputObjects_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutput" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutput.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects = { "BakedOutputObjects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniBakedOutput, BakedOutputObjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniBakedOutput",
		sizeof(FHoudiniBakedOutput),
		alignof(FHoudiniBakedOutput),
		Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniBakedOutput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniBakedOutput"), sizeof(FHoudiniBakedOutput), Get_Z_Construct_UScriptStruct_FHoudiniBakedOutput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniBakedOutput_Hash() { return 3635607834U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
