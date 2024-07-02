// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameErrorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameErrorWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameErrorWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameErrorWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInternetStatusWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZServiceStatus();
// End Cross Module References
	DEFINE_FUNCTION(USBZGameErrorWidget::execGetButton_ReturnToMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZMenuButton**)Z_Param__Result=P_THIS->GetButton_ReturnToMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameErrorWidget::execGetErrorHeader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetErrorHeader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameErrorWidget::execGetErrorText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetErrorText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameErrorWidget::execSetInternetConnected)
	{
		P_GET_ENUM(ESBZServiceStatus,Z_Param_ServiceStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInternetConnected(ESBZServiceStatus(Z_Param_ServiceStatus));
		P_NATIVE_END;
	}
	void USBZGameErrorWidget::StaticRegisterNativesUSBZGameErrorWidget()
	{
		UClass* Class = USBZGameErrorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetButton_ReturnToMainMenu", &USBZGameErrorWidget::execGetButton_ReturnToMainMenu },
			{ "GetErrorHeader", &USBZGameErrorWidget::execGetErrorHeader },
			{ "GetErrorText", &USBZGameErrorWidget::execGetErrorText },
			{ "SetInternetConnected", &USBZGameErrorWidget::execSetInternetConnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics
	{
		struct SBZGameErrorWidget_eventGetButton_ReturnToMainMenu_Parms
		{
			USBZMenuButton* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameErrorWidget_eventGetButton_ReturnToMainMenu_Parms, ReturnValue), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameErrorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameErrorWidget, nullptr, "GetButton_ReturnToMainMenu", nullptr, nullptr, sizeof(SBZGameErrorWidget_eventGetButton_ReturnToMainMenu_Parms), Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameErrorWidget_GetErrorHeader_Statics
	{
		struct SBZGameErrorWidget_eventGetErrorHeader_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZGameErrorWidget_GetErrorHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameErrorWidget_eventGetErrorHeader_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameErrorWidget_GetErrorHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameErrorWidget_GetErrorHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameErrorWidget_GetErrorHeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameErrorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameErrorWidget_GetErrorHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameErrorWidget, nullptr, "GetErrorHeader", nullptr, nullptr, sizeof(SBZGameErrorWidget_eventGetErrorHeader_Parms), Z_Construct_UFunction_USBZGameErrorWidget_GetErrorHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameErrorWidget_GetErrorHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameErrorWidget_GetErrorHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameErrorWidget_GetErrorHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameErrorWidget_GetErrorHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameErrorWidget_GetErrorHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameErrorWidget_GetErrorText_Statics
	{
		struct SBZGameErrorWidget_eventGetErrorText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZGameErrorWidget_GetErrorText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameErrorWidget_eventGetErrorText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameErrorWidget_GetErrorText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameErrorWidget_GetErrorText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameErrorWidget_GetErrorText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameErrorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameErrorWidget_GetErrorText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameErrorWidget, nullptr, "GetErrorText", nullptr, nullptr, sizeof(SBZGameErrorWidget_eventGetErrorText_Parms), Z_Construct_UFunction_USBZGameErrorWidget_GetErrorText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameErrorWidget_GetErrorText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameErrorWidget_GetErrorText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameErrorWidget_GetErrorText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameErrorWidget_GetErrorText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameErrorWidget_GetErrorText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected_Statics
	{
		struct SBZGameErrorWidget_eventSetInternetConnected_Parms
		{
			ESBZServiceStatus ServiceStatus;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServiceStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ServiceStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected_Statics::NewProp_ServiceStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected_Statics::NewProp_ServiceStatus = { "ServiceStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameErrorWidget_eventSetInternetConnected_Parms, ServiceStatus), Z_Construct_UEnum_Starbreeze_ESBZServiceStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected_Statics::NewProp_ServiceStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected_Statics::NewProp_ServiceStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameErrorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameErrorWidget, nullptr, "SetInternetConnected", nullptr, nullptr, sizeof(SBZGameErrorWidget_eventSetInternetConnected_Parms), Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGameErrorWidget_NoRegister()
	{
		return USBZGameErrorWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameErrorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_ReturnToMainMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_ReturnToMainMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameErrorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInternetStatusWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGameErrorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGameErrorWidget_GetButton_ReturnToMainMenu, "GetButton_ReturnToMainMenu" }, // 2553793648
		{ &Z_Construct_UFunction_USBZGameErrorWidget_GetErrorHeader, "GetErrorHeader" }, // 4198265042
		{ &Z_Construct_UFunction_USBZGameErrorWidget_GetErrorText, "GetErrorText" }, // 2814307396
		{ &Z_Construct_UFunction_USBZGameErrorWidget_SetInternetConnected, "SetInternetConnected" }, // 3609039470
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameErrorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameErrorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameErrorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameErrorWidget_Statics::NewProp_Button_ReturnToMainMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameErrorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGameErrorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameErrorWidget_Statics::NewProp_Button_ReturnToMainMenu = { "Button_ReturnToMainMenu", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameErrorWidget, Button_ReturnToMainMenu), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameErrorWidget_Statics::NewProp_Button_ReturnToMainMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameErrorWidget_Statics::NewProp_Button_ReturnToMainMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameErrorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameErrorWidget_Statics::NewProp_Button_ReturnToMainMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameErrorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameErrorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameErrorWidget_Statics::ClassParams = {
		&USBZGameErrorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZGameErrorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameErrorWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameErrorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameErrorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameErrorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameErrorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameErrorWidget, 1167875436);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameErrorWidget>()
	{
		return USBZGameErrorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameErrorWidget(Z_Construct_UClass_USBZGameErrorWidget, &USBZGameErrorWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameErrorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameErrorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
