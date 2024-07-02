// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3PlaceableStatusWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3PlaceableStatusWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3PlaceableStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3PlaceableStatusWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilityInputActionWidget_NoRegister();
// End Cross Module References
	static FName NAME_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged = FName(TEXT("OnAmmoInventoryChanged"));
	void UPD3PlaceableStatusWidget::OnAmmoInventoryChanged(int32 InAmmoInventory)
	{
		PD3PlaceableStatusWidget_eventOnAmmoInventoryChanged_Parms Parms;
		Parms.InAmmoInventory=InAmmoInventory;
		ProcessEvent(FindFunctionChecked(NAME_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged),&Parms);
	}
	static FName NAME_UPD3PlaceableStatusWidget_OnIconChanged = FName(TEXT("OnIconChanged"));
	void UPD3PlaceableStatusWidget::OnIconChanged(TSoftObjectPtr<UPaperSprite> const& InIcon)
	{
		PD3PlaceableStatusWidget_eventOnIconChanged_Parms Parms;
		Parms.InIcon=InIcon;
		ProcessEvent(FindFunctionChecked(NAME_UPD3PlaceableStatusWidget_OnIconChanged),&Parms);
	}
	void UPD3PlaceableStatusWidget::StaticRegisterNativesUPD3PlaceableStatusWidget()
	{
	}
	struct Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAmmoInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged_Statics::NewProp_InAmmoInventory = { "InAmmoInventory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3PlaceableStatusWidget_eventOnAmmoInventoryChanged_Parms, InAmmoInventory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged_Statics::NewProp_InAmmoInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3PlaceableStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3PlaceableStatusWidget, nullptr, "OnAmmoInventoryChanged", nullptr, nullptr, sizeof(PD3PlaceableStatusWidget_eventOnAmmoInventoryChanged_Parms), Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics::NewProp_InIcon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics::NewProp_InIcon = { "InIcon", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3PlaceableStatusWidget_eventOnIconChanged_Parms, InIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics::NewProp_InIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics::NewProp_InIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics::NewProp_InIcon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3PlaceableStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3PlaceableStatusWidget, nullptr, "OnIconChanged", nullptr, nullptr, sizeof(PD3PlaceableStatusWidget_eventOnIconChanged_Parms), Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3PlaceableStatusWidget_NoRegister()
	{
		return UPD3PlaceableStatusWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasValidPlaceableIndex_MetaData[];
#endif
		static void NewProp_bHasValidPlaceableIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasValidPlaceableIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlaceableIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentPlaceableIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatePawnWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnAmmoInventoryChanged, "OnAmmoInventoryChanged" }, // 3300674136
		{ &Z_Construct_UFunction_UPD3PlaceableStatusWidget_OnIconChanged, "OnIconChanged" }, // 2183182105
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3PlaceableStatusWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3PlaceableStatusWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_Widget_AbilityAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlaceableStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3PlaceableStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_Widget_AbilityAction = { "Widget_AbilityAction", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3PlaceableStatusWidget, Widget_AbilityAction), Z_Construct_UClass_USBZAbilityInputActionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_Widget_AbilityAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_Widget_AbilityAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_bHasValidPlaceableIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlaceableStatusWidget" },
		{ "ModuleRelativePath", "Public/PD3PlaceableStatusWidget.h" },
	};
#endif
	void Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_bHasValidPlaceableIndex_SetBit(void* Obj)
	{
		((UPD3PlaceableStatusWidget*)Obj)->bHasValidPlaceableIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_bHasValidPlaceableIndex = { "bHasValidPlaceableIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPD3PlaceableStatusWidget), &Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_bHasValidPlaceableIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_bHasValidPlaceableIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_bHasValidPlaceableIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_CurrentPlaceableIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlaceableStatusWidget" },
		{ "ModuleRelativePath", "Public/PD3PlaceableStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_CurrentPlaceableIndex = { "CurrentPlaceableIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3PlaceableStatusWidget, CurrentPlaceableIndex), METADATA_PARAMS(Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_CurrentPlaceableIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_CurrentPlaceableIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_AmmoInventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlaceableStatusWidget" },
		{ "ModuleRelativePath", "Public/PD3PlaceableStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_AmmoInventory = { "AmmoInventory", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3PlaceableStatusWidget, AmmoInventory), METADATA_PARAMS(Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_AmmoInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_AmmoInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_Widget_AbilityAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_bHasValidPlaceableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_CurrentPlaceableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::NewProp_AmmoInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3PlaceableStatusWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::ClassParams = {
		&UPD3PlaceableStatusWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3PlaceableStatusWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3PlaceableStatusWidget, 1443256242);
	template<> STARBREEZE_API UClass* StaticClass<UPD3PlaceableStatusWidget>()
	{
		return UPD3PlaceableStatusWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3PlaceableStatusWidget(Z_Construct_UClass_UPD3PlaceableStatusWidget, &UPD3PlaceableStatusWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3PlaceableStatusWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3PlaceableStatusWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
