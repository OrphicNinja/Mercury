// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplicationGroupIndices.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplicationGroupIndices() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplicationGroupIndices();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZReplicationGroupIndices::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZReplicationGroupIndices, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZReplicationGroupIndices"), sizeof(FSBZReplicationGroupIndices), Get_Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZReplicationGroupIndices>()
{
	return FSBZReplicationGroupIndices::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZReplicationGroupIndices(FSBZReplicationGroupIndices::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZReplicationGroupIndices"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplicationGroupIndices
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplicationGroupIndices()
	{
		UScriptStruct::DeferCppStructOps<FSBZReplicationGroupIndices>(FName(TEXT("SBZReplicationGroupIndices")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplicationGroupIndices;
	struct Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationGroupIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ReplicationGroupIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZReplicationGroupIndices.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZReplicationGroupIndices>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::NewProp_ReplicationGroupIndices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicationGroupIndices" },
		{ "ModuleRelativePath", "Public/SBZReplicationGroupIndices.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::NewProp_ReplicationGroupIndices = { "ReplicationGroupIndices", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplicationGroupIndices, ReplicationGroupIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::NewProp_ReplicationGroupIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::NewProp_ReplicationGroupIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::NewProp_ReplicationGroupIndices,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZReplicationGroupIndices",
		sizeof(FSBZReplicationGroupIndices),
		alignof(FSBZReplicationGroupIndices),
		Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZReplicationGroupIndices()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZReplicationGroupIndices"), sizeof(FSBZReplicationGroupIndices), Get_Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZReplicationGroupIndices_Hash() { return 3702192612U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
