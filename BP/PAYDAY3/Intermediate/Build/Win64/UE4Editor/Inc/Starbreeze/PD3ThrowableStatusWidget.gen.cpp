// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3ThrowableStatusWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3ThrowableStatusWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3ThrowableStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3ThrowableStatusWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilityInputActionWidget_NoRegister();
// End Cross Module References
	static FName NAME_UPD3ThrowableStatusWidget_OnAmmoAdded = FName(TEXT("OnAmmoAdded"));
	void UPD3ThrowableStatusWidget::OnAmmoAdded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPD3ThrowableStatusWidget_OnAmmoAdded),NULL);
	}
	static FName NAME_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged = FName(TEXT("OnAmmoInventoryChanged"));
	void UPD3ThrowableStatusWidget::OnAmmoInventoryChanged(int32 InAmmoInventory)
	{
		PD3ThrowableStatusWidget_eventOnAmmoInventoryChanged_Parms Parms;
		Parms.InAmmoInventory=InAmmoInventory;
		ProcessEvent(FindFunctionChecked(NAME_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged),&Parms);
	}
	static FName NAME_UPD3ThrowableStatusWidget_OnIconChanged = FName(TEXT("OnIconChanged"));
	void UPD3ThrowableStatusWidget::OnIconChanged(TSoftObjectPtr<UPaperSprite> const& InIcon)
	{
		PD3ThrowableStatusWidget_eventOnIconChanged_Parms Parms;
		Parms.InIcon=InIcon;
		ProcessEvent(FindFunctionChecked(NAME_UPD3ThrowableStatusWidget_OnIconChanged),&Parms);
	}
	void UPD3ThrowableStatusWidget::StaticRegisterNativesUPD3ThrowableStatusWidget()
	{
	}
	struct Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3ThrowableStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3ThrowableStatusWidget, nullptr, "OnAmmoAdded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAmmoInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged_Statics::NewProp_InAmmoInventory = { "InAmmoInventory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3ThrowableStatusWidget_eventOnAmmoInventoryChanged_Parms, InAmmoInventory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged_Statics::NewProp_InAmmoInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3ThrowableStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3ThrowableStatusWidget, nullptr, "OnAmmoInventoryChanged", nullptr, nullptr, sizeof(PD3ThrowableStatusWidget_eventOnAmmoInventoryChanged_Parms), Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_InIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics::NewProp_InIcon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics::NewProp_InIcon = { "InIcon", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3ThrowableStatusWidget_eventOnIconChanged_Parms, InIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics::NewProp_InIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics::NewProp_InIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics::NewProp_InIcon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3ThrowableStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3ThrowableStatusWidget, nullptr, "OnIconChanged", nullptr, nullptr, sizeof(PD3ThrowableStatusWidget_eventOnIconChanged_Parms), Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3ThrowableStatusWidget_NoRegister()
	{
		return UPD3ThrowableStatusWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_AbilityAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_AbilityAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasValidThrowableIndex_MetaData[];
#endif
		static void NewProp_bHasValidThrowableIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasValidThrowableIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentThrowableIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentThrowableIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatePawnWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoAdded, "OnAmmoAdded" }, // 863557953
		{ &Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnAmmoInventoryChanged, "OnAmmoInventoryChanged" }, // 1234578824
		{ &Z_Construct_UFunction_UPD3ThrowableStatusWidget_OnIconChanged, "OnIconChanged" }, // 128475290
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3ThrowableStatusWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3ThrowableStatusWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_Widget_AbilityAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ThrowableStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3ThrowableStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_Widget_AbilityAction = { "Widget_AbilityAction", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3ThrowableStatusWidget, Widget_AbilityAction), Z_Construct_UClass_USBZAbilityInputActionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_Widget_AbilityAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_Widget_AbilityAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_bHasValidThrowableIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ThrowableStatusWidget" },
		{ "ModuleRelativePath", "Public/PD3ThrowableStatusWidget.h" },
	};
#endif
	void Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_bHasValidThrowableIndex_SetBit(void* Obj)
	{
		((UPD3ThrowableStatusWidget*)Obj)->bHasValidThrowableIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_bHasValidThrowableIndex = { "bHasValidThrowableIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPD3ThrowableStatusWidget), &Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_bHasValidThrowableIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_bHasValidThrowableIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_bHasValidThrowableIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_CurrentThrowableIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ThrowableStatusWidget" },
		{ "ModuleRelativePath", "Public/PD3ThrowableStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_CurrentThrowableIndex = { "CurrentThrowableIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3ThrowableStatusWidget, CurrentThrowableIndex), METADATA_PARAMS(Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_CurrentThrowableIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_CurrentThrowableIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_AmmoInventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ThrowableStatusWidget" },
		{ "ModuleRelativePath", "Public/PD3ThrowableStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_AmmoInventory = { "AmmoInventory", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3ThrowableStatusWidget, AmmoInventory), METADATA_PARAMS(Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_AmmoInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_AmmoInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_Widget_AbilityAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_bHasValidThrowableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_CurrentThrowableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::NewProp_AmmoInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3ThrowableStatusWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::ClassParams = {
		&UPD3ThrowableStatusWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3ThrowableStatusWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3ThrowableStatusWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3ThrowableStatusWidget, 2224743962);
	template<> STARBREEZE_API UClass* StaticClass<UPD3ThrowableStatusWidget>()
	{
		return UPD3ThrowableStatusWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3ThrowableStatusWidget(Z_Construct_UClass_UPD3ThrowableStatusWidget, &UPD3ThrowableStatusWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3ThrowableStatusWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3ThrowableStatusWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
