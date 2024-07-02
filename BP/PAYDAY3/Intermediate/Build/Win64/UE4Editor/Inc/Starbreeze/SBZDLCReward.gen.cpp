// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDLCReward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDLCReward() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDLCReward();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZDLCReward::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDLCReward_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDLCReward, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDLCReward"), sizeof(FSBZDLCReward), Get_Z_Construct_UScriptStruct_FSBZDLCReward_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDLCReward>()
{
	return FSBZDLCReward::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDLCReward(FSBZDLCReward::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDLCReward"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDLCReward
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDLCReward()
	{
		UScriptStruct::DeferCppStructOps<FSBZDLCReward>(FName(TEXT("SBZDLCReward")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDLCReward;
	struct Z_Construct_UScriptStruct_FSBZDLCReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLCName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DLCName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntitlementArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EntitlementArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDLCReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDLCReward.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDLCReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDLCReward>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDLCReward_Statics::NewProp_DLCName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDLCReward" },
		{ "ModuleRelativePath", "Public/SBZDLCReward.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZDLCReward_Statics::NewProp_DLCName = { "DLCName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDLCReward, DLCName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDLCReward_Statics::NewProp_DLCName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDLCReward_Statics::NewProp_DLCName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZDLCReward_Statics::NewProp_EntitlementArray_Inner = { "EntitlementArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDLCReward_Statics::NewProp_EntitlementArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDLCReward" },
		{ "ModuleRelativePath", "Public/SBZDLCReward.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZDLCReward_Statics::NewProp_EntitlementArray = { "EntitlementArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDLCReward, EntitlementArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDLCReward_Statics::NewProp_EntitlementArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDLCReward_Statics::NewProp_EntitlementArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDLCReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDLCReward_Statics::NewProp_DLCName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDLCReward_Statics::NewProp_EntitlementArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDLCReward_Statics::NewProp_EntitlementArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDLCReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDLCReward",
		sizeof(FSBZDLCReward),
		alignof(FSBZDLCReward),
		Z_Construct_UScriptStruct_FSBZDLCReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDLCReward_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDLCReward_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDLCReward_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDLCReward()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDLCReward_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDLCReward"), sizeof(FSBZDLCReward), Get_Z_Construct_UScriptStruct_FSBZDLCReward_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDLCReward_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDLCReward_Hash() { return 2688085217U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
