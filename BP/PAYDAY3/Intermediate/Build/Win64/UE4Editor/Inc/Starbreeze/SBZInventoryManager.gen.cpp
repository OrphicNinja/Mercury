// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInventoryManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInventoryManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerInventory_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZItemEntitlementArray();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(USBZInventoryManager::execBP_GetInventoryManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZInventoryManager**)Z_Param__Result=USBZInventoryManager::BP_GetInventoryManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInventoryManager::execGetCosmeticsInventoryItemsForType)
	{
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_CosmeticsPartSlot);
		P_GET_TARRAY_REF(FSBZCosmeticsInventoryItem,Z_Param_Out_CosmeticsInventoryItemArrayOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCosmeticsInventoryItemsForType(Z_Param_CosmeticsPartSlot,Z_Param_Out_CosmeticsInventoryItemArrayOut);
		P_NATIVE_END;
	}
	void USBZInventoryManager::StaticRegisterNativesUSBZInventoryManager()
	{
		UClass* Class = USBZInventoryManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_GetInventoryManager", &USBZInventoryManager::execBP_GetInventoryManager },
			{ "GetCosmeticsInventoryItemsForType", &USBZInventoryManager::execGetCosmeticsInventoryItemsForType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics
	{
		struct SBZInventoryManager_eventBP_GetInventoryManager_Parms
		{
			const UObject* WorldContextObject;
			USBZInventoryManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInventoryManager_eventBP_GetInventoryManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInventoryManager_eventBP_GetInventoryManager_Parms, ReturnValue), Z_Construct_UClass_USBZInventoryManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInventoryManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInventoryManager, nullptr, "BP_GetInventoryManager", nullptr, nullptr, sizeof(SBZInventoryManager_eventBP_GetInventoryManager_Parms), Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics
	{
		struct SBZInventoryManager_eventGetCosmeticsInventoryItemsForType_Parms
		{
			const USBZCosmeticsPartSlot* CosmeticsPartSlot;
			TArray<FSBZCosmeticsInventoryItem> CosmeticsInventoryItemArrayOut;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticsPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticsPartSlot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CosmeticsInventoryItemArrayOut_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CosmeticsInventoryItemArrayOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::NewProp_CosmeticsPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::NewProp_CosmeticsPartSlot = { "CosmeticsPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInventoryManager_eventGetCosmeticsInventoryItemsForType_Parms, CosmeticsPartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::NewProp_CosmeticsPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::NewProp_CosmeticsPartSlot_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::NewProp_CosmeticsInventoryItemArrayOut_Inner = { "CosmeticsInventoryItemArrayOut", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::NewProp_CosmeticsInventoryItemArrayOut = { "CosmeticsInventoryItemArrayOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInventoryManager_eventGetCosmeticsInventoryItemsForType_Parms, CosmeticsInventoryItemArrayOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::NewProp_CosmeticsPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::NewProp_CosmeticsInventoryItemArrayOut_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::NewProp_CosmeticsInventoryItemArrayOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInventoryManager, nullptr, "GetCosmeticsInventoryItemsForType", nullptr, nullptr, sizeof(SBZInventoryManager_eventGetCosmeticsInventoryItemsForType_Parms), Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZInventoryManager_NoRegister()
	{
		return USBZInventoryManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZInventoryManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerInventory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RewardRequestArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardRequestArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RewardRequestArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerPlayerOwnedItemAccelByteItemIdMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerPlayerOwnedItemAccelByteItemIdMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPlayerOwnedItemAccelByteItemIdMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ServerPlayerOwnedItemAccelByteItemIdMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryItemMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryItemMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItemMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InventoryItemMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwningEntitlementIdArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningEntitlementIdArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OwningEntitlementIdArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwningItemIdArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningItemIdArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OwningItemIdArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OwnedHeistSkus_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedHeistSkus_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OwnedHeistSkus;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VendorPermissionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorPermissionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VendorPermissionArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInventoryManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZInventoryManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZInventoryManager_BP_GetInventoryManager, "BP_GetInventoryManager" }, // 1954265631
		{ &Z_Construct_UFunction_USBZInventoryManager_GetCosmeticsInventoryItemsForType, "GetCosmeticsInventoryItemsForType" }, // 2594920826
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInventoryManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInventoryManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_PlayerInventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryManager" },
		{ "ModuleRelativePath", "Public/SBZInventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryManager, PlayerInventory), Z_Construct_UClass_USBZPlayerInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_PlayerInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_PlayerInventory_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_RewardRequestArray_Inner = { "RewardRequestArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_RewardRequestArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryManager" },
		{ "ModuleRelativePath", "Public/SBZInventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_RewardRequestArray = { "RewardRequestArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryManager, RewardRequestArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_RewardRequestArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_RewardRequestArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_ServerPlayerOwnedItemAccelByteItemIdMap_ValueProp = { "ServerPlayerOwnedItemAccelByteItemIdMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZItemEntitlementArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_ServerPlayerOwnedItemAccelByteItemIdMap_Key_KeyProp = { "ServerPlayerOwnedItemAccelByteItemIdMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_ServerPlayerOwnedItemAccelByteItemIdMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryManager" },
		{ "ModuleRelativePath", "Public/SBZInventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_ServerPlayerOwnedItemAccelByteItemIdMap = { "ServerPlayerOwnedItemAccelByteItemIdMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryManager, ServerPlayerOwnedItemAccelByteItemIdMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_ServerPlayerOwnedItemAccelByteItemIdMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_ServerPlayerOwnedItemAccelByteItemIdMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_InventoryItemMap_ValueProp = { "InventoryItemMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_InventoryItemMap_Key_KeyProp = { "InventoryItemMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_InventoryItemMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryManager" },
		{ "ModuleRelativePath", "Public/SBZInventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_InventoryItemMap = { "InventoryItemMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryManager, InventoryItemMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_InventoryItemMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_InventoryItemMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningEntitlementIdArray_Inner = { "OwningEntitlementIdArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningEntitlementIdArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryManager" },
		{ "ModuleRelativePath", "Public/SBZInventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningEntitlementIdArray = { "OwningEntitlementIdArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryManager, OwningEntitlementIdArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningEntitlementIdArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningEntitlementIdArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningItemIdArray_Inner = { "OwningItemIdArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningItemIdArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryManager" },
		{ "ModuleRelativePath", "Public/SBZInventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningItemIdArray = { "OwningItemIdArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryManager, OwningItemIdArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningItemIdArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningItemIdArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwnedHeistSkus_Inner = { "OwnedHeistSkus", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwnedHeistSkus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryManager" },
		{ "ModuleRelativePath", "Public/SBZInventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwnedHeistSkus = { "OwnedHeistSkus", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryManager, OwnedHeistSkus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwnedHeistSkus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwnedHeistSkus_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_VendorPermissionArray_Inner = { "VendorPermissionArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_VendorPermissionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryManager" },
		{ "ModuleRelativePath", "Public/SBZInventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_VendorPermissionArray = { "VendorPermissionArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryManager, VendorPermissionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_VendorPermissionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_VendorPermissionArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZInventoryManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_PlayerInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_RewardRequestArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_RewardRequestArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_ServerPlayerOwnedItemAccelByteItemIdMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_ServerPlayerOwnedItemAccelByteItemIdMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_ServerPlayerOwnedItemAccelByteItemIdMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_InventoryItemMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_InventoryItemMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_InventoryItemMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningEntitlementIdArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningEntitlementIdArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningItemIdArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwningItemIdArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwnedHeistSkus_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_OwnedHeistSkus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_VendorPermissionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryManager_Statics::NewProp_VendorPermissionArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInventoryManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInventoryManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInventoryManager_Statics::ClassParams = {
		&USBZInventoryManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZInventoryManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZInventoryManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInventoryManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInventoryManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInventoryManager, 683863869);
	template<> STARBREEZE_API UClass* StaticClass<USBZInventoryManager>()
	{
		return USBZInventoryManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInventoryManager(Z_Construct_UClass_USBZInventoryManager, &USBZInventoryManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInventoryManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInventoryManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
