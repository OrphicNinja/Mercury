// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuItemRewardDisplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuItemRewardDisplay() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuItemRewardDisplay_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuItemRewardDisplay();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeRewardItem();
// End Cross Module References
	static FName NAME_USBZMainMenuItemRewardDisplay_InfamyInitialized = FName(TEXT("InfamyInitialized"));
	void USBZMainMenuItemRewardDisplay::InfamyInitialized(int32 InfamyPoints)
	{
		SBZMainMenuItemRewardDisplay_eventInfamyInitialized_Parms Parms;
		Parms.InfamyPoints=InfamyPoints;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuItemRewardDisplay_InfamyInitialized),&Parms);
	}
	static FName NAME_USBZMainMenuItemRewardDisplay_ItemInitialized = FName(TEXT("ItemInitialized"));
	void USBZMainMenuItemRewardDisplay::ItemInitialized(FSBZChallengeRewardItem const& InRewardItem)
	{
		SBZMainMenuItemRewardDisplay_eventItemInitialized_Parms Parms;
		Parms.InRewardItem=InRewardItem;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuItemRewardDisplay_ItemInitialized),&Parms);
	}
	void USBZMainMenuItemRewardDisplay::StaticRegisterNativesUSBZMainMenuItemRewardDisplay()
	{
	}
	struct Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_InfamyInitialized_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_InfamyInitialized_Statics::NewProp_InfamyPoints = { "InfamyPoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemRewardDisplay_eventInfamyInitialized_Parms, InfamyPoints), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_InfamyInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_InfamyInitialized_Statics::NewProp_InfamyPoints,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_InfamyInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemRewardDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_InfamyInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemRewardDisplay, nullptr, "InfamyInitialized", nullptr, nullptr, sizeof(SBZMainMenuItemRewardDisplay_eventInfamyInitialized_Parms), Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_InfamyInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_InfamyInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_InfamyInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_InfamyInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_InfamyInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_InfamyInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRewardItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRewardItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics::NewProp_InRewardItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics::NewProp_InRewardItem = { "InRewardItem", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuItemRewardDisplay_eventItemInitialized_Parms, InRewardItem), Z_Construct_UScriptStruct_FSBZChallengeRewardItem, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics::NewProp_InRewardItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics::NewProp_InRewardItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics::NewProp_InRewardItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuItemRewardDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuItemRewardDisplay, nullptr, "ItemInitialized", nullptr, nullptr, sizeof(SBZMainMenuItemRewardDisplay_eventItemInitialized_Parms), Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuItemRewardDisplay_NoRegister()
	{
		return USBZMainMenuItemRewardDisplay::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuItemRewardDisplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuItemRewardDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuItemRewardDisplay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_InfamyInitialized, "InfamyInitialized" }, // 2852553324
		{ &Z_Construct_UFunction_USBZMainMenuItemRewardDisplay_ItemInitialized, "ItemInitialized" }, // 708182135
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuItemRewardDisplay_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuItemRewardDisplay.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuItemRewardDisplay.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuItemRewardDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuItemRewardDisplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuItemRewardDisplay_Statics::ClassParams = {
		&USBZMainMenuItemRewardDisplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuItemRewardDisplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuItemRewardDisplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuItemRewardDisplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuItemRewardDisplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuItemRewardDisplay, 2427572740);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuItemRewardDisplay>()
	{
		return USBZMainMenuItemRewardDisplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuItemRewardDisplay(Z_Construct_UClass_USBZMainMenuItemRewardDisplay, &USBZMainMenuItemRewardDisplay::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuItemRewardDisplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuItemRewardDisplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
