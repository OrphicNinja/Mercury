// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZButtonControlsReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZButtonControlsReference() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlsReference();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlReference();
// End Cross Module References
class UScriptStruct* FSBZButtonControlsReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZButtonControlsReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZButtonControlsReference, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZButtonControlsReference"), sizeof(FSBZButtonControlsReference), Get_Z_Construct_UScriptStruct_FSBZButtonControlsReference_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZButtonControlsReference>()
{
	return FSBZButtonControlsReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZButtonControlsReference(FSBZButtonControlsReference::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZButtonControlsReference"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZButtonControlsReference
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZButtonControlsReference()
	{
		UScriptStruct::DeferCppStructOps<FSBZButtonControlsReference>(FName(TEXT("SBZButtonControlsReference")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZButtonControlsReference;
	struct Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZButtonControlsReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZButtonControlsReference>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::NewProp_ActionList_Inner = { "ActionList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::NewProp_ActionList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZButtonControlsReference" },
		{ "ModuleRelativePath", "Public/SBZButtonControlsReference.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::NewProp_ActionList = { "ActionList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZButtonControlsReference, ActionList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::NewProp_ActionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::NewProp_ActionList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::NewProp_ActionList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::NewProp_ActionList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZButtonControlsReference",
		sizeof(FSBZButtonControlsReference),
		alignof(FSBZButtonControlsReference),
		Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlsReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZButtonControlsReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZButtonControlsReference"), sizeof(FSBZButtonControlsReference), Get_Z_Construct_UScriptStruct_FSBZButtonControlsReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZButtonControlsReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZButtonControlsReference_Hash() { return 1301511122U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
