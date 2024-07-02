// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingHelperPanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingHelperPanel() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingHelperPanel_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingHelperPanel();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingHelperPanel::execSetSettingCategoryName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InSettingCategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettingCategoryName(Z_Param_Out_InSettingCategoryName);
		P_NATIVE_END;
	}
	static FName NAME_USBZSettingHelperPanel_RefreshPanelState = FName(TEXT("RefreshPanelState"));
	void USBZSettingHelperPanel::RefreshPanelState()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingHelperPanel_RefreshPanelState),NULL);
	}
	void USBZSettingHelperPanel::StaticRegisterNativesUSBZSettingHelperPanel()
	{
		UClass* Class = USBZSettingHelperPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettingCategoryName", &USBZSettingHelperPanel::execSetSettingCategoryName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingHelperPanel_RefreshPanelState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingHelperPanel_RefreshPanelState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingHelperPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingHelperPanel_RefreshPanelState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingHelperPanel, nullptr, "RefreshPanelState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingHelperPanel_RefreshPanelState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingHelperPanel_RefreshPanelState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingHelperPanel_RefreshPanelState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingHelperPanel_RefreshPanelState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics
	{
		struct SBZSettingHelperPanel_eventSetSettingCategoryName_Parms
		{
			FName InSettingCategoryName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettingCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSettingCategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics::NewProp_InSettingCategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics::NewProp_InSettingCategoryName = { "InSettingCategoryName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingHelperPanel_eventSetSettingCategoryName_Parms, InSettingCategoryName), METADATA_PARAMS(Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics::NewProp_InSettingCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics::NewProp_InSettingCategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics::NewProp_InSettingCategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingHelperPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingHelperPanel, nullptr, "SetSettingCategoryName", nullptr, nullptr, sizeof(SBZSettingHelperPanel_eventSetSettingCategoryName_Parms), Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingHelperPanel_NoRegister()
	{
		return USBZSettingHelperPanel::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingHelperPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PanelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingHelperPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingHelperPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingHelperPanel_RefreshPanelState, "RefreshPanelState" }, // 4276803191
		{ &Z_Construct_UFunction_USBZSettingHelperPanel_SetSettingCategoryName, "SetSettingCategoryName" }, // 3659935053
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingHelperPanel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingHelperPanel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingHelperPanel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingHelperPanel_Statics::NewProp_PanelName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingHelperPanel" },
		{ "ModuleRelativePath", "Public/SBZSettingHelperPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZSettingHelperPanel_Statics::NewProp_PanelName = { "PanelName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingHelperPanel, PanelName), METADATA_PARAMS(Z_Construct_UClass_USBZSettingHelperPanel_Statics::NewProp_PanelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingHelperPanel_Statics::NewProp_PanelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingHelperPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingHelperPanel_Statics::NewProp_PanelName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingHelperPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingHelperPanel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingHelperPanel_Statics::ClassParams = {
		&USBZSettingHelperPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingHelperPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingHelperPanel_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingHelperPanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingHelperPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingHelperPanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingHelperPanel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingHelperPanel, 3544452707);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingHelperPanel>()
	{
		return USBZSettingHelperPanel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingHelperPanel(Z_Construct_UClass_USBZSettingHelperPanel, &USBZSettingHelperPanel::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingHelperPanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingHelperPanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
