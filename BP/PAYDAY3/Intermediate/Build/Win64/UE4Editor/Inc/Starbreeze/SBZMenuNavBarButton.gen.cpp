// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuNavBarButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuNavBarButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuNavBarButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuNavBarButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZNavButtonParameters();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuNavBar_NoRegister();
// End Cross Module References
	static FName NAME_USBZMenuNavBarButton_OnButtonInitialized = FName(TEXT("OnButtonInitialized"));
	void USBZMenuNavBarButton::OnButtonInitialized(FSBZNavButtonParameters const& ButtonParams)
	{
		SBZMenuNavBarButton_eventOnButtonInitialized_Parms Parms;
		Parms.ButtonParams=ButtonParams;
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuNavBarButton_OnButtonInitialized),&Parms);
	}
	static FName NAME_USBZMenuNavBarButton_OnClicked = FName(TEXT("OnClicked"));
	void USBZMenuNavBarButton::OnClicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuNavBarButton_OnClicked),NULL);
	}
	static FName NAME_USBZMenuNavBarButton_OnHovered = FName(TEXT("OnHovered"));
	void USBZMenuNavBarButton::OnHovered(bool bIsHovered)
	{
		SBZMenuNavBarButton_eventOnHovered_Parms Parms;
		Parms.bIsHovered=bIsHovered ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuNavBarButton_OnHovered),&Parms);
	}
	void USBZMenuNavBarButton::StaticRegisterNativesUSBZMenuNavBarButton()
	{
	}
	struct Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics::NewProp_ButtonParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics::NewProp_ButtonParams = { "ButtonParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMenuNavBarButton_eventOnButtonInitialized_Parms, ButtonParams), Z_Construct_UScriptStruct_FSBZNavButtonParameters, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics::NewProp_ButtonParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics::NewProp_ButtonParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics::NewProp_ButtonParams,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuNavBarButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuNavBarButton, nullptr, "OnButtonInitialized", nullptr, nullptr, sizeof(SBZMenuNavBarButton_eventOnButtonInitialized_Parms), Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuNavBarButton_OnClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuNavBarButton_OnClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuNavBarButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuNavBarButton_OnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuNavBarButton, nullptr, "OnClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuNavBarButton_OnClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBarButton_OnClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuNavBarButton_OnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuNavBarButton_OnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered_Statics
	{
		static void NewProp_bIsHovered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHovered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered_Statics::NewProp_bIsHovered_SetBit(void* Obj)
	{
		((SBZMenuNavBarButton_eventOnHovered_Parms*)Obj)->bIsHovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered_Statics::NewProp_bIsHovered = { "bIsHovered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMenuNavBarButton_eventOnHovered_Parms), &Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered_Statics::NewProp_bIsHovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered_Statics::NewProp_bIsHovered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuNavBarButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuNavBarButton, nullptr, "OnHovered", nullptr, nullptr, sizeof(SBZMenuNavBarButton_eventOnHovered_Parms), Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMenuNavBarButton_NoRegister()
	{
		return USBZMenuNavBarButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMenuNavBarButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_ButtonDisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_ButtonDisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningNavBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningNavBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMenuNavBarButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMenuNavBarButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMenuNavBarButton_OnButtonInitialized, "OnButtonInitialized" }, // 205023668
		{ &Z_Construct_UFunction_USBZMenuNavBarButton_OnClicked, "OnClicked" }, // 1109623996
		{ &Z_Construct_UFunction_USBZMenuNavBarButton_OnHovered, "OnHovered" }, // 2691942925
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuNavBarButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMenuNavBarButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuNavBarButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuNavBarButton_Statics::NewProp_Text_ButtonDisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuNavBarButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuNavBarButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMenuNavBarButton_Statics::NewProp_Text_ButtonDisplayText = { "Text_ButtonDisplayText", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuNavBarButton, Text_ButtonDisplayText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMenuNavBarButton_Statics::NewProp_Text_ButtonDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuNavBarButton_Statics::NewProp_Text_ButtonDisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuNavBarButton_Statics::NewProp_OwningNavBar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuNavBarButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuNavBarButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMenuNavBarButton_Statics::NewProp_OwningNavBar = { "OwningNavBar", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuNavBarButton, OwningNavBar), Z_Construct_UClass_USBZMenuNavBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMenuNavBarButton_Statics::NewProp_OwningNavBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuNavBarButton_Statics::NewProp_OwningNavBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMenuNavBarButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuNavBarButton_Statics::NewProp_Text_ButtonDisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuNavBarButton_Statics::NewProp_OwningNavBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMenuNavBarButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMenuNavBarButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMenuNavBarButton_Statics::ClassParams = {
		&USBZMenuNavBarButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMenuNavBarButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuNavBarButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMenuNavBarButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuNavBarButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMenuNavBarButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMenuNavBarButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMenuNavBarButton, 3724287662);
	template<> STARBREEZE_API UClass* StaticClass<USBZMenuNavBarButton>()
	{
		return USBZMenuNavBarButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMenuNavBarButton(Z_Construct_UClass_USBZMenuNavBarButton, &USBZMenuNavBarButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMenuNavBarButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMenuNavBarButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
