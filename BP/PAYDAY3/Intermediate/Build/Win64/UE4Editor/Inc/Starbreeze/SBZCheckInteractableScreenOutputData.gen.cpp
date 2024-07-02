// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCheckInteractableScreenOutputData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCheckInteractableScreenOutputData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractReqData();
// End Cross Module References
class UScriptStruct* FSBZCheckInteractableScreenOutputData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCheckInteractableScreenOutputData"), sizeof(FSBZCheckInteractableScreenOutputData), Get_Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCheckInteractableScreenOutputData>()
{
	return FSBZCheckInteractableScreenOutputData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCheckInteractableScreenOutputData(FSBZCheckInteractableScreenOutputData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCheckInteractableScreenOutputData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCheckInteractableScreenOutputData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCheckInteractableScreenOutputData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCheckInteractableScreenOutputData>(FName(TEXT("SBZCheckInteractableScreenOutputData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCheckInteractableScreenOutputData;
	struct Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReqData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReqData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCheckInteractableScreenOutputData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCheckInteractableScreenOutputData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_Interactable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheckInteractableScreenOutputData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCheckInteractableScreenOutputData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCheckInteractableScreenOutputData, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_HitResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheckInteractableScreenOutputData" },
		{ "ModuleRelativePath", "Public/SBZCheckInteractableScreenOutputData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCheckInteractableScreenOutputData, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_ReqData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheckInteractableScreenOutputData" },
		{ "ModuleRelativePath", "Public/SBZCheckInteractableScreenOutputData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_ReqData = { "ReqData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCheckInteractableScreenOutputData, ReqData), Z_Construct_UScriptStruct_FSBZInteractReqData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_ReqData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_ReqData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::NewProp_ReqData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCheckInteractableScreenOutputData",
		sizeof(FSBZCheckInteractableScreenOutputData),
		alignof(FSBZCheckInteractableScreenOutputData),
		Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCheckInteractableScreenOutputData"), sizeof(FSBZCheckInteractableScreenOutputData), Get_Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCheckInteractableScreenOutputData_Hash() { return 3563493049U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
