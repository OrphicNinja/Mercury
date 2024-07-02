// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSecurityCompanyVisualsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSecurityCompanyVisualsWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSecurityCompanyVisualsWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3SecurityCompanyDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany();
// End Cross Module References
	DEFINE_FUNCTION(USBZSecurityCompanyVisualsWidget::execGetSecurityCompany)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPD3SecurityCompanyDataAsset**)Z_Param__Result=P_THIS->GetSecurityCompany();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanyVisualsWidget::execGetSecurityCompanyEnum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZSecurityCompany*)Z_Param__Result=P_THIS->GetSecurityCompanyEnum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanyVisualsWidget::execInitializeSecurityCompany)
	{
		P_GET_ENUM(ESBZSecurityCompany,Z_Param_InSecurityCompany);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSecurityCompany(ESBZSecurityCompany(Z_Param_InSecurityCompany));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanyVisualsWidget::execNativeOnAssetLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnAssetLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanyVisualsWidget::execSetEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmpty();
		P_NATIVE_END;
	}
	static FName NAME_USBZSecurityCompanyVisualsWidget_OnEmptySet = FName(TEXT("OnEmptySet"));
	void USBZSecurityCompanyVisualsWidget::OnEmptySet()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSecurityCompanyVisualsWidget_OnEmptySet),NULL);
	}
	static FName NAME_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetLoaded = FName(TEXT("OnSecurityCompanyAssetLoaded"));
	void USBZSecurityCompanyVisualsWidget::OnSecurityCompanyAssetLoaded()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetLoaded),NULL);
	}
	static FName NAME_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetStartedLoad = FName(TEXT("OnSecurityCompanyAssetStartedLoad"));
	void USBZSecurityCompanyVisualsWidget::OnSecurityCompanyAssetStartedLoad()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetStartedLoad),NULL);
	}
	void USBZSecurityCompanyVisualsWidget::StaticRegisterNativesUSBZSecurityCompanyVisualsWidget()
	{
		UClass* Class = USBZSecurityCompanyVisualsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSecurityCompany", &USBZSecurityCompanyVisualsWidget::execGetSecurityCompany },
			{ "GetSecurityCompanyEnum", &USBZSecurityCompanyVisualsWidget::execGetSecurityCompanyEnum },
			{ "InitializeSecurityCompany", &USBZSecurityCompanyVisualsWidget::execInitializeSecurityCompany },
			{ "NativeOnAssetLoaded", &USBZSecurityCompanyVisualsWidget::execNativeOnAssetLoaded },
			{ "SetEmpty", &USBZSecurityCompanyVisualsWidget::execSetEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompany_Statics
	{
		struct SBZSecurityCompanyVisualsWidget_eventGetSecurityCompany_Parms
		{
			UPD3SecurityCompanyDataAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompany_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanyVisualsWidget_eventGetSecurityCompany_Parms, ReturnValue), Z_Construct_UClass_UPD3SecurityCompanyDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompany_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompany_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompany_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanyVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompany_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanyVisualsWidget, nullptr, "GetSecurityCompany", nullptr, nullptr, sizeof(SBZSecurityCompanyVisualsWidget_eventGetSecurityCompany_Parms), Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompany_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompany_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompany_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompany_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompany()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompany_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum_Statics
	{
		struct SBZSecurityCompanyVisualsWidget_eventGetSecurityCompanyEnum_Parms
		{
			ESBZSecurityCompany ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanyVisualsWidget_eventGetSecurityCompanyEnum_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanyVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanyVisualsWidget, nullptr, "GetSecurityCompanyEnum", nullptr, nullptr, sizeof(SBZSecurityCompanyVisualsWidget_eventGetSecurityCompanyEnum_Parms), Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics
	{
		struct SBZSecurityCompanyVisualsWidget_eventInitializeSecurityCompany_Parms
		{
			ESBZSecurityCompany InSecurityCompany;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSecurityCompany_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSecurityCompany_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSecurityCompany;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::NewProp_InSecurityCompany_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::NewProp_InSecurityCompany_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::NewProp_InSecurityCompany = { "InSecurityCompany", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanyVisualsWidget_eventInitializeSecurityCompany_Parms, InSecurityCompany), Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::NewProp_InSecurityCompany_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::NewProp_InSecurityCompany_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::NewProp_InSecurityCompany_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::NewProp_InSecurityCompany,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanyVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanyVisualsWidget, nullptr, "InitializeSecurityCompany", nullptr, nullptr, sizeof(SBZSecurityCompanyVisualsWidget_eventInitializeSecurityCompany_Parms), Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_NativeOnAssetLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_NativeOnAssetLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanyVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_NativeOnAssetLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanyVisualsWidget, nullptr, "NativeOnAssetLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_NativeOnAssetLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_NativeOnAssetLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_NativeOnAssetLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_NativeOnAssetLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnEmptySet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnEmptySet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanyVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnEmptySet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanyVisualsWidget, nullptr, "OnEmptySet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnEmptySet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnEmptySet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnEmptySet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnEmptySet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanyVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanyVisualsWidget, nullptr, "OnSecurityCompanyAssetLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetStartedLoad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetStartedLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanyVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetStartedLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanyVisualsWidget, nullptr, "OnSecurityCompanyAssetStartedLoad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetStartedLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetStartedLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetStartedLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetStartedLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_SetEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_SetEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanyVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_SetEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanyVisualsWidget, nullptr, "SetEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_SetEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_SetEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_SetEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_SetEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_NoRegister()
	{
		return USBZSecurityCompanyVisualsWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecurityCompanyEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityCompanyEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecurityCompanyEnum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityCompanyAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecurityCompanyAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompany, "GetSecurityCompany" }, // 2383565168
		{ &Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_GetSecurityCompanyEnum, "GetSecurityCompanyEnum" }, // 1152059484
		{ &Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_InitializeSecurityCompany, "InitializeSecurityCompany" }, // 3402131664
		{ &Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_NativeOnAssetLoaded, "NativeOnAssetLoaded" }, // 4085840851
		{ &Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnEmptySet, "OnEmptySet" }, // 3604276246
		{ &Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetLoaded, "OnSecurityCompanyAssetLoaded" }, // 1444302590
		{ &Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_OnSecurityCompanyAssetStartedLoad, "OnSecurityCompanyAssetStartedLoad" }, // 3163612933
		{ &Z_Construct_UFunction_USBZSecurityCompanyVisualsWidget_SetEmpty, "SetEmpty" }, // 82461663
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSecurityCompanyVisualsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanyVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::NewProp_SecurityCompanyEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::NewProp_SecurityCompanyEnum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanyVisualsWidget" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanyVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::NewProp_SecurityCompanyEnum = { "SecurityCompanyEnum", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSecurityCompanyVisualsWidget, SecurityCompanyEnum), Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::NewProp_SecurityCompanyEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::NewProp_SecurityCompanyEnum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::NewProp_SecurityCompanyAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanyVisualsWidget" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanyVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::NewProp_SecurityCompanyAsset = { "SecurityCompanyAsset", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSecurityCompanyVisualsWidget, SecurityCompanyAsset), Z_Construct_UClass_UPD3SecurityCompanyDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::NewProp_SecurityCompanyAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::NewProp_SecurityCompanyAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::NewProp_SecurityCompanyEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::NewProp_SecurityCompanyEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::NewProp_SecurityCompanyAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSecurityCompanyVisualsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::ClassParams = {
		&USBZSecurityCompanyVisualsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSecurityCompanyVisualsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSecurityCompanyVisualsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSecurityCompanyVisualsWidget, 1326647268);
	template<> STARBREEZE_API UClass* StaticClass<USBZSecurityCompanyVisualsWidget>()
	{
		return USBZSecurityCompanyVisualsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSecurityCompanyVisualsWidget(Z_Construct_UClass_USBZSecurityCompanyVisualsWidget, &USBZSecurityCompanyVisualsWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSecurityCompanyVisualsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSecurityCompanyVisualsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
