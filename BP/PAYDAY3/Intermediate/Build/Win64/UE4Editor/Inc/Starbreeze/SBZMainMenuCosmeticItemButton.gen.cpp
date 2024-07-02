// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuCosmeticItemButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuCosmeticItemButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticItemButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuCosmeticItemButton::execGetCosmeticItemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const USBZCosmeticsDataAsset**)Z_Param__Result=P_THIS->GetCosmeticItemData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmeticItemButton::execInitializeCosmeticItem)
	{
		P_GET_OBJECT(USBZCosmeticsDataAsset,Z_Param_InCosmeticItemData);
		P_GET_UBOOL(Z_Param_bInIsDefault);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCosmeticItem(Z_Param_InCosmeticItemData,Z_Param_bInIsDefault);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmeticItemButton::execIsDefaultItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDefaultItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmeticItemButton::execSetItemCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InItemCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemCount(Z_Param_InItemCount);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuCosmeticItemButton_OnCosmeticItemDataInitialized = FName(TEXT("OnCosmeticItemDataInitialized"));
	void USBZMainMenuCosmeticItemButton::OnCosmeticItemDataInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCosmeticItemButton_OnCosmeticItemDataInitialized),NULL);
	}
	static FName NAME_USBZMainMenuCosmeticItemButton_OnItemCountChanged = FName(TEXT("OnItemCountChanged"));
	void USBZMainMenuCosmeticItemButton::OnItemCountChanged(int32 InItemCount)
	{
		SBZMainMenuCosmeticItemButton_eventOnItemCountChanged_Parms Parms;
		Parms.InItemCount=InItemCount;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCosmeticItemButton_OnItemCountChanged),&Parms);
	}
	void USBZMainMenuCosmeticItemButton::StaticRegisterNativesUSBZMainMenuCosmeticItemButton()
	{
		UClass* Class = USBZMainMenuCosmeticItemButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCosmeticItemData", &USBZMainMenuCosmeticItemButton::execGetCosmeticItemData },
			{ "InitializeCosmeticItem", &USBZMainMenuCosmeticItemButton::execInitializeCosmeticItem },
			{ "IsDefaultItem", &USBZMainMenuCosmeticItemButton::execIsDefaultItem },
			{ "SetItemCount", &USBZMainMenuCosmeticItemButton::execSetItemCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_GetCosmeticItemData_Statics
	{
		struct SBZMainMenuCosmeticItemButton_eventGetCosmeticItemData_Parms
		{
			const USBZCosmeticsDataAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_GetCosmeticItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticItemButton_eventGetCosmeticItemData_Parms, ReturnValue), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_GetCosmeticItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_GetCosmeticItemData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_GetCosmeticItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_GetCosmeticItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticItemButton, nullptr, "GetCosmeticItemData", nullptr, nullptr, sizeof(SBZMainMenuCosmeticItemButton_eventGetCosmeticItemData_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_GetCosmeticItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_GetCosmeticItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_GetCosmeticItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_GetCosmeticItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_GetCosmeticItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_GetCosmeticItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics
	{
		struct SBZMainMenuCosmeticItemButton_eventInitializeCosmeticItem_Parms
		{
			const USBZCosmeticsDataAsset* InCosmeticItemData;
			bool bInIsDefault;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCosmeticItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCosmeticItemData;
		static void NewProp_bInIsDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsDefault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::NewProp_InCosmeticItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::NewProp_InCosmeticItemData = { "InCosmeticItemData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticItemButton_eventInitializeCosmeticItem_Parms, InCosmeticItemData), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::NewProp_InCosmeticItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::NewProp_InCosmeticItemData_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::NewProp_bInIsDefault_SetBit(void* Obj)
	{
		((SBZMainMenuCosmeticItemButton_eventInitializeCosmeticItem_Parms*)Obj)->bInIsDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::NewProp_bInIsDefault = { "bInIsDefault", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCosmeticItemButton_eventInitializeCosmeticItem_Parms), &Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::NewProp_bInIsDefault_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::NewProp_InCosmeticItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::NewProp_bInIsDefault,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticItemButton, nullptr, "InitializeCosmeticItem", nullptr, nullptr, sizeof(SBZMainMenuCosmeticItemButton_eventInitializeCosmeticItem_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem_Statics
	{
		struct SBZMainMenuCosmeticItemButton_eventIsDefaultItem_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuCosmeticItemButton_eventIsDefaultItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCosmeticItemButton_eventIsDefaultItem_Parms), &Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticItemButton, nullptr, "IsDefaultItem", nullptr, nullptr, sizeof(SBZMainMenuCosmeticItemButton_eventIsDefaultItem_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnCosmeticItemDataInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnCosmeticItemDataInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnCosmeticItemDataInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticItemButton, nullptr, "OnCosmeticItemDataInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnCosmeticItemDataInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnCosmeticItemDataInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnCosmeticItemDataInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnCosmeticItemDataInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnItemCountChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InItemCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnItemCountChanged_Statics::NewProp_InItemCount = { "InItemCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticItemButton_eventOnItemCountChanged_Parms, InItemCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnItemCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnItemCountChanged_Statics::NewProp_InItemCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnItemCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnItemCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticItemButton, nullptr, "OnItemCountChanged", nullptr, nullptr, sizeof(SBZMainMenuCosmeticItemButton_eventOnItemCountChanged_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnItemCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnItemCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnItemCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnItemCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnItemCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnItemCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_SetItemCount_Statics
	{
		struct SBZMainMenuCosmeticItemButton_eventSetItemCount_Parms
		{
			int32 InItemCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InItemCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_SetItemCount_Statics::NewProp_InItemCount = { "InItemCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticItemButton_eventSetItemCount_Parms, InItemCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_SetItemCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_SetItemCount_Statics::NewProp_InItemCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_SetItemCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_SetItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticItemButton, nullptr, "SetItemCount", nullptr, nullptr, sizeof(SBZMainMenuCosmeticItemButton_eventSetItemCount_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_SetItemCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_SetItemCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_SetItemCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_SetItemCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_SetItemCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_SetItemCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister()
	{
		return USBZMainMenuCosmeticItemButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDefault_MetaData[];
#endif
		static void NewProp_bIsDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticItemData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_GetCosmeticItemData, "GetCosmeticItemData" }, // 2230665886
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_InitializeCosmeticItem, "InitializeCosmeticItem" }, // 1514210044
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_IsDefaultItem, "IsDefaultItem" }, // 213907867
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnCosmeticItemDataInitialized, "OnCosmeticItemDataInitialized" }, // 529707962
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_OnItemCountChanged, "OnItemCountChanged" }, // 851821464
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticItemButton_SetItemCount, "SetItemCount" }, // 2022081835
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuCosmeticItemButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticItemButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::NewProp_bIsDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmeticItemButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticItemButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::NewProp_bIsDefault_SetBit(void* Obj)
	{
		((USBZMainMenuCosmeticItemButton*)Obj)->bIsDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::NewProp_bIsDefault = { "bIsDefault", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMainMenuCosmeticItemButton), &Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::NewProp_bIsDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::NewProp_bIsDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::NewProp_bIsDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::NewProp_CosmeticItemData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmeticItemButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::NewProp_CosmeticItemData = { "CosmeticItemData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmeticItemButton, CosmeticItemData), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::NewProp_CosmeticItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::NewProp_CosmeticItemData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::NewProp_bIsDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::NewProp_CosmeticItemData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuCosmeticItemButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::ClassParams = {
		&USBZMainMenuCosmeticItemButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuCosmeticItemButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuCosmeticItemButton, 1091537792);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuCosmeticItemButton>()
	{
		return USBZMainMenuCosmeticItemButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuCosmeticItemButton(Z_Construct_UClass_USBZMainMenuCosmeticItemButton, &USBZMainMenuCosmeticItemButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuCosmeticItemButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuCosmeticItemButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
