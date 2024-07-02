// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuChallengeButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuChallengeButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengeButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengeButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_NoRegister();
// End Cross Module References
	static FName NAME_USBZMainMenuChallengeButton_ChallengeInititalized = FName(TEXT("ChallengeInititalized"));
	void USBZMainMenuChallengeButton::ChallengeInititalized(FSBZChallengeData const& ChallengeData)
	{
		SBZMainMenuChallengeButton_eventChallengeInititalized_Parms Parms;
		Parms.ChallengeData=ChallengeData;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuChallengeButton_ChallengeInititalized),&Parms);
	}
	void USBZMainMenuChallengeButton::StaticRegisterNativesUSBZMainMenuChallengeButton()
	{
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics::NewProp_ChallengeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics::NewProp_ChallengeData = { "ChallengeData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengeButton_eventChallengeInititalized_Parms, ChallengeData), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics::NewProp_ChallengeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics::NewProp_ChallengeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics::NewProp_ChallengeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengeButton, nullptr, "ChallengeInititalized", nullptr, nullptr, sizeof(SBZMainMenuChallengeButton_eventChallengeInititalized_Parms), Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuChallengeButton_NoRegister()
	{
		return USBZMainMenuChallengeButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuChallengeButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ChallengeStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ChallengeStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeStatWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChallengeStatWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuChallengeButton_ChallengeInititalized, "ChallengeInititalized" }, // 400685249
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuChallengeButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::NewProp_Panel_ChallengeStats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::NewProp_Panel_ChallengeStats = { "Panel_ChallengeStats", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeButton, Panel_ChallengeStats), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::NewProp_Panel_ChallengeStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::NewProp_Panel_ChallengeStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::NewProp_ChallengeStatWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeButton.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::NewProp_ChallengeStatWidget = { "ChallengeStatWidget", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeButton, ChallengeStatWidget), Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::NewProp_ChallengeStatWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::NewProp_ChallengeStatWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::NewProp_Panel_ChallengeStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::NewProp_ChallengeStatWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuChallengeButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::ClassParams = {
		&USBZMainMenuChallengeButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuChallengeButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuChallengeButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuChallengeButton, 317864553);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuChallengeButton>()
	{
		return USBZMainMenuChallengeButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuChallengeButton(Z_Construct_UClass_USBZMainMenuChallengeButton, &USBZMainMenuChallengeButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuChallengeButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuChallengeButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
