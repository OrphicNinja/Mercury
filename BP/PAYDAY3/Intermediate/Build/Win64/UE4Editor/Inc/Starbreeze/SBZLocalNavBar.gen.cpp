// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLocalNavBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLocalNavBar() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalNavBar_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalNavBar();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnIndexChanged__DelegateSignature();
// End Cross Module References
	static FName NAME_USBZLocalNavBar_RebuildNavbar = FName(TEXT("RebuildNavbar"));
	void USBZLocalNavBar::RebuildNavbar()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZLocalNavBar_RebuildNavbar),NULL);
	}
	void USBZLocalNavBar::StaticRegisterNativesUSBZLocalNavBar()
	{
	}
	struct Z_Construct_UFunction_USBZLocalNavBar_RebuildNavbar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLocalNavBar_RebuildNavbar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLocalNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLocalNavBar_RebuildNavbar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLocalNavBar, nullptr, "RebuildNavbar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLocalNavBar_RebuildNavbar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLocalNavBar_RebuildNavbar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLocalNavBar_RebuildNavbar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLocalNavBar_RebuildNavbar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLocalNavBar_NoRegister()
	{
		return USBZLocalNavBar::StaticClass();
	}
	struct Z_Construct_UClass_USBZLocalNavBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NavigationButtonNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationButtonNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavigationButtonNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIndexChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIndexChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLocalNavBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLocalNavBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLocalNavBar_RebuildNavbar, "RebuildNavbar" }, // 1195188239
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalNavBar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLocalNavBar.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLocalNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZLocalNavBar_Statics::NewProp_NavigationButtonNames_Inner = { "NavigationButtonNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalNavBar_Statics::NewProp_NavigationButtonNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalNavBar" },
		{ "ModuleRelativePath", "Public/SBZLocalNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZLocalNavBar_Statics::NewProp_NavigationButtonNames = { "NavigationButtonNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalNavBar, NavigationButtonNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZLocalNavBar_Statics::NewProp_NavigationButtonNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalNavBar_Statics::NewProp_NavigationButtonNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalNavBar_Statics::NewProp_OnIndexChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalNavBar" },
		{ "ModuleRelativePath", "Public/SBZLocalNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZLocalNavBar_Statics::NewProp_OnIndexChanged = { "OnIndexChanged", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalNavBar, OnIndexChanged), Z_Construct_UDelegateFunction_Starbreeze_OnIndexChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZLocalNavBar_Statics::NewProp_OnIndexChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalNavBar_Statics::NewProp_OnIndexChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLocalNavBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalNavBar_Statics::NewProp_NavigationButtonNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalNavBar_Statics::NewProp_NavigationButtonNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalNavBar_Statics::NewProp_OnIndexChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLocalNavBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLocalNavBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLocalNavBar_Statics::ClassParams = {
		&USBZLocalNavBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLocalNavBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalNavBar_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLocalNavBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalNavBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLocalNavBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLocalNavBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLocalNavBar, 2062497489);
	template<> STARBREEZE_API UClass* StaticClass<USBZLocalNavBar>()
	{
		return USBZLocalNavBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLocalNavBar(Z_Construct_UClass_USBZLocalNavBar, &USBZLocalNavBar::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLocalNavBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLocalNavBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
