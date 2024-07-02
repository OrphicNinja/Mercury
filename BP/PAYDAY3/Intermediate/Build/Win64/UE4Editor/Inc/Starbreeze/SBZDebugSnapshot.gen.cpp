// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDebugSnapshot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDebugSnapshot() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDebugSnapshot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement();
// End Cross Module References
class UScriptStruct* FSBZDebugSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDebugSnapshot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDebugSnapshot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDebugSnapshot"), sizeof(FSBZDebugSnapshot), Get_Z_Construct_UScriptStruct_FSBZDebugSnapshot_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDebugSnapshot>()
{
	return FSBZDebugSnapshot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDebugSnapshot(FSBZDebugSnapshot::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDebugSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDebugSnapshot
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDebugSnapshot()
	{
		UScriptStruct::DeferCppStructOps<FSBZDebugSnapshot>(FName(TEXT("SBZDebugSnapshot")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDebugSnapshot;
	struct Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDebugSnapshot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDebugSnapshot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::NewProp_ServerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugSnapshot" },
		{ "ModuleRelativePath", "Public/SBZDebugSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::NewProp_ServerState = { "ServerState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDebugSnapshot, ServerState), Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::NewProp_ServerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::NewProp_ServerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::NewProp_ServerState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDebugSnapshot",
		sizeof(FSBZDebugSnapshot),
		alignof(FSBZDebugSnapshot),
		Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDebugSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDebugSnapshot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDebugSnapshot"), sizeof(FSBZDebugSnapshot), Get_Z_Construct_UScriptStruct_FSBZDebugSnapshot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDebugSnapshot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDebugSnapshot_Hash() { return 1658686032U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
