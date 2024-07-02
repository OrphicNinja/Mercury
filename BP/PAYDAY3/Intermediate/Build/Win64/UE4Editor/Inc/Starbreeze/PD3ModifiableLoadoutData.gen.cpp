// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3ModifiableLoadoutData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3ModifiableLoadoutData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData_NoRegister();
// End Cross Module References
class UScriptStruct* FPD3ModifiableLoadoutData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3ModifiableLoadoutData"), sizeof(FPD3ModifiableLoadoutData), Get_Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3ModifiableLoadoutData>()
{
	return FPD3ModifiableLoadoutData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3ModifiableLoadoutData(FPD3ModifiableLoadoutData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3ModifiableLoadoutData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3ModifiableLoadoutData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3ModifiableLoadoutData()
	{
		UScriptStruct::DeferCppStructOps<FPD3ModifiableLoadoutData>(FName(TEXT("PD3ModifiableLoadoutData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3ModifiableLoadoutData;
	struct Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifiedToolData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModifiedToolData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3ModifiableLoadoutData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3ModifiableLoadoutData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::NewProp_ToolData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ModifiableLoadoutData" },
		{ "ModuleRelativePath", "Public/PD3ModifiableLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::NewProp_ToolData = { "ToolData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3ModifiableLoadoutData, ToolData), Z_Construct_UClass_USBZToolData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::NewProp_ToolData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::NewProp_ToolData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::NewProp_ModifiedToolData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ModifiableLoadoutData" },
		{ "ModuleRelativePath", "Public/PD3ModifiableLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::NewProp_ModifiedToolData = { "ModifiedToolData", nullptr, (EPropertyFlags)0x0090000080002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3ModifiableLoadoutData, ModifiedToolData), Z_Construct_UClass_USBZToolData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::NewProp_ModifiedToolData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::NewProp_ModifiedToolData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::NewProp_ToolData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::NewProp_ModifiedToolData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3ModifiableLoadoutData",
		sizeof(FPD3ModifiableLoadoutData),
		alignof(FPD3ModifiableLoadoutData),
		Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3ModifiableLoadoutData"), sizeof(FPD3ModifiableLoadoutData), Get_Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData_Hash() { return 4180807416U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
