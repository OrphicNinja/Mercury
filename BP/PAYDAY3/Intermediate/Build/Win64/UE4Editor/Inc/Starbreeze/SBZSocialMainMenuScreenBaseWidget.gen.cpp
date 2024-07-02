// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSocialMainMenuScreenBaseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSocialMainMenuScreenBaseWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZSocialMainMenuScreenBaseWidget::execOnToggleSocialScreenPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnToggleSocialScreenPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSocialMainMenuScreenBaseWidget::execSetToggleSocialScreenInput)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InNewToggleActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToggleSocialScreenInput(Z_Param_InNewToggleActionName);
		P_NATIVE_END;
	}
	static FName NAME_USBZSocialMainMenuScreenBaseWidget_OnCloseSocialScreen = FName(TEXT("OnCloseSocialScreen"));
	void USBZSocialMainMenuScreenBaseWidget::OnCloseSocialScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSocialMainMenuScreenBaseWidget_OnCloseSocialScreen),NULL);
	}
	static FName NAME_USBZSocialMainMenuScreenBaseWidget_OnOpenSocialScreen = FName(TEXT("OnOpenSocialScreen"));
	void USBZSocialMainMenuScreenBaseWidget::OnOpenSocialScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSocialMainMenuScreenBaseWidget_OnOpenSocialScreen),NULL);
	}
	static FName NAME_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged = FName(TEXT("OnToggleSocialScreenInputChanged"));
	void USBZSocialMainMenuScreenBaseWidget::OnToggleSocialScreenInputChanged(FName NewToggleSocialSceenAction)
	{
		SBZSocialMainMenuScreenBaseWidget_eventOnToggleSocialScreenInputChanged_Parms Parms;
		Parms.NewToggleSocialSceenAction=NewToggleSocialSceenAction;
		ProcessEvent(FindFunctionChecked(NAME_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged),&Parms);
	}
	void USBZSocialMainMenuScreenBaseWidget::StaticRegisterNativesUSBZSocialMainMenuScreenBaseWidget()
	{
		UClass* Class = USBZSocialMainMenuScreenBaseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnToggleSocialScreenPressed", &USBZSocialMainMenuScreenBaseWidget::execOnToggleSocialScreenPressed },
			{ "SetToggleSocialScreenInput", &USBZSocialMainMenuScreenBaseWidget::execSetToggleSocialScreenInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnCloseSocialScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnCloseSocialScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialMainMenuScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnCloseSocialScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget, nullptr, "OnCloseSocialScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnCloseSocialScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnCloseSocialScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnCloseSocialScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnCloseSocialScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnOpenSocialScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnOpenSocialScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialMainMenuScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnOpenSocialScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget, nullptr, "OnOpenSocialScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnOpenSocialScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnOpenSocialScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnOpenSocialScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnOpenSocialScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewToggleSocialSceenAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged_Statics::NewProp_NewToggleSocialSceenAction = { "NewToggleSocialSceenAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialMainMenuScreenBaseWidget_eventOnToggleSocialScreenInputChanged_Parms, NewToggleSocialSceenAction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged_Statics::NewProp_NewToggleSocialSceenAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialMainMenuScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget, nullptr, "OnToggleSocialScreenInputChanged", nullptr, nullptr, sizeof(SBZSocialMainMenuScreenBaseWidget_eventOnToggleSocialScreenInputChanged_Parms), Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialMainMenuScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget, nullptr, "OnToggleSocialScreenPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_SetToggleSocialScreenInput_Statics
	{
		struct SBZSocialMainMenuScreenBaseWidget_eventSetToggleSocialScreenInput_Parms
		{
			FName InNewToggleActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InNewToggleActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_SetToggleSocialScreenInput_Statics::NewProp_InNewToggleActionName = { "InNewToggleActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSocialMainMenuScreenBaseWidget_eventSetToggleSocialScreenInput_Parms, InNewToggleActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_SetToggleSocialScreenInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_SetToggleSocialScreenInput_Statics::NewProp_InNewToggleActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_SetToggleSocialScreenInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSocialMainMenuScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_SetToggleSocialScreenInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget, nullptr, "SetToggleSocialScreenInput", nullptr, nullptr, sizeof(SBZSocialMainMenuScreenBaseWidget_eventSetToggleSocialScreenInput_Parms), Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_SetToggleSocialScreenInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_SetToggleSocialScreenInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_SetToggleSocialScreenInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_SetToggleSocialScreenInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_SetToggleSocialScreenInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_SetToggleSocialScreenInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_NoRegister()
	{
		return USBZSocialMainMenuScreenBaseWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSocialScreenVisible_MetaData[];
#endif
		static void NewProp_bSocialScreenVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSocialScreenVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleSocialScreenInputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ToggleSocialScreenInputName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnCloseSocialScreen, "OnCloseSocialScreen" }, // 3129585333
		{ &Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnOpenSocialScreen, "OnOpenSocialScreen" }, // 2163189830
		{ &Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenInputChanged, "OnToggleSocialScreenInputChanged" }, // 4002627950
		{ &Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_OnToggleSocialScreenPressed, "OnToggleSocialScreenPressed" }, // 797188827
		{ &Z_Construct_UFunction_USBZSocialMainMenuScreenBaseWidget_SetToggleSocialScreenInput, "SetToggleSocialScreenInput" }, // 3188479760
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSocialMainMenuScreenBaseWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSocialMainMenuScreenBaseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::NewProp_bSocialScreenVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialMainMenuScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZSocialMainMenuScreenBaseWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::NewProp_bSocialScreenVisible_SetBit(void* Obj)
	{
		((USBZSocialMainMenuScreenBaseWidget*)Obj)->bSocialScreenVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::NewProp_bSocialScreenVisible = { "bSocialScreenVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSocialMainMenuScreenBaseWidget), &Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::NewProp_bSocialScreenVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::NewProp_bSocialScreenVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::NewProp_bSocialScreenVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::NewProp_ToggleSocialScreenInputName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSocialMainMenuScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZSocialMainMenuScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::NewProp_ToggleSocialScreenInputName = { "ToggleSocialScreenInputName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSocialMainMenuScreenBaseWidget, ToggleSocialScreenInputName), METADATA_PARAMS(Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::NewProp_ToggleSocialScreenInputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::NewProp_ToggleSocialScreenInputName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::NewProp_bSocialScreenVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::NewProp_ToggleSocialScreenInputName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSocialMainMenuScreenBaseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::ClassParams = {
		&USBZSocialMainMenuScreenBaseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSocialMainMenuScreenBaseWidget, 344191503);
	template<> STARBREEZE_API UClass* StaticClass<USBZSocialMainMenuScreenBaseWidget>()
	{
		return USBZSocialMainMenuScreenBaseWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSocialMainMenuScreenBaseWidget(Z_Construct_UClass_USBZSocialMainMenuScreenBaseWidget, &USBZSocialMainMenuScreenBaseWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSocialMainMenuScreenBaseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSocialMainMenuScreenBaseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
