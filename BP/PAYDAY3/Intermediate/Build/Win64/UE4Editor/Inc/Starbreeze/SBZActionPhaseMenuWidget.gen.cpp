// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActionPhaseMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActionPhaseMenuWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionPhaseMenuWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionPhaseMenuWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseMenuWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuNavBar_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZActionPhaseMenuWidget::execToggleShowMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleShowMenu();
		P_NATIVE_END;
	}
	static FName NAME_USBZActionPhaseMenuWidget_OnMenuShown = FName(TEXT("OnMenuShown"));
	void USBZActionPhaseMenuWidget::OnMenuShown(bool bIsShown)
	{
		SBZActionPhaseMenuWidget_eventOnMenuShown_Parms Parms;
		Parms.bIsShown=bIsShown ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZActionPhaseMenuWidget_OnMenuShown),&Parms);
	}
	void USBZActionPhaseMenuWidget::StaticRegisterNativesUSBZActionPhaseMenuWidget()
	{
		UClass* Class = USBZActionPhaseMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleShowMenu", &USBZActionPhaseMenuWidget::execToggleShowMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown_Statics
	{
		static void NewProp_bIsShown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown_Statics::NewProp_bIsShown_SetBit(void* Obj)
	{
		((SBZActionPhaseMenuWidget_eventOnMenuShown_Parms*)Obj)->bIsShown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown_Statics::NewProp_bIsShown = { "bIsShown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZActionPhaseMenuWidget_eventOnMenuShown_Parms), &Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown_Statics::NewProp_bIsShown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown_Statics::NewProp_bIsShown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActionPhaseMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActionPhaseMenuWidget, nullptr, "OnMenuShown", nullptr, nullptr, sizeof(SBZActionPhaseMenuWidget_eventOnMenuShown_Parms), Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActionPhaseMenuWidget_ToggleShowMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionPhaseMenuWidget_ToggleShowMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActionPhaseMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActionPhaseMenuWidget_ToggleShowMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActionPhaseMenuWidget, nullptr, "ToggleShowMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActionPhaseMenuWidget_ToggleShowMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseMenuWidget_ToggleShowMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActionPhaseMenuWidget_ToggleShowMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActionPhaseMenuWidget_ToggleShowMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZActionPhaseMenuWidget_NoRegister()
	{
		return USBZActionPhaseMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_NavBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_NavBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuStackValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MenuStackValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMenuShown_MetaData[];
#endif
		static void NewProp_bIsMenuShown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMenuShown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseMenuWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZActionPhaseMenuWidget_OnMenuShown, "OnMenuShown" }, // 2559952013
		{ &Z_Construct_UFunction_USBZActionPhaseMenuWidget_ToggleShowMenu, "ToggleShowMenu" }, // 2178774694
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZActionPhaseMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZActionPhaseMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_Widget_NavBar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionPhaseMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZActionPhaseMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_Widget_NavBar = { "Widget_NavBar", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActionPhaseMenuWidget, Widget_NavBar), Z_Construct_UClass_USBZMenuNavBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_Widget_NavBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_Widget_NavBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_MenuStackValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionPhaseMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZActionPhaseMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_MenuStackValue = { "MenuStackValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActionPhaseMenuWidget, MenuStackValue), METADATA_PARAMS(Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_MenuStackValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_MenuStackValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_bIsMenuShown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionPhaseMenuWidget" },
		{ "ModuleRelativePath", "Public/SBZActionPhaseMenuWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_bIsMenuShown_SetBit(void* Obj)
	{
		((USBZActionPhaseMenuWidget*)Obj)->bIsMenuShown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_bIsMenuShown = { "bIsMenuShown", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZActionPhaseMenuWidget), &Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_bIsMenuShown_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_bIsMenuShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_bIsMenuShown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_Widget_NavBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_MenuStackValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::NewProp_bIsMenuShown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZActionPhaseMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::ClassParams = {
		&USBZActionPhaseMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZActionPhaseMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZActionPhaseMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZActionPhaseMenuWidget, 556734268);
	template<> STARBREEZE_API UClass* StaticClass<USBZActionPhaseMenuWidget>()
	{
		return USBZActionPhaseMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZActionPhaseMenuWidget(Z_Construct_UClass_USBZActionPhaseMenuWidget, &USBZActionPhaseMenuWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZActionPhaseMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZActionPhaseMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
