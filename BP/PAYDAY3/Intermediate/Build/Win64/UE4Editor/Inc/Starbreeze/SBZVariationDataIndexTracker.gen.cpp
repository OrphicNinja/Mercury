// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVariationDataIndexTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVariationDataIndexTracker() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVariationSetData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZVariationDataIndexTracker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVariationDataIndexTracker"), sizeof(FSBZVariationDataIndexTracker), Get_Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVariationDataIndexTracker>()
{
	return FSBZVariationDataIndexTracker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVariationDataIndexTracker(FSBZVariationDataIndexTracker::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVariationDataIndexTracker"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVariationDataIndexTracker
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVariationDataIndexTracker()
	{
		UScriptStruct::DeferCppStructOps<FSBZVariationDataIndexTracker>(FName(TEXT("SBZVariationDataIndexTracker")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVariationDataIndexTracker;
	struct Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_VariationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVariationDataIndexTracker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVariationDataIndexTracker>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::NewProp_VariationData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVariationDataIndexTracker" },
		{ "ModuleRelativePath", "Public/SBZVariationDataIndexTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::NewProp_VariationData = { "VariationData", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVariationDataIndexTracker, VariationData), Z_Construct_UClass_USBZVariationSetData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::NewProp_VariationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::NewProp_VariationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::NewProp_VariationData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVariationDataIndexTracker",
		sizeof(FSBZVariationDataIndexTracker),
		alignof(FSBZVariationDataIndexTracker),
		Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVariationDataIndexTracker"), sizeof(FSBZVariationDataIndexTracker), Get_Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker_Hash() { return 2379446856U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
