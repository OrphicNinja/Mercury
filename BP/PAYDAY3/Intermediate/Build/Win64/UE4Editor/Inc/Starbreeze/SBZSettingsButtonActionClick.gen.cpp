// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsButtonActionClick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsButtonActionClick() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonActionClick_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonActionClick();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsButtonActionClick::execClickActionButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClickActionButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButtonActionClick::execSetActionButtonLabelLocalized)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewActionButtonLabelLocalized);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActionButtonLabelLocalized(Z_Param_Out_NewActionButtonLabelLocalized);
		P_NATIVE_END;
	}
	static FName NAME_USBZSettingsButtonActionClick_ActionButtonLabelLocalizedChanged = FName(TEXT("ActionButtonLabelLocalizedChanged"));
	void USBZSettingsButtonActionClick::ActionButtonLabelLocalizedChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsButtonActionClick_ActionButtonLabelLocalizedChanged),NULL);
	}
	void USBZSettingsButtonActionClick::StaticRegisterNativesUSBZSettingsButtonActionClick()
	{
		UClass* Class = USBZSettingsButtonActionClick::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClickActionButton", &USBZSettingsButtonActionClick::execClickActionButton },
			{ "SetActionButtonLabelLocalized", &USBZSettingsButtonActionClick::execSetActionButtonLabelLocalized },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsButtonActionClick_ActionButtonLabelLocalizedChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonActionClick_ActionButtonLabelLocalizedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonActionClick.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonActionClick_ActionButtonLabelLocalizedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonActionClick, nullptr, "ActionButtonLabelLocalizedChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonActionClick_ActionButtonLabelLocalizedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonActionClick_ActionButtonLabelLocalizedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonActionClick_ActionButtonLabelLocalizedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonActionClick_ActionButtonLabelLocalizedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonActionClick_ClickActionButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonActionClick_ClickActionButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonActionClick.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonActionClick_ClickActionButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonActionClick, nullptr, "ClickActionButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonActionClick_ClickActionButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonActionClick_ClickActionButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonActionClick_ClickActionButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonActionClick_ClickActionButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics
	{
		struct SBZSettingsButtonActionClick_eventSetActionButtonLabelLocalized_Parms
		{
			FText NewActionButtonLabelLocalized;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewActionButtonLabelLocalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewActionButtonLabelLocalized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics::NewProp_NewActionButtonLabelLocalized_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics::NewProp_NewActionButtonLabelLocalized = { "NewActionButtonLabelLocalized", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonActionClick_eventSetActionButtonLabelLocalized_Parms, NewActionButtonLabelLocalized), METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics::NewProp_NewActionButtonLabelLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics::NewProp_NewActionButtonLabelLocalized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics::NewProp_NewActionButtonLabelLocalized,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonActionClick.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonActionClick, nullptr, "SetActionButtonLabelLocalized", nullptr, nullptr, sizeof(SBZSettingsButtonActionClick_eventSetActionButtonLabelLocalized_Parms), Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsButtonActionClick_NoRegister()
	{
		return USBZSettingsButtonActionClick::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsButtonActionClick_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionButtonLabelLocalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ActionButtonLabelLocalized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSettingsButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsButtonActionClick_ActionButtonLabelLocalizedChanged, "ActionButtonLabelLocalizedChanged" }, // 3319014447
		{ &Z_Construct_UFunction_USBZSettingsButtonActionClick_ClickActionButton, "ClickActionButton" }, // 1987262778
		{ &Z_Construct_UFunction_USBZSettingsButtonActionClick_SetActionButtonLabelLocalized, "SetActionButtonLabelLocalized" }, // 907707048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsButtonActionClick.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonActionClick.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::NewProp_ActionButtonLabelLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonActionClick" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonActionClick.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::NewProp_ActionButtonLabelLocalized = { "ActionButtonLabelLocalized", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonActionClick, ActionButtonLabelLocalized), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::NewProp_ActionButtonLabelLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::NewProp_ActionButtonLabelLocalized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::NewProp_ActionButtonLabelLocalized,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsButtonActionClick>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::ClassParams = {
		&USBZSettingsButtonActionClick::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsButtonActionClick()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsButtonActionClick_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsButtonActionClick, 4284947723);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsButtonActionClick>()
	{
		return USBZSettingsButtonActionClick::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsButtonActionClick(Z_Construct_UClass_USBZSettingsButtonActionClick, &USBZSettingsButtonActionClick::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsButtonActionClick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsButtonActionClick);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
