// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuStackInventoryBaseScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuStackInventoryBaseScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackInventoryBaseScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackInventoryBaseScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static FName NAME_USBZMenuStackInventoryBaseScreen_OnEmptySlotSelected = FName(TEXT("OnEmptySlotSelected"));
	void USBZMenuStackInventoryBaseScreen::OnEmptySlotSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuStackInventoryBaseScreen_OnEmptySlotSelected),NULL);
	}
	void USBZMenuStackInventoryBaseScreen::StaticRegisterNativesUSBZMenuStackInventoryBaseScreen()
	{
	}
	struct Z_Construct_UFunction_USBZMenuStackInventoryBaseScreen_OnEmptySlotSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackInventoryBaseScreen_OnEmptySlotSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackInventoryBaseScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackInventoryBaseScreen_OnEmptySlotSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackInventoryBaseScreen, nullptr, "OnEmptySlotSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackInventoryBaseScreen_OnEmptySlotSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackInventoryBaseScreen_OnEmptySlotSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackInventoryBaseScreen_OnEmptySlotSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackInventoryBaseScreen_OnEmptySlotSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMenuStackInventoryBaseScreen_NoRegister()
	{
		return USBZMenuStackInventoryBaseScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZMenuStackInventoryBaseScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMenuStackInventoryBaseScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMenuStackInventoryBaseScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMenuStackInventoryBaseScreen_OnEmptySlotSelected, "OnEmptySlotSelected" }, // 164726646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackInventoryBaseScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMenuStackInventoryBaseScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuStackInventoryBaseScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMenuStackInventoryBaseScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMenuStackInventoryBaseScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMenuStackInventoryBaseScreen_Statics::ClassParams = {
		&USBZMenuStackInventoryBaseScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackInventoryBaseScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackInventoryBaseScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMenuStackInventoryBaseScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMenuStackInventoryBaseScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMenuStackInventoryBaseScreen, 3685309833);
	template<> STARBREEZE_API UClass* StaticClass<USBZMenuStackInventoryBaseScreen>()
	{
		return USBZMenuStackInventoryBaseScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMenuStackInventoryBaseScreen(Z_Construct_UClass_USBZMenuStackInventoryBaseScreen, &USBZMenuStackInventoryBaseScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMenuStackInventoryBaseScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMenuStackInventoryBaseScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif