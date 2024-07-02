// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCustomPrimitiveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCustomPrimitiveData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCustomPrimitiveData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZCustomPrimitiveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCustomPrimitiveData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCustomPrimitiveData"), sizeof(FSBZCustomPrimitiveData), Get_Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCustomPrimitiveData>()
{
	return FSBZCustomPrimitiveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCustomPrimitiveData(FSBZCustomPrimitiveData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCustomPrimitiveData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCustomPrimitiveData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCustomPrimitiveData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCustomPrimitiveData>(FName(TEXT("SBZCustomPrimitiveData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCustomPrimitiveData;
	struct Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MorphTargets_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MorphTargets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MorphTargets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCustomPrimitiveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCustomPrimitiveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomPrimitiveData" },
		{ "ModuleRelativePath", "Public/SBZCustomPrimitiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Data, FSBZCustomPrimitiveData), STRUCT_OFFSET(FSBZCustomPrimitiveData, Data), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_MorphTargets_ValueProp = { "MorphTargets", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_MorphTargets_Key_KeyProp = { "MorphTargets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_MorphTargets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomPrimitiveData" },
		{ "ModuleRelativePath", "Public/SBZCustomPrimitiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_MorphTargets = { "MorphTargets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCustomPrimitiveData, MorphTargets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_MorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_MorphTargets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_MorphTargets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_MorphTargets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::NewProp_MorphTargets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCustomPrimitiveData",
		sizeof(FSBZCustomPrimitiveData),
		alignof(FSBZCustomPrimitiveData),
		Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCustomPrimitiveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCustomPrimitiveData"), sizeof(FSBZCustomPrimitiveData), Get_Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCustomPrimitiveData_Hash() { return 2436661586U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
