// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractDisplayData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractDisplayData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractDisplayData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractModeDisplayData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZInteractDisplayData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInteractDisplayData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInteractDisplayData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInteractDisplayData"), sizeof(FSBZInteractDisplayData), Get_Z_Construct_UScriptStruct_FSBZInteractDisplayData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInteractDisplayData>()
{
	return FSBZInteractDisplayData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInteractDisplayData(FSBZInteractDisplayData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInteractDisplayData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractDisplayData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractDisplayData()
	{
		UScriptStruct::DeferCppStructOps<FSBZInteractDisplayData>(FName(TEXT("SBZInteractDisplayData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractDisplayData;
	struct Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanInteract_MetaData[];
#endif
		static void NewProp_bCanInteract_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanInteract;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prio_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Prio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailPrio_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FailPrio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractDisplayData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInteractDisplayData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_bCanInteract_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractDisplayData" },
		{ "ModuleRelativePath", "Public/SBZInteractDisplayData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_bCanInteract_SetBit(void* Obj)
	{
		((FSBZInteractDisplayData*)Obj)->bCanInteract = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_bCanInteract = { "bCanInteract", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZInteractDisplayData), &Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_bCanInteract_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_bCanInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_bCanInteract_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_ModeArray_Inner = { "ModeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZInteractModeDisplayData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_ModeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractDisplayData" },
		{ "ModuleRelativePath", "Public/SBZInteractDisplayData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_ModeArray = { "ModeArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractDisplayData, ModeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_ModeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_ModeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_Component_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractDisplayData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractDisplayData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractDisplayData, Component), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_Prio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractDisplayData" },
		{ "ModuleRelativePath", "Public/SBZInteractDisplayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_Prio = { "Prio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractDisplayData, Prio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_Prio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_Prio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_FailPrio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractDisplayData" },
		{ "ModuleRelativePath", "Public/SBZInteractDisplayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_FailPrio = { "FailPrio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractDisplayData, FailPrio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_FailPrio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_FailPrio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_bCanInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_ModeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_ModeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_Prio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::NewProp_FailPrio,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInteractDisplayData",
		sizeof(FSBZInteractDisplayData),
		alignof(FSBZInteractDisplayData),
		Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractDisplayData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInteractDisplayData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInteractDisplayData"), sizeof(FSBZInteractDisplayData), Get_Z_Construct_UScriptStruct_FSBZInteractDisplayData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInteractDisplayData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInteractDisplayData_Hash() { return 3300112970U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
