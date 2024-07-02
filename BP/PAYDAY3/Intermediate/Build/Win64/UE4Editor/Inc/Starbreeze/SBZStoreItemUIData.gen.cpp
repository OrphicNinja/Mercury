// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStoreItemUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStoreItemUIData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreItemUIData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZStoreItemUIIdSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
// End Cross Module References
class UScriptStruct* FSBZStoreItemUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZStoreItemUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZStoreItemUIData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZStoreItemUIData"), sizeof(FSBZStoreItemUIData), Get_Z_Construct_UScriptStruct_FSBZStoreItemUIData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZStoreItemUIData>()
{
	return FSBZStoreItemUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZStoreItemUIData(FSBZStoreItemUIData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZStoreItemUIData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStoreItemUIData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStoreItemUIData()
	{
		UScriptStruct::DeferCppStructOps<FSBZStoreItemUIData>(FName(TEXT("SBZStoreItemUIData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZStoreItemUIData;
	struct Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StoreItemUIIdSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreItemUIIdSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StoreItemUIIdSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoreItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZStoreItemUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZStoreItemUIData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_StoreItemUIIdSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_StoreItemUIIdSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreItemUIData" },
		{ "ModuleRelativePath", "Public/SBZStoreItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_StoreItemUIIdSource = { "StoreItemUIIdSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreItemUIData, StoreItemUIIdSource), Z_Construct_UEnum_Starbreeze_ESBZStoreItemUIIdSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_StoreItemUIIdSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_StoreItemUIIdSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_ItemUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreItemUIData" },
		{ "ModuleRelativePath", "Public/SBZStoreItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_ItemUID = { "ItemUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreItemUIData, ItemUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_ItemUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_ItemUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_ExternalItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreItemUIData" },
		{ "ModuleRelativePath", "Public/SBZStoreItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_ExternalItemId = { "ExternalItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreItemUIData, ExternalItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_ExternalItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_ExternalItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_InventoryItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreItemUIData" },
		{ "ModuleRelativePath", "Public/SBZStoreItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_InventoryItem = { "InventoryItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreItemUIData, InventoryItem), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_InventoryItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_InventoryItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_StoreItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreItemUIData" },
		{ "ModuleRelativePath", "Public/SBZStoreItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_StoreItem = { "StoreItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreItemUIData, StoreItem), Z_Construct_UScriptStruct_FSBZStoreBaseItem, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_StoreItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_StoreItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_StoreItemUIIdSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_StoreItemUIIdSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_ItemUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_ExternalItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_InventoryItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::NewProp_StoreItem,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZStoreItemUIData",
		sizeof(FSBZStoreItemUIData),
		alignof(FSBZStoreItemUIData),
		Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreItemUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZStoreItemUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZStoreItemUIData"), sizeof(FSBZStoreItemUIData), Get_Z_Construct_UScriptStruct_FSBZStoreItemUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZStoreItemUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZStoreItemUIData_Hash() { return 1536900929U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
