// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3AmmoAttributeWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3AmmoAttributeWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3AmmoAttributeWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3AmmoAttributeWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
// End Cross Module References
	DEFINE_FUNCTION(UPD3AmmoAttributeWidget::execInitializePlayerState)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_InSBZPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializePlayerState(Z_Param_InSBZPlayerState);
		P_NATIVE_END;
	}
	static FName NAME_UPD3AmmoAttributeWidget_OnAmmoUpdated = FName(TEXT("OnAmmoUpdated"));
	void UPD3AmmoAttributeWidget::OnAmmoUpdated(float AmmoLoadedUpdated, float AmmoInventoryUpdated, float AmmoTotal)
	{
		PD3AmmoAttributeWidget_eventOnAmmoUpdated_Parms Parms;
		Parms.AmmoLoadedUpdated=AmmoLoadedUpdated;
		Parms.AmmoInventoryUpdated=AmmoInventoryUpdated;
		Parms.AmmoTotal=AmmoTotal;
		ProcessEvent(FindFunctionChecked(NAME_UPD3AmmoAttributeWidget_OnAmmoUpdated),&Parms);
	}
	static FName NAME_UPD3AmmoAttributeWidget_OnSetup = FName(TEXT("OnSetup"));
	void UPD3AmmoAttributeWidget::OnSetup(float AmmoLoadedSetup, float AmmoInventorySetup, float AmmoTotal)
	{
		PD3AmmoAttributeWidget_eventOnSetup_Parms Parms;
		Parms.AmmoLoadedSetup=AmmoLoadedSetup;
		Parms.AmmoInventorySetup=AmmoInventorySetup;
		Parms.AmmoTotal=AmmoTotal;
		ProcessEvent(FindFunctionChecked(NAME_UPD3AmmoAttributeWidget_OnSetup),&Parms);
	}
	void UPD3AmmoAttributeWidget::StaticRegisterNativesUPD3AmmoAttributeWidget()
	{
		UClass* Class = UPD3AmmoAttributeWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializePlayerState", &UPD3AmmoAttributeWidget::execInitializePlayerState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3AmmoAttributeWidget_InitializePlayerState_Statics
	{
		struct PD3AmmoAttributeWidget_eventInitializePlayerState_Parms
		{
			ASBZPlayerState* InSBZPlayerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSBZPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3AmmoAttributeWidget_InitializePlayerState_Statics::NewProp_InSBZPlayerState = { "InSBZPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AmmoAttributeWidget_eventInitializePlayerState_Parms, InSBZPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AmmoAttributeWidget_InitializePlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AmmoAttributeWidget_InitializePlayerState_Statics::NewProp_InSBZPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AmmoAttributeWidget_InitializePlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AmmoAttributeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AmmoAttributeWidget_InitializePlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AmmoAttributeWidget, nullptr, "InitializePlayerState", nullptr, nullptr, sizeof(PD3AmmoAttributeWidget_eventInitializePlayerState_Parms), Z_Construct_UFunction_UPD3AmmoAttributeWidget_InitializePlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AmmoAttributeWidget_InitializePlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AmmoAttributeWidget_InitializePlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AmmoAttributeWidget_InitializePlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AmmoAttributeWidget_InitializePlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AmmoAttributeWidget_InitializePlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmmoLoadedUpdated;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmmoInventoryUpdated;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmmoTotal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::NewProp_AmmoLoadedUpdated = { "AmmoLoadedUpdated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AmmoAttributeWidget_eventOnAmmoUpdated_Parms, AmmoLoadedUpdated), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::NewProp_AmmoInventoryUpdated = { "AmmoInventoryUpdated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AmmoAttributeWidget_eventOnAmmoUpdated_Parms, AmmoInventoryUpdated), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::NewProp_AmmoTotal = { "AmmoTotal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AmmoAttributeWidget_eventOnAmmoUpdated_Parms, AmmoTotal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::NewProp_AmmoLoadedUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::NewProp_AmmoInventoryUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::NewProp_AmmoTotal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AmmoAttributeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AmmoAttributeWidget, nullptr, "OnAmmoUpdated", nullptr, nullptr, sizeof(PD3AmmoAttributeWidget_eventOnAmmoUpdated_Parms), Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmmoLoadedSetup;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmmoInventorySetup;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmmoTotal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::NewProp_AmmoLoadedSetup = { "AmmoLoadedSetup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AmmoAttributeWidget_eventOnSetup_Parms, AmmoLoadedSetup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::NewProp_AmmoInventorySetup = { "AmmoInventorySetup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AmmoAttributeWidget_eventOnSetup_Parms, AmmoInventorySetup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::NewProp_AmmoTotal = { "AmmoTotal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AmmoAttributeWidget_eventOnSetup_Parms, AmmoTotal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::NewProp_AmmoLoadedSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::NewProp_AmmoInventorySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::NewProp_AmmoTotal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AmmoAttributeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AmmoAttributeWidget, nullptr, "OnSetup", nullptr, nullptr, sizeof(PD3AmmoAttributeWidget_eventOnSetup_Parms), Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3AmmoAttributeWidget_NoRegister()
	{
		return UPD3AmmoAttributeWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoLoadedGameplayAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmmoLoadedGameplayAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoInventoryGameplayAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmmoInventoryGameplayAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBZPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBZPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3AmmoAttributeWidget_InitializePlayerState, "InitializePlayerState" }, // 3164457720
		{ &Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnAmmoUpdated, "OnAmmoUpdated" }, // 2155734863
		{ &Z_Construct_UFunction_UPD3AmmoAttributeWidget_OnSetup, "OnSetup" }, // 1781987251
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3AmmoAttributeWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3AmmoAttributeWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_AmmoLoadedGameplayAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AmmoAttributeWidget" },
		{ "ModuleRelativePath", "Public/PD3AmmoAttributeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_AmmoLoadedGameplayAttribute = { "AmmoLoadedGameplayAttribute", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3AmmoAttributeWidget, AmmoLoadedGameplayAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_AmmoLoadedGameplayAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_AmmoLoadedGameplayAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_AmmoInventoryGameplayAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AmmoAttributeWidget" },
		{ "ModuleRelativePath", "Public/PD3AmmoAttributeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_AmmoInventoryGameplayAttribute = { "AmmoInventoryGameplayAttribute", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3AmmoAttributeWidget, AmmoInventoryGameplayAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_AmmoInventoryGameplayAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_AmmoInventoryGameplayAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_SBZPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AmmoAttributeWidget" },
		{ "ModuleRelativePath", "Public/PD3AmmoAttributeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_SBZPlayerState = { "SBZPlayerState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3AmmoAttributeWidget, SBZPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_SBZPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_SBZPlayerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_AmmoLoadedGameplayAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_AmmoInventoryGameplayAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::NewProp_SBZPlayerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3AmmoAttributeWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::ClassParams = {
		&UPD3AmmoAttributeWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3AmmoAttributeWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3AmmoAttributeWidget, 2354554299);
	template<> STARBREEZE_API UClass* StaticClass<UPD3AmmoAttributeWidget>()
	{
		return UPD3AmmoAttributeWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3AmmoAttributeWidget(Z_Construct_UClass_UPD3AmmoAttributeWidget, &UPD3AmmoAttributeWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3AmmoAttributeWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3AmmoAttributeWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
