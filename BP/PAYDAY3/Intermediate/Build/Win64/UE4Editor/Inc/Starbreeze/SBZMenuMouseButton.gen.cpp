// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuMouseButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuMouseButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuMouseButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuMouseButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnMenuMouseButtonStateChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnMenuMouseButtonSelected__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZMenuMouseButton::execSelectButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectButton();
		P_NATIVE_END;
	}
	static FName NAME_USBZMenuMouseButton_ButtonHoveredChanged = FName(TEXT("ButtonHoveredChanged"));
	void USBZMenuMouseButton::ButtonHoveredChanged(bool bInIsHovered)
	{
		SBZMenuMouseButton_eventButtonHoveredChanged_Parms Parms;
		Parms.bInIsHovered=bInIsHovered ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuMouseButton_ButtonHoveredChanged),&Parms);
	}
	static FName NAME_USBZMenuMouseButton_ButtonSelected = FName(TEXT("ButtonSelected"));
	void USBZMenuMouseButton::ButtonSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuMouseButton_ButtonSelected),NULL);
	}
	void USBZMenuMouseButton::StaticRegisterNativesUSBZMenuMouseButton()
	{
		UClass* Class = USBZMenuMouseButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectButton", &USBZMenuMouseButton::execSelectButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged_Statics
	{
		static void NewProp_bInIsHovered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsHovered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged_Statics::NewProp_bInIsHovered_SetBit(void* Obj)
	{
		((SBZMenuMouseButton_eventButtonHoveredChanged_Parms*)Obj)->bInIsHovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged_Statics::NewProp_bInIsHovered = { "bInIsHovered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMenuMouseButton_eventButtonHoveredChanged_Parms), &Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged_Statics::NewProp_bInIsHovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged_Statics::NewProp_bInIsHovered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuMouseButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuMouseButton, nullptr, "ButtonHoveredChanged", nullptr, nullptr, sizeof(SBZMenuMouseButton_eventButtonHoveredChanged_Parms), Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuMouseButton_ButtonSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuMouseButton_ButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuMouseButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuMouseButton_ButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuMouseButton, nullptr, "ButtonSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuMouseButton_ButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMouseButton_ButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuMouseButton_ButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuMouseButton_ButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuMouseButton_SelectButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuMouseButton_SelectButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuMouseButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuMouseButton_SelectButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuMouseButton, nullptr, "SelectButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuMouseButton_SelectButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMouseButton_SelectButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuMouseButton_SelectButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuMouseButton_SelectButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMenuMouseButton_NoRegister()
	{
		return USBZMenuMouseButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMenuMouseButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonHoveredChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonHoveredChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMenuMouseButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMenuMouseButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMenuMouseButton_ButtonHoveredChanged, "ButtonHoveredChanged" }, // 1581381873
		{ &Z_Construct_UFunction_USBZMenuMouseButton_ButtonSelected, "ButtonSelected" }, // 4106116444
		{ &Z_Construct_UFunction_USBZMenuMouseButton_SelectButton, "SelectButton" }, // 1293400246
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuMouseButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMenuMouseButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuMouseButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuMouseButton_Statics::NewProp_OnButtonHoveredChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuMouseButton" },
		{ "ModuleRelativePath", "Public/SBZMenuMouseButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMenuMouseButton_Statics::NewProp_OnButtonHoveredChanged = { "OnButtonHoveredChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuMouseButton, OnButtonHoveredChanged), Z_Construct_UDelegateFunction_Starbreeze_OnMenuMouseButtonStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMenuMouseButton_Statics::NewProp_OnButtonHoveredChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuMouseButton_Statics::NewProp_OnButtonHoveredChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuMouseButton_Statics::NewProp_OnButtonSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuMouseButton" },
		{ "ModuleRelativePath", "Public/SBZMenuMouseButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMenuMouseButton_Statics::NewProp_OnButtonSelected = { "OnButtonSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuMouseButton, OnButtonSelected), Z_Construct_UDelegateFunction_Starbreeze_OnMenuMouseButtonSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMenuMouseButton_Statics::NewProp_OnButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuMouseButton_Statics::NewProp_OnButtonSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMenuMouseButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuMouseButton_Statics::NewProp_OnButtonHoveredChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuMouseButton_Statics::NewProp_OnButtonSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMenuMouseButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMenuMouseButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMenuMouseButton_Statics::ClassParams = {
		&USBZMenuMouseButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMenuMouseButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuMouseButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMenuMouseButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuMouseButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMenuMouseButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMenuMouseButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMenuMouseButton, 3374635677);
	template<> STARBREEZE_API UClass* StaticClass<USBZMenuMouseButton>()
	{
		return USBZMenuMouseButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMenuMouseButton(Z_Construct_UClass_USBZMenuMouseButton, &USBZMenuMouseButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMenuMouseButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMenuMouseButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
