// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuCrimeNetHeistInspectScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuCrimeNetHeistInspectScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HeistDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuCrimeNetHeistInspectScreen::execHandleMatchmakingStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMatchmakingStarted();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuCrimeNetHeistInspectScreen_OnMatchmakingStarted = FName(TEXT("OnMatchmakingStarted"));
	void USBZMainMenuCrimeNetHeistInspectScreen::OnMatchmakingStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCrimeNetHeistInspectScreen_OnMatchmakingStarted),NULL);
	}
	void USBZMainMenuCrimeNetHeistInspectScreen::StaticRegisterNativesUSBZMainMenuCrimeNetHeistInspectScreen()
	{
		UClass* Class = USBZMainMenuCrimeNetHeistInspectScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleMatchmakingStarted", &USBZMainMenuCrimeNetHeistInspectScreen::execHandleMatchmakingStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_HandleMatchmakingStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_HandleMatchmakingStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistInspectScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_HandleMatchmakingStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen, nullptr, "HandleMatchmakingStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_HandleMatchmakingStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_HandleMatchmakingStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_HandleMatchmakingStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_HandleMatchmakingStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_OnMatchmakingStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_OnMatchmakingStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistInspectScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_OnMatchmakingStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen, nullptr, "OnMatchmakingStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_OnMatchmakingStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_OnMatchmakingStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_OnMatchmakingStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_OnMatchmakingStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_NoRegister()
	{
		return USBZMainMenuCrimeNetHeistInspectScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_HandleMatchmakingStarted, "HandleMatchmakingStarted" }, // 1741822532
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistInspectScreen_OnMatchmakingStarted, "OnMatchmakingStarted" }, // 3159822879
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuCrimeNetHeistInspectScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistInspectScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::NewProp_HeistData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetHeistInspectScreen" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistInspectScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::NewProp_HeistData = { "HeistData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetHeistInspectScreen, HeistData), Z_Construct_UClass_UPD3HeistDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::NewProp_HeistData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::NewProp_HeistData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::NewProp_HeistData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuCrimeNetHeistInspectScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::ClassParams = {
		&USBZMainMenuCrimeNetHeistInspectScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuCrimeNetHeistInspectScreen, 1132087249);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuCrimeNetHeistInspectScreen>()
	{
		return USBZMainMenuCrimeNetHeistInspectScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuCrimeNetHeistInspectScreen(Z_Construct_UClass_USBZMainMenuCrimeNetHeistInspectScreen, &USBZMainMenuCrimeNetHeistInspectScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuCrimeNetHeistInspectScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuCrimeNetHeistInspectScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
