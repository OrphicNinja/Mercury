// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlackMarketVendorButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlackMarketVendorButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketVendorButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketVendorButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVendorData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZBlackMarketVendorButton::execGetVendorData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZVendorData**)Z_Param__Result=P_THIS->GetVendorData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketVendorButton::execInitializeVendorData)
	{
		P_GET_OBJECT(USBZVendorData,Z_Param_InVendorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeVendorData(Z_Param_InVendorData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketVendorButton::execSetActiveVendor)
	{
		P_GET_UBOOL(Z_Param_bInIsActiveVendor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveVendor(Z_Param_bInIsActiveVendor);
		P_NATIVE_END;
	}
	static FName NAME_USBZBlackMarketVendorButton_OnActiveVendorSet = FName(TEXT("OnActiveVendorSet"));
	void USBZBlackMarketVendorButton::OnActiveVendorSet(bool bInIsActiveVendor)
	{
		SBZBlackMarketVendorButton_eventOnActiveVendorSet_Parms Parms;
		Parms.bInIsActiveVendor=bInIsActiveVendor ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketVendorButton_OnActiveVendorSet),&Parms);
	}
	static FName NAME_USBZBlackMarketVendorButton_OnVendorDataInitialized = FName(TEXT("OnVendorDataInitialized"));
	void USBZBlackMarketVendorButton::OnVendorDataInitialized(const USBZVendorData* InVendorData)
	{
		SBZBlackMarketVendorButton_eventOnVendorDataInitialized_Parms Parms;
		Parms.InVendorData=InVendorData;
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketVendorButton_OnVendorDataInitialized),&Parms);
	}
	void USBZBlackMarketVendorButton::StaticRegisterNativesUSBZBlackMarketVendorButton()
	{
		UClass* Class = USBZBlackMarketVendorButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVendorData", &USBZBlackMarketVendorButton::execGetVendorData },
			{ "InitializeVendorData", &USBZBlackMarketVendorButton::execInitializeVendorData },
			{ "SetActiveVendor", &USBZBlackMarketVendorButton::execSetActiveVendor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorButton_GetVendorData_Statics
	{
		struct SBZBlackMarketVendorButton_eventGetVendorData_Parms
		{
			USBZVendorData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorButton_GetVendorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorButton_eventGetVendorData_Parms, ReturnValue), Z_Construct_UClass_USBZVendorData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorButton_GetVendorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorButton_GetVendorData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorButton_GetVendorData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorButton_GetVendorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorButton, nullptr, "GetVendorData", nullptr, nullptr, sizeof(SBZBlackMarketVendorButton_eventGetVendorData_Parms), Z_Construct_UFunction_USBZBlackMarketVendorButton_GetVendorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorButton_GetVendorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorButton_GetVendorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorButton_GetVendorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorButton_GetVendorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorButton_GetVendorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics
	{
		struct SBZBlackMarketVendorButton_eventInitializeVendorData_Parms
		{
			const USBZVendorData* InVendorData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVendorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InVendorData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics::NewProp_InVendorData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics::NewProp_InVendorData = { "InVendorData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorButton_eventInitializeVendorData_Parms, InVendorData), Z_Construct_UClass_USBZVendorData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics::NewProp_InVendorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics::NewProp_InVendorData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics::NewProp_InVendorData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorButton, nullptr, "InitializeVendorData", nullptr, nullptr, sizeof(SBZBlackMarketVendorButton_eventInitializeVendorData_Parms), Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet_Statics
	{
		static void NewProp_bInIsActiveVendor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsActiveVendor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet_Statics::NewProp_bInIsActiveVendor_SetBit(void* Obj)
	{
		((SBZBlackMarketVendorButton_eventOnActiveVendorSet_Parms*)Obj)->bInIsActiveVendor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet_Statics::NewProp_bInIsActiveVendor = { "bInIsActiveVendor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBlackMarketVendorButton_eventOnActiveVendorSet_Parms), &Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet_Statics::NewProp_bInIsActiveVendor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet_Statics::NewProp_bInIsActiveVendor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorButton, nullptr, "OnActiveVendorSet", nullptr, nullptr, sizeof(SBZBlackMarketVendorButton_eventOnActiveVendorSet_Parms), Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVendorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InVendorData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics::NewProp_InVendorData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics::NewProp_InVendorData = { "InVendorData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketVendorButton_eventOnVendorDataInitialized_Parms, InVendorData), Z_Construct_UClass_USBZVendorData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics::NewProp_InVendorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics::NewProp_InVendorData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics::NewProp_InVendorData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorButton, nullptr, "OnVendorDataInitialized", nullptr, nullptr, sizeof(SBZBlackMarketVendorButton_eventOnVendorDataInitialized_Parms), Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor_Statics
	{
		struct SBZBlackMarketVendorButton_eventSetActiveVendor_Parms
		{
			bool bInIsActiveVendor;
		};
		static void NewProp_bInIsActiveVendor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsActiveVendor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor_Statics::NewProp_bInIsActiveVendor_SetBit(void* Obj)
	{
		((SBZBlackMarketVendorButton_eventSetActiveVendor_Parms*)Obj)->bInIsActiveVendor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor_Statics::NewProp_bInIsActiveVendor = { "bInIsActiveVendor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBlackMarketVendorButton_eventSetActiveVendor_Parms), &Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor_Statics::NewProp_bInIsActiveVendor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor_Statics::NewProp_bInIsActiveVendor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketVendorButton, nullptr, "SetActiveVendor", nullptr, nullptr, sizeof(SBZBlackMarketVendorButton_eventSetActiveVendor_Parms), Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBlackMarketVendorButton_NoRegister()
	{
		return USBZBlackMarketVendorButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZBlackMarketVendorButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VendorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActiveVendor_MetaData[];
#endif
		static void NewProp_bIsActiveVendor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActiveVendor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBlackMarketVendorButton_GetVendorData, "GetVendorData" }, // 1965457782
		{ &Z_Construct_UFunction_USBZBlackMarketVendorButton_InitializeVendorData, "InitializeVendorData" }, // 621188186
		{ &Z_Construct_UFunction_USBZBlackMarketVendorButton_OnActiveVendorSet, "OnActiveVendorSet" }, // 3382747603
		{ &Z_Construct_UFunction_USBZBlackMarketVendorButton_OnVendorDataInitialized, "OnVendorDataInitialized" }, // 1128183996
		{ &Z_Construct_UFunction_USBZBlackMarketVendorButton_SetActiveVendor, "SetActiveVendor" }, // 3665896584
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBlackMarketVendorButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::NewProp_VendorData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorButton" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::NewProp_VendorData = { "VendorData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketVendorButton, VendorData), Z_Construct_UClass_USBZVendorData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::NewProp_VendorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::NewProp_VendorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::NewProp_bIsActiveVendor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketVendorButton" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketVendorButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::NewProp_bIsActiveVendor_SetBit(void* Obj)
	{
		((USBZBlackMarketVendorButton*)Obj)->bIsActiveVendor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::NewProp_bIsActiveVendor = { "bIsActiveVendor", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBlackMarketVendorButton), &Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::NewProp_bIsActiveVendor_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::NewProp_bIsActiveVendor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::NewProp_bIsActiveVendor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::NewProp_VendorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::NewProp_bIsActiveVendor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBlackMarketVendorButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::ClassParams = {
		&USBZBlackMarketVendorButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBlackMarketVendorButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBlackMarketVendorButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBlackMarketVendorButton, 452044934);
	template<> STARBREEZE_API UClass* StaticClass<USBZBlackMarketVendorButton>()
	{
		return USBZBlackMarketVendorButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBlackMarketVendorButton(Z_Construct_UClass_USBZBlackMarketVendorButton, &USBZBlackMarketVendorButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBlackMarketVendorButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBlackMarketVendorButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
