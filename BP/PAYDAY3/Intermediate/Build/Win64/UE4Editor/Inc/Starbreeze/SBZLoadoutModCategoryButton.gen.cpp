// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoadoutModCategoryButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoadoutModCategoryButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutModCategoryButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutModCategoryButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartDataAsset_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnCategoryButtonSelected__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZLoadoutModCategoryButton::execInitializeModCategoryData)
	{
		P_GET_OBJECT(USBZModularPartSlotBase,Z_Param_InSlot);
		P_GET_OBJECT(USBZModularPartDataAsset,Z_Param_InPart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeModCategoryData(Z_Param_InSlot,Z_Param_InPart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutModCategoryButton::execSetSelectedCallback)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_SelectedCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedCallback(FOnCategoryButtonSelected(Z_Param_SelectedCallback));
		P_NATIVE_END;
	}
	static FName NAME_USBZLoadoutModCategoryButton_OnWeaponModCategoryDataIntialized = FName(TEXT("OnWeaponModCategoryDataIntialized"));
	void USBZLoadoutModCategoryButton::OnWeaponModCategoryDataIntialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZLoadoutModCategoryButton_OnWeaponModCategoryDataIntialized),NULL);
	}
	void USBZLoadoutModCategoryButton::StaticRegisterNativesUSBZLoadoutModCategoryButton()
	{
		UClass* Class = USBZLoadoutModCategoryButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeModCategoryData", &USBZLoadoutModCategoryButton::execInitializeModCategoryData },
			{ "SetSelectedCallback", &USBZLoadoutModCategoryButton::execSetSelectedCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics
	{
		struct SBZLoadoutModCategoryButton_eventInitializeModCategoryData_Parms
		{
			const USBZModularPartSlotBase* InSlot;
			const USBZModularPartDataAsset* InPart;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::NewProp_InSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::NewProp_InSlot = { "InSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutModCategoryButton_eventInitializeModCategoryData_Parms, InSlot), Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::NewProp_InSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::NewProp_InSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::NewProp_InPart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::NewProp_InPart = { "InPart", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutModCategoryButton_eventInitializeModCategoryData_Parms, InPart), Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::NewProp_InPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::NewProp_InPart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::NewProp_InSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::NewProp_InPart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutModCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutModCategoryButton, nullptr, "InitializeModCategoryData", nullptr, nullptr, sizeof(SBZLoadoutModCategoryButton_eventInitializeModCategoryData_Parms), Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutModCategoryButton_OnWeaponModCategoryDataIntialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutModCategoryButton_OnWeaponModCategoryDataIntialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutModCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutModCategoryButton_OnWeaponModCategoryDataIntialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutModCategoryButton, nullptr, "OnWeaponModCategoryDataIntialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutModCategoryButton_OnWeaponModCategoryDataIntialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutModCategoryButton_OnWeaponModCategoryDataIntialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutModCategoryButton_OnWeaponModCategoryDataIntialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutModCategoryButton_OnWeaponModCategoryDataIntialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutModCategoryButton_SetSelectedCallback_Statics
	{
		struct SBZLoadoutModCategoryButton_eventSetSelectedCallback_Parms
		{
			FScriptDelegate SelectedCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_SelectedCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZLoadoutModCategoryButton_SetSelectedCallback_Statics::NewProp_SelectedCallback = { "SelectedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutModCategoryButton_eventSetSelectedCallback_Parms, SelectedCallback), Z_Construct_UDelegateFunction_Starbreeze_OnCategoryButtonSelected__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutModCategoryButton_SetSelectedCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutModCategoryButton_SetSelectedCallback_Statics::NewProp_SelectedCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutModCategoryButton_SetSelectedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutModCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutModCategoryButton_SetSelectedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutModCategoryButton, nullptr, "SetSelectedCallback", nullptr, nullptr, sizeof(SBZLoadoutModCategoryButton_eventSetSelectedCallback_Parms), Z_Construct_UFunction_USBZLoadoutModCategoryButton_SetSelectedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutModCategoryButton_SetSelectedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutModCategoryButton_SetSelectedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutModCategoryButton_SetSelectedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutModCategoryButton_SetSelectedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutModCategoryButton_SetSelectedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLoadoutModCategoryButton_NoRegister()
	{
		return USBZLoadoutModCategoryButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedPart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLoadoutModCategoryButton_InitializeModCategoryData, "InitializeModCategoryData" }, // 2825841898
		{ &Z_Construct_UFunction_USBZLoadoutModCategoryButton_OnWeaponModCategoryDataIntialized, "OnWeaponModCategoryDataIntialized" }, // 1154490016
		{ &Z_Construct_UFunction_USBZLoadoutModCategoryButton_SetSelectedCallback, "SetSelectedCallback" }, // 2316055016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLoadoutModCategoryButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLoadoutModCategoryButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::NewProp_ModSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoadoutModCategoryButton" },
		{ "ModuleRelativePath", "Public/SBZLoadoutModCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::NewProp_ModSlot = { "ModSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoadoutModCategoryButton, ModSlot), Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::NewProp_ModSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::NewProp_ModSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::NewProp_EquippedPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoadoutModCategoryButton" },
		{ "ModuleRelativePath", "Public/SBZLoadoutModCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::NewProp_EquippedPart = { "EquippedPart", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoadoutModCategoryButton, EquippedPart), Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::NewProp_EquippedPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::NewProp_EquippedPart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::NewProp_ModSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::NewProp_EquippedPart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLoadoutModCategoryButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::ClassParams = {
		&USBZLoadoutModCategoryButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLoadoutModCategoryButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLoadoutModCategoryButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLoadoutModCategoryButton, 1098991036);
	template<> STARBREEZE_API UClass* StaticClass<USBZLoadoutModCategoryButton>()
	{
		return USBZLoadoutModCategoryButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLoadoutModCategoryButton(Z_Construct_UClass_USBZLoadoutModCategoryButton, &USBZLoadoutModCategoryButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLoadoutModCategoryButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLoadoutModCategoryButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
