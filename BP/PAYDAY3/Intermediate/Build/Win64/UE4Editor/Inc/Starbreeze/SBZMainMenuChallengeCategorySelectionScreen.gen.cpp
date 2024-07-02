// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuChallengeCategorySelectionScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuChallengeCategorySelectionScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengesWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuChallengeCategorySelectionScreen::execNativeOnCategoryButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InCategoryButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnCategoryButtonSelected(Z_Param_InCategoryButton);
		P_NATIVE_END;
	}
	void USBZMainMenuChallengeCategorySelectionScreen::StaticRegisterNativesUSBZMainMenuChallengeCategorySelectionScreen()
	{
		UClass* Class = USBZMainMenuChallengeCategorySelectionScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeOnCategoryButtonSelected", &USBZMainMenuChallengeCategorySelectionScreen::execNativeOnCategoryButtonSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics
	{
		struct SBZMainMenuChallengeCategorySelectionScreen_eventNativeOnCategoryButtonSelected_Parms
		{
			USBZMenuButton* InCategoryButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCategoryButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCategoryButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics::NewProp_InCategoryButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics::NewProp_InCategoryButton = { "InCategoryButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengeCategorySelectionScreen_eventNativeOnCategoryButtonSelected_Parms, InCategoryButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics::NewProp_InCategoryButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics::NewProp_InCategoryButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics::NewProp_InCategoryButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeCategorySelectionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen, nullptr, "NativeOnCategoryButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuChallengeCategorySelectionScreen_eventNativeOnCategoryButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_NoRegister()
	{
		return USBZMainMenuChallengeCategorySelectionScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_ChallengeCategorySelection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox_ChallengeCategorySelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_ChallengeScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_ChallengeScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeCategoryButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChallengeCategoryButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanelButtonPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PanelButtonPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuChallengeCategorySelectionScreen_NativeOnCategoryButtonSelected, "NativeOnCategoryButtonSelected" }, // 755591367
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuChallengeCategorySelectionScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeCategorySelectionScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_HorizontalBox_ChallengeCategorySelection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeCategorySelectionScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeCategorySelectionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_HorizontalBox_ChallengeCategorySelection = { "HorizontalBox_ChallengeCategorySelection", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeCategorySelectionScreen, HorizontalBox_ChallengeCategorySelection), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_HorizontalBox_ChallengeCategorySelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_HorizontalBox_ChallengeCategorySelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_Widget_ChallengeScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeCategorySelectionScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeCategorySelectionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_Widget_ChallengeScreen = { "Widget_ChallengeScreen", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeCategorySelectionScreen, Widget_ChallengeScreen), Z_Construct_UClass_USBZMainMenuChallengesWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_Widget_ChallengeScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_Widget_ChallengeScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_ChallengeCategoryButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeCategorySelectionScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeCategorySelectionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_ChallengeCategoryButton = { "ChallengeCategoryButton", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeCategorySelectionScreen, ChallengeCategoryButton), Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_ChallengeCategoryButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_ChallengeCategoryButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_PanelButtonPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeCategorySelectionScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeCategorySelectionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_PanelButtonPadding = { "PanelButtonPadding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeCategorySelectionScreen, PanelButtonPadding), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_PanelButtonPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_PanelButtonPadding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_HorizontalBox_ChallengeCategorySelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_Widget_ChallengeScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_ChallengeCategoryButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::NewProp_PanelButtonPadding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuChallengeCategorySelectionScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::ClassParams = {
		&USBZMainMenuChallengeCategorySelectionScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuChallengeCategorySelectionScreen, 2853990028);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuChallengeCategorySelectionScreen>()
	{
		return USBZMainMenuChallengeCategorySelectionScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuChallengeCategorySelectionScreen(Z_Construct_UClass_USBZMainMenuChallengeCategorySelectionScreen, &USBZMainMenuChallengeCategorySelectionScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuChallengeCategorySelectionScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuChallengeCategorySelectionScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
