// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuChallengeCategoryButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuChallengeCategoryButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengeCategoryButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeCategoryData_NoRegister();
// End Cross Module References
	static FName NAME_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed = FName(TEXT("OnChallengeCategoryCountRefreshed"));
	void USBZMainMenuChallengeCategoryButton::OnChallengeCategoryCountRefreshed(int32 TotalCount, int32 CompletedCount)
	{
		SBZMainMenuChallengeCategoryButton_eventOnChallengeCategoryCountRefreshed_Parms Parms;
		Parms.TotalCount=TotalCount;
		Parms.CompletedCount=CompletedCount;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed),&Parms);
	}
	static FName NAME_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized = FName(TEXT("OnChallengeCategoryDataInititalized"));
	void USBZMainMenuChallengeCategoryButton::OnChallengeCategoryDataInititalized(USBZChallengeCategoryData* InCategoryData)
	{
		SBZMainMenuChallengeCategoryButton_eventOnChallengeCategoryDataInititalized_Parms Parms;
		Parms.InCategoryData=InCategoryData;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized),&Parms);
	}
	void USBZMainMenuChallengeCategoryButton::StaticRegisterNativesUSBZMainMenuChallengeCategoryButton()
	{
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompletedCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed_Statics::NewProp_TotalCount = { "TotalCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengeCategoryButton_eventOnChallengeCategoryCountRefreshed_Parms, TotalCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed_Statics::NewProp_CompletedCount = { "CompletedCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengeCategoryButton_eventOnChallengeCategoryCountRefreshed_Parms, CompletedCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed_Statics::NewProp_TotalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed_Statics::NewProp_CompletedCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengeCategoryButton, nullptr, "OnChallengeCategoryCountRefreshed", nullptr, nullptr, sizeof(SBZMainMenuChallengeCategoryButton_eventOnChallengeCategoryCountRefreshed_Parms), Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCategoryData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized_Statics::NewProp_InCategoryData = { "InCategoryData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengeCategoryButton_eventOnChallengeCategoryDataInititalized_Parms, InCategoryData), Z_Construct_UClass_USBZChallengeCategoryData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized_Statics::NewProp_InCategoryData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengeCategoryButton, nullptr, "OnChallengeCategoryDataInititalized", nullptr, nullptr, sizeof(SBZMainMenuChallengeCategoryButton_eventOnChallengeCategoryDataInititalized_Parms), Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_NoRegister()
	{
		return USBZMainMenuChallengeCategoryButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CategoryData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryCountRefreshed, "OnChallengeCategoryCountRefreshed" }, // 4108602076
		{ &Z_Construct_UFunction_USBZMainMenuChallengeCategoryButton_OnChallengeCategoryDataInititalized, "OnChallengeCategoryDataInititalized" }, // 2200705020
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuChallengeCategoryButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeCategoryButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::NewProp_CategoryData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeCategoryButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::NewProp_CategoryData = { "CategoryData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeCategoryButton, CategoryData), Z_Construct_UClass_USBZChallengeCategoryData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::NewProp_CategoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::NewProp_CategoryData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::NewProp_CategoryData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuChallengeCategoryButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::ClassParams = {
		&USBZMainMenuChallengeCategoryButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuChallengeCategoryButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuChallengeCategoryButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuChallengeCategoryButton, 2753981711);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuChallengeCategoryButton>()
	{
		return USBZMainMenuChallengeCategoryButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuChallengeCategoryButton(Z_Construct_UClass_USBZMainMenuChallengeCategoryButton, &USBZMainMenuChallengeCategoryButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuChallengeCategoryButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuChallengeCategoryButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
