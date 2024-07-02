// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPSOCompilationScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPSOCompilationScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPSOCompilationScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPSOCompilationScreen();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZUpdatePSOProgressDelegate__DelegateSignature();
// End Cross Module References
	void USBZPSOCompilationScreen::StaticRegisterNativesUSBZPSOCompilationScreen()
	{
	}
	UClass* Z_Construct_UClass_USBZPSOCompilationScreen_NoRegister()
	{
		return USBZPSOCompilationScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZPSOCompilationScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPSOProgressUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPSOProgressUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateIntervalInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateIntervalInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPSOCompilationScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPSOCompilationScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPSOCompilationScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPSOCompilationScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPSOCompilationScreen_Statics::NewProp_OnPSOProgressUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPSOCompilationScreen" },
		{ "ModuleRelativePath", "Public/SBZPSOCompilationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPSOCompilationScreen_Statics::NewProp_OnPSOProgressUpdated = { "OnPSOProgressUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPSOCompilationScreen, OnPSOProgressUpdated), Z_Construct_UDelegateFunction_Starbreeze_SBZUpdatePSOProgressDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPSOCompilationScreen_Statics::NewProp_OnPSOProgressUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPSOCompilationScreen_Statics::NewProp_OnPSOProgressUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPSOCompilationScreen_Statics::NewProp_UpdateIntervalInSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPSOCompilationScreen" },
		{ "ModuleRelativePath", "Public/SBZPSOCompilationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPSOCompilationScreen_Statics::NewProp_UpdateIntervalInSeconds = { "UpdateIntervalInSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPSOCompilationScreen, UpdateIntervalInSeconds), METADATA_PARAMS(Z_Construct_UClass_USBZPSOCompilationScreen_Statics::NewProp_UpdateIntervalInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPSOCompilationScreen_Statics::NewProp_UpdateIntervalInSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPSOCompilationScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPSOCompilationScreen_Statics::NewProp_OnPSOProgressUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPSOCompilationScreen_Statics::NewProp_UpdateIntervalInSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPSOCompilationScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPSOCompilationScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPSOCompilationScreen_Statics::ClassParams = {
		&USBZPSOCompilationScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPSOCompilationScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPSOCompilationScreen_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPSOCompilationScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPSOCompilationScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPSOCompilationScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPSOCompilationScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPSOCompilationScreen, 3632803578);
	template<> STARBREEZE_API UClass* StaticClass<USBZPSOCompilationScreen>()
	{
		return USBZPSOCompilationScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPSOCompilationScreen(Z_Construct_UClass_USBZPSOCompilationScreen, &USBZPSOCompilationScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPSOCompilationScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPSOCompilationScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
