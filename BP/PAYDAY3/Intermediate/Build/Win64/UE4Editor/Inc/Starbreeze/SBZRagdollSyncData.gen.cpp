// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRagdollSyncData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRagdollSyncData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRagdollSyncData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
// End Cross Module References
class UScriptStruct* FSBZRagdollSyncData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRagdollSyncData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRagdollSyncData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRagdollSyncData"), sizeof(FSBZRagdollSyncData), Get_Z_Construct_UScriptStruct_FSBZRagdollSyncData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRagdollSyncData>()
{
	return FSBZRagdollSyncData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRagdollSyncData(FSBZRagdollSyncData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRagdollSyncData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRagdollSyncData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRagdollSyncData()
	{
		UScriptStruct::DeferCppStructOps<FSBZRagdollSyncData>(FName(TEXT("SBZRagdollSyncData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRagdollSyncData;
	struct Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipsLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRagdollSyncData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRagdollSyncData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::NewProp_HipsLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRagdollSyncData" },
		{ "ModuleRelativePath", "Public/SBZRagdollSyncData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::NewProp_HipsLocation = { "HipsLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRagdollSyncData, HipsLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::NewProp_HipsLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::NewProp_HipsLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::NewProp_NetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRagdollSyncData" },
		{ "ModuleRelativePath", "Public/SBZRagdollSyncData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::NewProp_NetID = { "NetID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRagdollSyncData, NetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::NewProp_NetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::NewProp_NetID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::NewProp_HipsLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::NewProp_NetID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRagdollSyncData",
		sizeof(FSBZRagdollSyncData),
		alignof(FSBZRagdollSyncData),
		Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRagdollSyncData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRagdollSyncData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRagdollSyncData"), sizeof(FSBZRagdollSyncData), Get_Z_Construct_UScriptStruct_FSBZRagdollSyncData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRagdollSyncData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRagdollSyncData_Hash() { return 1993241630U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
