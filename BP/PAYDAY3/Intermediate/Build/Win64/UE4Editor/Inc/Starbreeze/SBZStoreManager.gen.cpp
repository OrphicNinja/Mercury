// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStoreManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStoreManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStoreManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStoreManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStoreItemData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem();
// End Cross Module References
	DEFINE_FUNCTION(USBZStoreManager::execGetCurrentMaskOfTheWeekStoreItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZMaskMouldStoreItem*)Z_Param__Result=P_THIS->GetCurrentMaskOfTheWeekStoreItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStoreManager::execGetInfamyLevelItemUnlockCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InfamyLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInfamyLevelItemUnlockCount(Z_Param_InfamyLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStoreManager::execGetMaxPriceProgressionLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PriceProgressionGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxPriceProgressionLevel(Z_Param_PriceProgressionGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStoreManager::execGetStoreManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZStoreManager**)Z_Param__Result=USBZStoreManager::GetStoreManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStoreManager::execGetStoreManagerChecked)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZStoreManager**)Z_Param__Result=USBZStoreManager::GetStoreManagerChecked(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZStoreManager::StaticRegisterNativesUSBZStoreManager()
	{
		UClass* Class = USBZStoreManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentMaskOfTheWeekStoreItem", &USBZStoreManager::execGetCurrentMaskOfTheWeekStoreItem },
			{ "GetInfamyLevelItemUnlockCount", &USBZStoreManager::execGetInfamyLevelItemUnlockCount },
			{ "GetMaxPriceProgressionLevel", &USBZStoreManager::execGetMaxPriceProgressionLevel },
			{ "GetStoreManager", &USBZStoreManager::execGetStoreManager },
			{ "GetStoreManagerChecked", &USBZStoreManager::execGetStoreManagerChecked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStoreManager_GetCurrentMaskOfTheWeekStoreItem_Statics
	{
		struct SBZStoreManager_eventGetCurrentMaskOfTheWeekStoreItem_Parms
		{
			FSBZMaskMouldStoreItem ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStoreManager_GetCurrentMaskOfTheWeekStoreItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStoreManager_eventGetCurrentMaskOfTheWeekStoreItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStoreManager_GetCurrentMaskOfTheWeekStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStoreManager_GetCurrentMaskOfTheWeekStoreItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStoreManager_GetCurrentMaskOfTheWeekStoreItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStoreManager_GetCurrentMaskOfTheWeekStoreItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStoreManager, nullptr, "GetCurrentMaskOfTheWeekStoreItem", nullptr, nullptr, sizeof(SBZStoreManager_eventGetCurrentMaskOfTheWeekStoreItem_Parms), Z_Construct_UFunction_USBZStoreManager_GetCurrentMaskOfTheWeekStoreItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStoreManager_GetCurrentMaskOfTheWeekStoreItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStoreManager_GetCurrentMaskOfTheWeekStoreItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStoreManager_GetCurrentMaskOfTheWeekStoreItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStoreManager_GetCurrentMaskOfTheWeekStoreItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStoreManager_GetCurrentMaskOfTheWeekStoreItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount_Statics
	{
		struct SBZStoreManager_eventGetInfamyLevelItemUnlockCount_Parms
		{
			int32 InfamyLevel;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount_Statics::NewProp_InfamyLevel = { "InfamyLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStoreManager_eventGetInfamyLevelItemUnlockCount_Parms, InfamyLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStoreManager_eventGetInfamyLevelItemUnlockCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount_Statics::NewProp_InfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStoreManager, nullptr, "GetInfamyLevelItemUnlockCount", nullptr, nullptr, sizeof(SBZStoreManager_eventGetInfamyLevelItemUnlockCount_Parms), Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics
	{
		struct SBZStoreManager_eventGetMaxPriceProgressionLevel_Parms
		{
			FString PriceProgressionGroup;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceProgressionGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PriceProgressionGroup;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::NewProp_PriceProgressionGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::NewProp_PriceProgressionGroup = { "PriceProgressionGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStoreManager_eventGetMaxPriceProgressionLevel_Parms, PriceProgressionGroup), METADATA_PARAMS(Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::NewProp_PriceProgressionGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::NewProp_PriceProgressionGroup_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStoreManager_eventGetMaxPriceProgressionLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::NewProp_PriceProgressionGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStoreManager, nullptr, "GetMaxPriceProgressionLevel", nullptr, nullptr, sizeof(SBZStoreManager_eventGetMaxPriceProgressionLevel_Parms), Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics
	{
		struct SBZStoreManager_eventGetStoreManager_Parms
		{
			const UObject* WorldContextObject;
			USBZStoreManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStoreManager_eventGetStoreManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStoreManager_eventGetStoreManager_Parms, ReturnValue), Z_Construct_UClass_USBZStoreManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStoreManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStoreManager, nullptr, "GetStoreManager", nullptr, nullptr, sizeof(SBZStoreManager_eventGetStoreManager_Parms), Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStoreManager_GetStoreManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStoreManager_GetStoreManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics
	{
		struct SBZStoreManager_eventGetStoreManagerChecked_Parms
		{
			const UObject* WorldContextObject;
			USBZStoreManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStoreManager_eventGetStoreManagerChecked_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStoreManager_eventGetStoreManagerChecked_Parms, ReturnValue), Z_Construct_UClass_USBZStoreManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStoreManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStoreManager, nullptr, "GetStoreManagerChecked", nullptr, nullptr, sizeof(SBZStoreManager_eventGetStoreManagerChecked_Parms), Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStoreManager_NoRegister()
	{
		return USBZStoreManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZStoreManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponPartCostMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponPartCostMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartCostMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeaponPartCostMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreplanningAssetCostMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreplanningAssetCostMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreplanningAssetCostMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PreplanningAssetCostMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteItemTitleToIdString_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteItemTitleToIdString_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteItemTitleToIdString_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AccelByteItemTitleToIdString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllVendorsItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllVendorsItems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PayDayCreditMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PayDayCreditMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PayDayCreditMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PayDayCreditMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStoreManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStoreManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStoreManager_GetCurrentMaskOfTheWeekStoreItem, "GetCurrentMaskOfTheWeekStoreItem" }, // 3865695551
		{ &Z_Construct_UFunction_USBZStoreManager_GetInfamyLevelItemUnlockCount, "GetInfamyLevelItemUnlockCount" }, // 3037388716
		{ &Z_Construct_UFunction_USBZStoreManager_GetMaxPriceProgressionLevel, "GetMaxPriceProgressionLevel" }, // 2795439890
		{ &Z_Construct_UFunction_USBZStoreManager_GetStoreManager, "GetStoreManager" }, // 3981386128
		{ &Z_Construct_UFunction_USBZStoreManager_GetStoreManagerChecked, "GetStoreManagerChecked" }, // 1500169595
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStoreManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStoreManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStoreManager_Statics::NewProp_WeaponPartCostMap_ValueProp = { "WeaponPartCostMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZStoreBaseItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZStoreManager_Statics::NewProp_WeaponPartCostMap_Key_KeyProp = { "WeaponPartCostMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStoreManager_Statics::NewProp_WeaponPartCostMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreManager" },
		{ "ModuleRelativePath", "Public/SBZStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZStoreManager_Statics::NewProp_WeaponPartCostMap = { "WeaponPartCostMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStoreManager, WeaponPartCostMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZStoreManager_Statics::NewProp_WeaponPartCostMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStoreManager_Statics::NewProp_WeaponPartCostMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PreplanningAssetCostMap_ValueProp = { "PreplanningAssetCostMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZStoreBaseItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PreplanningAssetCostMap_Key_KeyProp = { "PreplanningAssetCostMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PreplanningAssetCostMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreManager" },
		{ "ModuleRelativePath", "Public/SBZStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PreplanningAssetCostMap = { "PreplanningAssetCostMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStoreManager, PreplanningAssetCostMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PreplanningAssetCostMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PreplanningAssetCostMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AccelByteItemTitleToIdString_ValueProp = { "AccelByteItemTitleToIdString", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AccelByteItemTitleToIdString_Key_KeyProp = { "AccelByteItemTitleToIdString_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AccelByteItemTitleToIdString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreManager" },
		{ "ModuleRelativePath", "Public/SBZStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AccelByteItemTitleToIdString = { "AccelByteItemTitleToIdString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStoreManager, AccelByteItemTitleToIdString), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AccelByteItemTitleToIdString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AccelByteItemTitleToIdString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AllVendorsItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreManager" },
		{ "ModuleRelativePath", "Public/SBZStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AllVendorsItems = { "AllVendorsItems", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStoreManager, AllVendorsItems), Z_Construct_UScriptStruct_FSBZPlayerStoreItemData, METADATA_PARAMS(Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AllVendorsItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AllVendorsItems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PayDayCreditMap_ValueProp = { "PayDayCreditMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PayDayCreditMap_Key_KeyProp = { "PayDayCreditMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PayDayCreditMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreManager" },
		{ "ModuleRelativePath", "Public/SBZStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PayDayCreditMap = { "PayDayCreditMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStoreManager, PayDayCreditMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PayDayCreditMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PayDayCreditMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStoreManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStoreManager_Statics::NewProp_WeaponPartCostMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStoreManager_Statics::NewProp_WeaponPartCostMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStoreManager_Statics::NewProp_WeaponPartCostMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PreplanningAssetCostMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PreplanningAssetCostMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PreplanningAssetCostMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AccelByteItemTitleToIdString_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AccelByteItemTitleToIdString_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AccelByteItemTitleToIdString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStoreManager_Statics::NewProp_AllVendorsItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PayDayCreditMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PayDayCreditMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStoreManager_Statics::NewProp_PayDayCreditMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStoreManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStoreManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStoreManager_Statics::ClassParams = {
		&USBZStoreManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStoreManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStoreManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStoreManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStoreManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStoreManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStoreManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStoreManager, 3677300544);
	template<> STARBREEZE_API UClass* StaticClass<USBZStoreManager>()
	{
		return USBZStoreManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStoreManager(Z_Construct_UClass_USBZStoreManager, &USBZStoreManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStoreManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStoreManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
