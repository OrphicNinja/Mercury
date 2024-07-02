// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuCosmeticSlotButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuCosmeticSlotButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticSlotButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuCosmeticSlotButton::execInitializeButton)
	{
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_InCosmeticPartSlot);
		P_GET_OBJECT(USBZInventoryBaseData,Z_Param_InItemBaseData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeButton(Z_Param_InCosmeticPartSlot,Z_Param_InItemBaseData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmeticSlotButton::execSetCosmeticPartSlot)
	{
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_InCosmeticPartSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCosmeticPartSlot(Z_Param_InCosmeticPartSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmeticSlotButton::execSetItemInSlot)
	{
		P_GET_OBJECT(USBZInventoryBaseData,Z_Param_InItemBaseData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemInSlot(Z_Param_InItemBaseData);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged = FName(TEXT("CosmeticPartSlotChanged"));
	void USBZMainMenuCosmeticSlotButton::CosmeticPartSlotChanged(const USBZCosmeticsPartSlot* InCosmeticPartSlot)
	{
		SBZMainMenuCosmeticSlotButton_eventCosmeticPartSlotChanged_Parms Parms;
		Parms.InCosmeticPartSlot=InCosmeticPartSlot;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged),&Parms);
	}
	static FName NAME_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged = FName(TEXT("ItemInSlotChanged"));
	void USBZMainMenuCosmeticSlotButton::ItemInSlotChanged(const USBZInventoryBaseData* InItemBaseData)
	{
		SBZMainMenuCosmeticSlotButton_eventItemInSlotChanged_Parms Parms;
		Parms.InItemBaseData=InItemBaseData;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged),&Parms);
	}
	void USBZMainMenuCosmeticSlotButton::StaticRegisterNativesUSBZMainMenuCosmeticSlotButton()
	{
		UClass* Class = USBZMainMenuCosmeticSlotButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeButton", &USBZMainMenuCosmeticSlotButton::execInitializeButton },
			{ "SetCosmeticPartSlot", &USBZMainMenuCosmeticSlotButton::execSetCosmeticPartSlot },
			{ "SetItemInSlot", &USBZMainMenuCosmeticSlotButton::execSetItemInSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCosmeticPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCosmeticPartSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics::NewProp_InCosmeticPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics::NewProp_InCosmeticPartSlot = { "InCosmeticPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticSlotButton_eventCosmeticPartSlotChanged_Parms, InCosmeticPartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics::NewProp_InCosmeticPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics::NewProp_InCosmeticPartSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics::NewProp_InCosmeticPartSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticSlotButton, nullptr, "CosmeticPartSlotChanged", nullptr, nullptr, sizeof(SBZMainMenuCosmeticSlotButton_eventCosmeticPartSlotChanged_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics
	{
		struct SBZMainMenuCosmeticSlotButton_eventInitializeButton_Parms
		{
			const USBZCosmeticsPartSlot* InCosmeticPartSlot;
			const USBZInventoryBaseData* InItemBaseData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCosmeticPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCosmeticPartSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InItemBaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InItemBaseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::NewProp_InCosmeticPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::NewProp_InCosmeticPartSlot = { "InCosmeticPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticSlotButton_eventInitializeButton_Parms, InCosmeticPartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::NewProp_InCosmeticPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::NewProp_InCosmeticPartSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::NewProp_InItemBaseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::NewProp_InItemBaseData = { "InItemBaseData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticSlotButton_eventInitializeButton_Parms, InItemBaseData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::NewProp_InItemBaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::NewProp_InItemBaseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::NewProp_InCosmeticPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::NewProp_InItemBaseData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticSlotButton, nullptr, "InitializeButton", nullptr, nullptr, sizeof(SBZMainMenuCosmeticSlotButton_eventInitializeButton_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InItemBaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InItemBaseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics::NewProp_InItemBaseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics::NewProp_InItemBaseData = { "InItemBaseData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticSlotButton_eventItemInSlotChanged_Parms, InItemBaseData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics::NewProp_InItemBaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics::NewProp_InItemBaseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics::NewProp_InItemBaseData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticSlotButton, nullptr, "ItemInSlotChanged", nullptr, nullptr, sizeof(SBZMainMenuCosmeticSlotButton_eventItemInSlotChanged_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics
	{
		struct SBZMainMenuCosmeticSlotButton_eventSetCosmeticPartSlot_Parms
		{
			const USBZCosmeticsPartSlot* InCosmeticPartSlot;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCosmeticPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCosmeticPartSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics::NewProp_InCosmeticPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics::NewProp_InCosmeticPartSlot = { "InCosmeticPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticSlotButton_eventSetCosmeticPartSlot_Parms, InCosmeticPartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics::NewProp_InCosmeticPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics::NewProp_InCosmeticPartSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics::NewProp_InCosmeticPartSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticSlotButton, nullptr, "SetCosmeticPartSlot", nullptr, nullptr, sizeof(SBZMainMenuCosmeticSlotButton_eventSetCosmeticPartSlot_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics
	{
		struct SBZMainMenuCosmeticSlotButton_eventSetItemInSlot_Parms
		{
			const USBZInventoryBaseData* InItemBaseData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InItemBaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InItemBaseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics::NewProp_InItemBaseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics::NewProp_InItemBaseData = { "InItemBaseData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticSlotButton_eventSetItemInSlot_Parms, InItemBaseData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics::NewProp_InItemBaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics::NewProp_InItemBaseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics::NewProp_InItemBaseData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticSlotButton, nullptr, "SetItemInSlot", nullptr, nullptr, sizeof(SBZMainMenuCosmeticSlotButton_eventSetItemInSlot_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_NoRegister()
	{
		return USBZMainMenuCosmeticSlotButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemInSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_CosmeticPartSlotChanged, "CosmeticPartSlotChanged" }, // 2759944902
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_InitializeButton, "InitializeButton" }, // 1530575744
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_ItemInSlotChanged, "ItemInSlotChanged" }, // 661815919
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetCosmeticPartSlot, "SetCosmeticPartSlot" }, // 3801705999
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticSlotButton_SetItemInSlot, "SetItemInSlot" }, // 3384070100
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuCosmeticSlotButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticSlotButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::NewProp_PartSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmeticSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::NewProp_PartSlot = { "PartSlot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmeticSlotButton, PartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::NewProp_PartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::NewProp_PartSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::NewProp_ItemInSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmeticSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::NewProp_ItemInSlot = { "ItemInSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmeticSlotButton, ItemInSlot), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::NewProp_ItemInSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::NewProp_ItemInSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::NewProp_PartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::NewProp_ItemInSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuCosmeticSlotButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::ClassParams = {
		&USBZMainMenuCosmeticSlotButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuCosmeticSlotButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuCosmeticSlotButton, 3549815293);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuCosmeticSlotButton>()
	{
		return USBZMainMenuCosmeticSlotButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuCosmeticSlotButton(Z_Construct_UClass_USBZMainMenuCosmeticSlotButton, &USBZMainMenuCosmeticSlotButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuCosmeticSlotButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuCosmeticSlotButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
