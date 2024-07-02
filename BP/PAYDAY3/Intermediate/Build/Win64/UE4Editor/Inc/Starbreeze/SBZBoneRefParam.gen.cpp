// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBoneRefParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBoneRefParam() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneRefParam();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FSBZBoneRefParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBoneRefParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBoneRefParam, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBoneRefParam"), sizeof(FSBZBoneRefParam), Get_Z_Construct_UScriptStruct_FSBZBoneRefParam_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBoneRefParam>()
{
	return FSBZBoneRefParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBoneRefParam(FSBZBoneRefParam::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBoneRefParam"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneRefParam
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneRefParam()
	{
		UScriptStruct::DeferCppStructOps<FSBZBoneRefParam>(FName(TEXT("SBZBoneRefParam")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneRefParam;
	struct Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBoneRefParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBoneRefParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::NewProp_BoneRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneRefParam" },
		{ "ModuleRelativePath", "Public/SBZBoneRefParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::NewProp_BoneRef = { "BoneRef", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneRefParam, BoneRef), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::NewProp_BoneRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::NewProp_BoneRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::NewProp_BoneRef,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBoneRefParam",
		sizeof(FSBZBoneRefParam),
		alignof(FSBZBoneRefParam),
		Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneRefParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBoneRefParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBoneRefParam"), sizeof(FSBZBoneRefParam), Get_Z_Construct_UScriptStruct_FSBZBoneRefParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBoneRefParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBoneRefParam_Hash() { return 276413358U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
