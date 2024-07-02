// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlackMarketUIVendorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlackMarketUIVendorData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVendorData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreItemUIGroup();
// End Cross Module References
class UScriptStruct* FSBZBlackMarketUIVendorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBlackMarketUIVendorData"), sizeof(FSBZBlackMarketUIVendorData), Get_Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBlackMarketUIVendorData>()
{
	return FSBZBlackMarketUIVendorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBlackMarketUIVendorData(FSBZBlackMarketUIVendorData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBlackMarketUIVendorData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBlackMarketUIVendorData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBlackMarketUIVendorData()
	{
		UScriptStruct::DeferCppStructOps<FSBZBlackMarketUIVendorData>(FName(TEXT("SBZBlackMarketUIVendorData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBlackMarketUIVendorData;
	struct Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VendorData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIStoreItemArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIStoreItemArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UIStoreItemArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasFetchedStoreData_MetaData[];
#endif
		static void NewProp_bHasFetchedStoreData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFetchedStoreData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketUIVendorData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBlackMarketUIVendorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_VendorData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketUIVendorData" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketUIVendorData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_VendorData = { "VendorData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBlackMarketUIVendorData, VendorData), Z_Construct_UClass_USBZVendorData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_VendorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_VendorData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_UIStoreItemArray_Inner = { "UIStoreItemArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZStoreItemUIGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_UIStoreItemArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketUIVendorData" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketUIVendorData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_UIStoreItemArray = { "UIStoreItemArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBlackMarketUIVendorData, UIStoreItemArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_UIStoreItemArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_UIStoreItemArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_bHasFetchedStoreData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketUIVendorData" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketUIVendorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_bHasFetchedStoreData_SetBit(void* Obj)
	{
		((FSBZBlackMarketUIVendorData*)Obj)->bHasFetchedStoreData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_bHasFetchedStoreData = { "bHasFetchedStoreData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZBlackMarketUIVendorData), &Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_bHasFetchedStoreData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_bHasFetchedStoreData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_bHasFetchedStoreData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_VendorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_UIStoreItemArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_UIStoreItemArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::NewProp_bHasFetchedStoreData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBlackMarketUIVendorData",
		sizeof(FSBZBlackMarketUIVendorData),
		alignof(FSBZBlackMarketUIVendorData),
		Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBlackMarketUIVendorData"), sizeof(FSBZBlackMarketUIVendorData), Get_Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBlackMarketUIVendorData_Hash() { return 965223017U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
