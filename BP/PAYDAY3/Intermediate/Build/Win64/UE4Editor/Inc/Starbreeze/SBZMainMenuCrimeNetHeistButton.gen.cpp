// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuCrimeNetHeistButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuCrimeNetHeistButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HeistDataAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnMenuButtonCustomNavigation__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuCrimeNetHeistButton::execGetHeistData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPD3HeistDataAsset**)Z_Param__Result=P_THIS->GetHeistData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNetHeistButton::execGetHeistLevelPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSoftObjectPath*)Z_Param__Result=P_THIS->GetHeistLevelPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNetHeistButton::execInitializeHeistDataFromSoftObjectPath)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_InHeistSoftObjectPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeHeistDataFromSoftObjectPath(Z_Param_Out_InHeistSoftObjectPath);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuCrimeNetHeistButton_OnFocusChanged = FName(TEXT("OnFocusChanged"));
	void USBZMainMenuCrimeNetHeistButton::OnFocusChanged(bool bIsFocused)
	{
		SBZMainMenuCrimeNetHeistButton_eventOnFocusChanged_Parms Parms;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCrimeNetHeistButton_OnFocusChanged),&Parms);
	}
	static FName NAME_USBZMainMenuCrimeNetHeistButton_OnHeistDataInitialized = FName(TEXT("OnHeistDataInitialized"));
	void USBZMainMenuCrimeNetHeistButton::OnHeistDataInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCrimeNetHeistButton_OnHeistDataInitialized),NULL);
	}
	void USBZMainMenuCrimeNetHeistButton::StaticRegisterNativesUSBZMainMenuCrimeNetHeistButton()
	{
		UClass* Class = USBZMainMenuCrimeNetHeistButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeistData", &USBZMainMenuCrimeNetHeistButton::execGetHeistData },
			{ "GetHeistLevelPath", &USBZMainMenuCrimeNetHeistButton::execGetHeistLevelPath },
			{ "InitializeHeistDataFromSoftObjectPath", &USBZMainMenuCrimeNetHeistButton::execInitializeHeistDataFromSoftObjectPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistData_Statics
	{
		struct SBZMainMenuCrimeNetHeistButton_eventGetHeistData_Parms
		{
			UPD3HeistDataAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNetHeistButton_eventGetHeistData_Parms, ReturnValue), Z_Construct_UClass_UPD3HeistDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton, nullptr, "GetHeistData", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetHeistButton_eventGetHeistData_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistLevelPath_Statics
	{
		struct SBZMainMenuCrimeNetHeistButton_eventGetHeistLevelPath_Parms
		{
			FSoftObjectPath ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistLevelPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNetHeistButton_eventGetHeistLevelPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistLevelPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistLevelPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistLevelPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistLevelPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton, nullptr, "GetHeistLevelPath", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetHeistButton_eventGetHeistLevelPath_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistLevelPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistLevelPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistLevelPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistLevelPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistLevelPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistLevelPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics
	{
		struct SBZMainMenuCrimeNetHeistButton_eventInitializeHeistDataFromSoftObjectPath_Parms
		{
			FSoftObjectPath InHeistSoftObjectPath;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InHeistSoftObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHeistSoftObjectPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics::NewProp_InHeistSoftObjectPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics::NewProp_InHeistSoftObjectPath = { "InHeistSoftObjectPath", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNetHeistButton_eventInitializeHeistDataFromSoftObjectPath_Parms, InHeistSoftObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics::NewProp_InHeistSoftObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics::NewProp_InHeistSoftObjectPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics::NewProp_InHeistSoftObjectPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton, nullptr, "InitializeHeistDataFromSoftObjectPath", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetHeistButton_eventInitializeHeistDataFromSoftObjectPath_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged_Statics
	{
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuCrimeNetHeistButton_eventOnFocusChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCrimeNetHeistButton_eventOnFocusChanged_Parms), &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton, nullptr, "OnFocusChanged", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetHeistButton_eventOnFocusChanged_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnHeistDataInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnHeistDataInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnHeistDataInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton, nullptr, "OnHeistDataInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnHeistDataInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnHeistDataInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnHeistDataInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnHeistDataInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister()
	{
		return USBZMainMenuCrimeNetHeistButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMenuButtonCustomNavigation_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMenuButtonCustomNavigation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistSoftObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeistSoftObjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistCollectionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeistCollectionIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeistIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistData, "GetHeistData" }, // 1651265841
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_GetHeistLevelPath, "GetHeistLevelPath" }, // 2086558943
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_InitializeHeistDataFromSoftObjectPath, "InitializeHeistDataFromSoftObjectPath" }, // 3586496780
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnFocusChanged, "OnFocusChanged" }, // 1876675896
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistButton_OnHeistDataInitialized, "OnHeistDataInitialized" }, // 1815361167
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuCrimeNetHeistButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_OnMenuButtonCustomNavigation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetHeistButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_OnMenuButtonCustomNavigation = { "OnMenuButtonCustomNavigation", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetHeistButton, OnMenuButtonCustomNavigation), Z_Construct_UDelegateFunction_Starbreeze_OnMenuButtonCustomNavigation__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_OnMenuButtonCustomNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_OnMenuButtonCustomNavigation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistSoftObjectPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetHeistButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistSoftObjectPath = { "HeistSoftObjectPath", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetHeistButton, HeistSoftObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistSoftObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistSoftObjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetHeistButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistData = { "HeistData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetHeistButton, HeistData), Z_Construct_UClass_UPD3HeistDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistCollectionIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetHeistButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistCollectionIndex = { "HeistCollectionIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetHeistButton, HeistCollectionIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistCollectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistCollectionIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetHeistButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistIndex = { "HeistIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetHeistButton, HeistIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_OnMenuButtonCustomNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistSoftObjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistCollectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::NewProp_HeistIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuCrimeNetHeistButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::ClassParams = {
		&USBZMainMenuCrimeNetHeistButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuCrimeNetHeistButton, 688570613);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuCrimeNetHeistButton>()
	{
		return USBZMainMenuCrimeNetHeistButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuCrimeNetHeistButton(Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton, &USBZMainMenuCrimeNetHeistButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuCrimeNetHeistButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuCrimeNetHeistButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
