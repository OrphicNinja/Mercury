// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAirNodeNeighborInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAirNodeNeighborInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZAirNodeNeighborInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAirNodeNeighborInfo"), sizeof(FSBZAirNodeNeighborInfo), Get_Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAirNodeNeighborInfo>()
{
	return FSBZAirNodeNeighborInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAirNodeNeighborInfo(FSBZAirNodeNeighborInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAirNodeNeighborInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAirNodeNeighborInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAirNodeNeighborInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZAirNodeNeighborInfo>(FName(TEXT("SBZAirNodeNeighborInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAirNodeNeighborInfo;
	struct Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TreeIndex;
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_Indicies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indicies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indicies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAirNodeNeighborInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAirNodeNeighborInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::NewProp_TreeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirNodeNeighborInfo" },
		{ "ModuleRelativePath", "Public/SBZAirNodeNeighborInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::NewProp_TreeIndex = { "TreeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirNodeNeighborInfo, TreeIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::NewProp_TreeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::NewProp_TreeIndex_MetaData)) };
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::NewProp_Indicies_Inner = { "Indicies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::NewProp_Indicies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirNodeNeighborInfo" },
		{ "ModuleRelativePath", "Public/SBZAirNodeNeighborInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::NewProp_Indicies = { "Indicies", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirNodeNeighborInfo, Indicies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::NewProp_Indicies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::NewProp_Indicies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::NewProp_TreeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::NewProp_Indicies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::NewProp_Indicies,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAirNodeNeighborInfo",
		sizeof(FSBZAirNodeNeighborInfo),
		alignof(FSBZAirNodeNeighborInfo),
		Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAirNodeNeighborInfo"), sizeof(FSBZAirNodeNeighborInfo), Get_Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAirNodeNeighborInfo_Hash() { return 399780888U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
