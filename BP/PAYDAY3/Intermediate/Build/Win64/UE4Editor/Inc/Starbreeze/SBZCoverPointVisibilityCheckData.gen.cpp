// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCoverPointVisibilityCheckData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCoverPointVisibilityCheckData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCoverPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZCoverPointVisibilityCheckData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCoverPointVisibilityCheckData"), sizeof(FSBZCoverPointVisibilityCheckData), Get_Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCoverPointVisibilityCheckData>()
{
	return FSBZCoverPointVisibilityCheckData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCoverPointVisibilityCheckData(FSBZCoverPointVisibilityCheckData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCoverPointVisibilityCheckData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCoverPointVisibilityCheckData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCoverPointVisibilityCheckData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCoverPointVisibilityCheckData>(FName(TEXT("SBZCoverPointVisibilityCheckData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCoverPointVisibilityCheckData;
	struct Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoverPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoverPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCoverPointVisibilityCheckData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCoverPointVisibilityCheckData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::NewProp_CoverPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPointVisibilityCheckData" },
		{ "ModuleRelativePath", "Public/SBZCoverPointVisibilityCheckData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::NewProp_CoverPoint = { "CoverPoint", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCoverPointVisibilityCheckData, CoverPoint), Z_Construct_UClass_ASBZCoverPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::NewProp_CoverPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::NewProp_CoverPoint_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::NewProp_Enemies_Inner = { "Enemies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::NewProp_Enemies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPointVisibilityCheckData" },
		{ "ModuleRelativePath", "Public/SBZCoverPointVisibilityCheckData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCoverPointVisibilityCheckData, Enemies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::NewProp_Enemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::NewProp_Enemies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::NewProp_CoverPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::NewProp_Enemies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::NewProp_Enemies,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCoverPointVisibilityCheckData",
		sizeof(FSBZCoverPointVisibilityCheckData),
		alignof(FSBZCoverPointVisibilityCheckData),
		Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCoverPointVisibilityCheckData"), sizeof(FSBZCoverPointVisibilityCheckData), Get_Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData_Hash() { return 3051977213U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
