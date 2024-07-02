// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuPrePlanningItemSelectionButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuPrePlanningItemSelectionButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuPrePlanningItemSelectionButton::execGetPreplanningItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZPreplanningAssetData**)Z_Param__Result=P_THIS->GetPreplanningItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlanningItemSelectionButton::execInitializePrePlanningItem)
	{
		P_GET_OBJECT(USBZPreplanningAssetData,Z_Param_InPreplanningItem);
		P_GET_PROPERTY(FIntProperty,Z_Param_InStackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializePrePlanningItem(Z_Param_InPreplanningItem,Z_Param_InStackCount);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized = FName(TEXT("OnPrePlanningItemInitialized"));
	void USBZMainMenuPrePlanningItemSelectionButton::OnPrePlanningItemInitialized(const USBZPreplanningAssetData* InPreplanningData)
	{
		SBZMainMenuPrePlanningItemSelectionButton_eventOnPrePlanningItemInitialized_Parms Parms;
		Parms.InPreplanningData=InPreplanningData;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized),&Parms);
	}
	static FName NAME_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton = FName(TEXT("SetRemoveAssetButton"));
	void USBZMainMenuPrePlanningItemSelectionButton::SetRemoveAssetButton(bool bIsRemoveAssetButton)
	{
		SBZMainMenuPrePlanningItemSelectionButton_eventSetRemoveAssetButton_Parms Parms;
		Parms.bIsRemoveAssetButton=bIsRemoveAssetButton ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton),&Parms);
	}
	void USBZMainMenuPrePlanningItemSelectionButton::StaticRegisterNativesUSBZMainMenuPrePlanningItemSelectionButton()
	{
		UClass* Class = USBZMainMenuPrePlanningItemSelectionButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPreplanningItem", &USBZMainMenuPrePlanningItemSelectionButton::execGetPreplanningItem },
			{ "InitializePrePlanningItem", &USBZMainMenuPrePlanningItemSelectionButton::execInitializePrePlanningItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_GetPreplanningItem_Statics
	{
		struct SBZMainMenuPrePlanningItemSelectionButton_eventGetPreplanningItem_Parms
		{
			USBZPreplanningAssetData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_GetPreplanningItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlanningItemSelectionButton_eventGetPreplanningItem_Parms, ReturnValue), Z_Construct_UClass_USBZPreplanningAssetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_GetPreplanningItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_GetPreplanningItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_GetPreplanningItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_GetPreplanningItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton, nullptr, "GetPreplanningItem", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningItemSelectionButton_eventGetPreplanningItem_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_GetPreplanningItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_GetPreplanningItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_GetPreplanningItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_GetPreplanningItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_GetPreplanningItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_GetPreplanningItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics
	{
		struct SBZMainMenuPrePlanningItemSelectionButton_eventInitializePrePlanningItem_Parms
		{
			const USBZPreplanningAssetData* InPreplanningItem;
			int32 InStackCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPreplanningItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPreplanningItem;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InStackCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::NewProp_InPreplanningItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::NewProp_InPreplanningItem = { "InPreplanningItem", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlanningItemSelectionButton_eventInitializePrePlanningItem_Parms, InPreplanningItem), Z_Construct_UClass_USBZPreplanningAssetData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::NewProp_InPreplanningItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::NewProp_InPreplanningItem_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::NewProp_InStackCount = { "InStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlanningItemSelectionButton_eventInitializePrePlanningItem_Parms, InStackCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::NewProp_InPreplanningItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::NewProp_InStackCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton, nullptr, "InitializePrePlanningItem", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningItemSelectionButton_eventInitializePrePlanningItem_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPreplanningData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPreplanningData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics::NewProp_InPreplanningData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics::NewProp_InPreplanningData = { "InPreplanningData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlanningItemSelectionButton_eventOnPrePlanningItemInitialized_Parms, InPreplanningData), Z_Construct_UClass_USBZPreplanningAssetData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics::NewProp_InPreplanningData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics::NewProp_InPreplanningData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics::NewProp_InPreplanningData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton, nullptr, "OnPrePlanningItemInitialized", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningItemSelectionButton_eventOnPrePlanningItemInitialized_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton_Statics
	{
		static void NewProp_bIsRemoveAssetButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRemoveAssetButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton_Statics::NewProp_bIsRemoveAssetButton_SetBit(void* Obj)
	{
		((SBZMainMenuPrePlanningItemSelectionButton_eventSetRemoveAssetButton_Parms*)Obj)->bIsRemoveAssetButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton_Statics::NewProp_bIsRemoveAssetButton = { "bIsRemoveAssetButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuPrePlanningItemSelectionButton_eventSetRemoveAssetButton_Parms), &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton_Statics::NewProp_bIsRemoveAssetButton_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton_Statics::NewProp_bIsRemoveAssetButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton, nullptr, "SetRemoveAssetButton", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningItemSelectionButton_eventSetRemoveAssetButton_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_NoRegister()
	{
		return USBZMainMenuPrePlanningItemSelectionButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreplanningItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreplanningItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_GetPreplanningItem, "GetPreplanningItem" }, // 2605357600
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_InitializePrePlanningItem, "InitializePrePlanningItem" }, // 526971092
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_OnPrePlanningItemInitialized, "OnPrePlanningItemInitialized" }, // 1810982845
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionButton_SetRemoveAssetButton, "SetRemoveAssetButton" }, // 594539585
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuPrePlanningItemSelectionButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::NewProp_PreplanningItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlanningItemSelectionButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::NewProp_PreplanningItem = { "PreplanningItem", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPrePlanningItemSelectionButton, PreplanningItem), Z_Construct_UClass_USBZPreplanningAssetData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::NewProp_PreplanningItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::NewProp_PreplanningItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::NewProp_StackCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlanningItemSelectionButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPrePlanningItemSelectionButton, StackCount), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::NewProp_StackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::NewProp_StackCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::NewProp_PreplanningItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::NewProp_StackCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuPrePlanningItemSelectionButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::ClassParams = {
		&USBZMainMenuPrePlanningItemSelectionButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuPrePlanningItemSelectionButton, 209982728);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuPrePlanningItemSelectionButton>()
	{
		return USBZMainMenuPrePlanningItemSelectionButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuPrePlanningItemSelectionButton(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton, &USBZMainMenuPrePlanningItemSelectionButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuPrePlanningItemSelectionButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuPrePlanningItemSelectionButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
