// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuCharacterDisplayPanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuCharacterDisplayPanel() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuCharacterDisplayPanel::execSetCharacterToDisplay)
	{
		P_GET_OBJECT(USBZPlayerCharacterData,Z_Param_InCharacterData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterToDisplay(Z_Param_InCharacterData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCharacterDisplayPanel::execSetEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmpty();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged = FName(TEXT("OnCharacterDataChanged"));
	void USBZMainMenuCharacterDisplayPanel::OnCharacterDataChanged(const USBZPlayerCharacterData* InCharacterData)
	{
		SBZMainMenuCharacterDisplayPanel_eventOnCharacterDataChanged_Parms Parms;
		Parms.InCharacterData=InCharacterData;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged),&Parms);
	}
	static FName NAME_USBZMainMenuCharacterDisplayPanel_OnEmptySet = FName(TEXT("OnEmptySet"));
	void USBZMainMenuCharacterDisplayPanel::OnEmptySet()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCharacterDisplayPanel_OnEmptySet),NULL);
	}
	void USBZMainMenuCharacterDisplayPanel::StaticRegisterNativesUSBZMainMenuCharacterDisplayPanel()
	{
		UClass* Class = USBZMainMenuCharacterDisplayPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCharacterToDisplay", &USBZMainMenuCharacterDisplayPanel::execSetCharacterToDisplay },
			{ "SetEmpty", &USBZMainMenuCharacterDisplayPanel::execSetEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacterData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics::NewProp_InCharacterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics::NewProp_InCharacterData = { "InCharacterData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCharacterDisplayPanel_eventOnCharacterDataChanged_Parms, InCharacterData), Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics::NewProp_InCharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics::NewProp_InCharacterData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics::NewProp_InCharacterData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCharacterDisplayPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel, nullptr, "OnCharacterDataChanged", nullptr, nullptr, sizeof(SBZMainMenuCharacterDisplayPanel_eventOnCharacterDataChanged_Parms), Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnEmptySet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnEmptySet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCharacterDisplayPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnEmptySet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel, nullptr, "OnEmptySet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnEmptySet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnEmptySet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnEmptySet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnEmptySet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics
	{
		struct SBZMainMenuCharacterDisplayPanel_eventSetCharacterToDisplay_Parms
		{
			const USBZPlayerCharacterData* InCharacterData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacterData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics::NewProp_InCharacterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics::NewProp_InCharacterData = { "InCharacterData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCharacterDisplayPanel_eventSetCharacterToDisplay_Parms, InCharacterData), Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics::NewProp_InCharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics::NewProp_InCharacterData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics::NewProp_InCharacterData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCharacterDisplayPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel, nullptr, "SetCharacterToDisplay", nullptr, nullptr, sizeof(SBZMainMenuCharacterDisplayPanel_eventSetCharacterToDisplay_Parms), Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCharacterDisplayPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel, nullptr, "SetEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_NoRegister()
	{
		return USBZMainMenuCharacterDisplayPanel::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnCharacterDataChanged, "OnCharacterDataChanged" }, // 4242767876
		{ &Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_OnEmptySet, "OnEmptySet" }, // 2616941470
		{ &Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetCharacterToDisplay, "SetCharacterToDisplay" }, // 3436442057
		{ &Z_Construct_UFunction_USBZMainMenuCharacterDisplayPanel_SetEmpty, "SetEmpty" }, // 3378818732
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuCharacterDisplayPanel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCharacterDisplayPanel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::NewProp_CharacterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCharacterDisplayPanel" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCharacterDisplayPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCharacterDisplayPanel, CharacterData), Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::NewProp_CharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::NewProp_CharacterData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::NewProp_CharacterData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuCharacterDisplayPanel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::ClassParams = {
		&USBZMainMenuCharacterDisplayPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuCharacterDisplayPanel, 2116131469);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuCharacterDisplayPanel>()
	{
		return USBZMainMenuCharacterDisplayPanel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuCharacterDisplayPanel(Z_Construct_UClass_USBZMainMenuCharacterDisplayPanel, &USBZMainMenuCharacterDisplayPanel::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuCharacterDisplayPanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuCharacterDisplayPanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
