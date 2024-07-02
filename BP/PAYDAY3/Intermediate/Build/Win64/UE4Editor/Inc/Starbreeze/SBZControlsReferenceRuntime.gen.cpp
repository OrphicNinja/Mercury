// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZControlsReferenceRuntime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZControlsReferenceRuntime() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReference();
// End Cross Module References
class UScriptStruct* FSBZControlsReferenceRuntime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZControlsReferenceRuntime"), sizeof(FSBZControlsReferenceRuntime), Get_Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZControlsReferenceRuntime>()
{
	return FSBZControlsReferenceRuntime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZControlsReferenceRuntime(FSBZControlsReferenceRuntime::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZControlsReferenceRuntime"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZControlsReferenceRuntime
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZControlsReferenceRuntime()
	{
		UScriptStruct::DeferCppStructOps<FSBZControlsReferenceRuntime>(FName(TEXT("SBZControlsReferenceRuntime")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZControlsReferenceRuntime;
	struct Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceRuntime.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZControlsReferenceRuntime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::NewProp_ControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceRuntime" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::NewProp_ControlsReference = { "ControlsReference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZControlsReferenceRuntime, ControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::NewProp_ControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::NewProp_ControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceRuntime" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZControlsReferenceRuntime, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::NewProp_ControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZControlsReferenceRuntime",
		sizeof(FSBZControlsReferenceRuntime),
		alignof(FSBZControlsReferenceRuntime),
		Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZControlsReferenceRuntime"), sizeof(FSBZControlsReferenceRuntime), Get_Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime_Hash() { return 2567854938U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
