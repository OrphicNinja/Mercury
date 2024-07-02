// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuStackScreenWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuStackScreenWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZMenuStackScreenWidget::execNativeOnBackPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnBackPressed();
		P_NATIVE_END;
	}
	static FName NAME_USBZMenuStackScreenWidget_OnBackPressed = FName(TEXT("OnBackPressed"));
	void USBZMenuStackScreenWidget::OnBackPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuStackScreenWidget_OnBackPressed),NULL);
	}
	void USBZMenuStackScreenWidget::StaticRegisterNativesUSBZMenuStackScreenWidget()
	{
		UClass* Class = USBZMenuStackScreenWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeOnBackPressed", &USBZMenuStackScreenWidget::execNativeOnBackPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMenuStackScreenWidget_NativeOnBackPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackScreenWidget_NativeOnBackPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackScreenWidget_NativeOnBackPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackScreenWidget, nullptr, "NativeOnBackPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackScreenWidget_NativeOnBackPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackScreenWidget_NativeOnBackPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackScreenWidget_NativeOnBackPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackScreenWidget_NativeOnBackPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuStackScreenWidget_OnBackPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackScreenWidget_OnBackPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackScreenWidget_OnBackPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackScreenWidget, nullptr, "OnBackPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackScreenWidget_OnBackPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackScreenWidget_OnBackPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackScreenWidget_OnBackPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackScreenWidget_OnBackPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMenuStackScreenWidget_NoRegister()
	{
		return USBZMenuStackScreenWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMenuStackScreenWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldListenForUIBackEvent_MetaData[];
#endif
		static void NewProp_bShouldListenForUIBackEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldListenForUIBackEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPopStackOnBackPressed_MetaData[];
#endif
		static void NewProp_bPopStackOnBackPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPopStackOnBackPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BackActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMenuStackScreenWidget_NativeOnBackPressed, "NativeOnBackPressed" }, // 2252036843
		{ &Z_Construct_UFunction_USBZMenuStackScreenWidget_OnBackPressed, "OnBackPressed" }, // 1876666528
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMenuStackScreenWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bShouldListenForUIBackEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuStackScreenWidget" },
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bShouldListenForUIBackEvent_SetBit(void* Obj)
	{
		((USBZMenuStackScreenWidget*)Obj)->bShouldListenForUIBackEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bShouldListenForUIBackEvent = { "bShouldListenForUIBackEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMenuStackScreenWidget), &Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bShouldListenForUIBackEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bShouldListenForUIBackEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bShouldListenForUIBackEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bPopStackOnBackPressed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuStackScreenWidget" },
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bPopStackOnBackPressed_SetBit(void* Obj)
	{
		((USBZMenuStackScreenWidget*)Obj)->bPopStackOnBackPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bPopStackOnBackPressed = { "bPopStackOnBackPressed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMenuStackScreenWidget), &Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bPopStackOnBackPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bPopStackOnBackPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bPopStackOnBackPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_BackActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuStackScreenWidget" },
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_BackActionName = { "BackActionName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuStackScreenWidget, BackActionName), METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_BackActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_BackActionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bShouldListenForUIBackEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_bPopStackOnBackPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::NewProp_BackActionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMenuStackScreenWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::ClassParams = {
		&USBZMenuStackScreenWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMenuStackScreenWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMenuStackScreenWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMenuStackScreenWidget, 4029691739);
	template<> STARBREEZE_API UClass* StaticClass<USBZMenuStackScreenWidget>()
	{
		return USBZMenuStackScreenWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMenuStackScreenWidget(Z_Construct_UClass_USBZMenuStackScreenWidget, &USBZMenuStackScreenWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMenuStackScreenWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMenuStackScreenWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
