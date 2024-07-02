// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HUDPlayerStatusWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HUDPlayerStatusWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPlayerStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPlayerStatusWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStateWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStateWidgetBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3WeaponStatusWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3DefeatTimerWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPlayerCarryWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3ReviveInteractionWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReticleWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3ThrowableStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3PlaceableStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3ToolStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDRoomStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractionWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3DetectionMeterContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3KeyItemContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEffectContainer_NoRegister();
// End Cross Module References
	static FName NAME_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged = FName(TEXT("OnInfamyLevelChanged"));
	void UPD3HUDPlayerStatusWidget::OnInfamyLevelChanged(ASBZPlayerState* InPlayerState)
	{
		PD3HUDPlayerStatusWidget_eventOnInfamyLevelChanged_Parms Parms;
		Parms.InPlayerState=InPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged),&Parms);
	}
	static FName NAME_UPD3HUDPlayerStatusWidget_OnPlatformChanged = FName(TEXT("OnPlatformChanged"));
	void UPD3HUDPlayerStatusWidget::OnPlatformChanged(ASBZPlayerState* InPlayerState)
	{
		PD3HUDPlayerStatusWidget_eventOnPlatformChanged_Parms Parms;
		Parms.InPlayerState=InPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDPlayerStatusWidget_OnPlatformChanged),&Parms);
	}
	void UPD3HUDPlayerStatusWidget::StaticRegisterNativesUPD3HUDPlayerStatusWidget()
	{
	}
	struct Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged_Statics::NewProp_InPlayerState = { "InPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDPlayerStatusWidget_eventOnInfamyLevelChanged_Parms, InPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged_Statics::NewProp_InPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDPlayerStatusWidget, nullptr, "OnInfamyLevelChanged", nullptr, nullptr, sizeof(PD3HUDPlayerStatusWidget_eventOnInfamyLevelChanged_Parms), Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnPlatformChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnPlatformChanged_Statics::NewProp_InPlayerState = { "InPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDPlayerStatusWidget_eventOnPlatformChanged_Parms, InPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnPlatformChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnPlatformChanged_Statics::NewProp_InPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnPlatformChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnPlatformChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDPlayerStatusWidget, nullptr, "OnPlatformChanged", nullptr, nullptr, sizeof(PD3HUDPlayerStatusWidget_eventOnPlatformChanged_Parms), Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnPlatformChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnPlatformChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnPlatformChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnPlatformChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnPlatformChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnPlatformChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3HUDPlayerStatusWidget_NoRegister()
	{
		return UPD3HUDPlayerStatusWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_CombinedHealthBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_CombinedHealthBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_DownedCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_DownedCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_PrimaryWeaponAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_PrimaryWeaponAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_SecondaryWeaponAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_SecondaryWeaponAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_OverkillWeaponAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_OverkillWeaponAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_PlayerIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_PlayerIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_PlayerDefeatState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_PlayerDefeatState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_DefeatTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_DefeatTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_CarryStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_CarryStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_Revive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_Revive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_Reticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_Reticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_Throwable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_Throwable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_RequestOverkillWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_RequestOverkillWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_Placeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_Placeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_ToolStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_ToolStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_RoomStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_RoomStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_Interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_Interaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_DetectionMeterContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_DetectionMeterContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_KeyItemContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_KeyItemContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_CharacterEffectsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_CharacterEffectsContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStateWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnInfamyLevelChanged, "OnInfamyLevelChanged" }, // 379486100
		{ &Z_Construct_UFunction_UPD3HUDPlayerStatusWidget_OnPlatformChanged, "OnPlatformChanged" }, // 823678931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3HUDPlayerStatusWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CombinedHealthBar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CombinedHealthBar = { "Widget_CombinedHealthBar", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_CombinedHealthBar), Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CombinedHealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CombinedHealthBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DownedCounter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DownedCounter = { "Widget_DownedCounter", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_DownedCounter), Z_Construct_UClass_USBZPlayerStateWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DownedCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DownedCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_PrimaryWeaponAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_PrimaryWeaponAmmo = { "Widget_PrimaryWeaponAmmo", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_PrimaryWeaponAmmo), Z_Construct_UClass_UPD3WeaponStatusWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_PrimaryWeaponAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_PrimaryWeaponAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_SecondaryWeaponAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_SecondaryWeaponAmmo = { "Widget_SecondaryWeaponAmmo", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_SecondaryWeaponAmmo), Z_Construct_UClass_UPD3WeaponStatusWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_SecondaryWeaponAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_SecondaryWeaponAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_OverkillWeaponAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_OverkillWeaponAmmo = { "Widget_OverkillWeaponAmmo", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_OverkillWeaponAmmo), Z_Construct_UClass_UPD3WeaponStatusWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_OverkillWeaponAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_OverkillWeaponAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Image_PlayerIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Image_PlayerIcon = { "Image_PlayerIcon", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Image_PlayerIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Image_PlayerIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Image_PlayerIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Text_PlayerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Text_PlayerName = { "Text_PlayerName", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Text_PlayerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Text_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Text_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_PlayerDefeatState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_PlayerDefeatState = { "Widget_PlayerDefeatState", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_PlayerDefeatState), Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_PlayerDefeatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_PlayerDefeatState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DefeatTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DefeatTimer = { "Widget_DefeatTimer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_DefeatTimer), Z_Construct_UClass_UPD3DefeatTimerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DefeatTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DefeatTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CarryStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CarryStatus = { "Widget_CarryStatus", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_CarryStatus), Z_Construct_UClass_UPD3HUDPlayerCarryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CarryStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CarryStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Revive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Revive = { "Widget_Revive", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_Revive), Z_Construct_UClass_UPD3ReviveInteractionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Revive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Revive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Reticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Reticle = { "Widget_Reticle", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_Reticle), Z_Construct_UClass_USBZReticleWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Reticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Reticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Throwable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Throwable = { "Widget_Throwable", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_Throwable), Z_Construct_UClass_UPD3ThrowableStatusWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Throwable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Throwable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_RequestOverkillWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_RequestOverkillWeapon = { "Widget_RequestOverkillWeapon", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_RequestOverkillWeapon), Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_RequestOverkillWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_RequestOverkillWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Placeable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Placeable = { "Widget_Placeable", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_Placeable), Z_Construct_UClass_UPD3PlaceableStatusWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Placeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Placeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_ToolStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_ToolStatus = { "Widget_ToolStatus", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_ToolStatus), Z_Construct_UClass_UPD3ToolStatusWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_ToolStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_ToolStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_RoomStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_RoomStatus = { "Widget_RoomStatus", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_RoomStatus), Z_Construct_UClass_UPD3HUDRoomStatusWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_RoomStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_RoomStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Interaction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Interaction = { "Widget_Interaction", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_Interaction), Z_Construct_UClass_USBZInteractionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Interaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DetectionMeterContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DetectionMeterContainer = { "Widget_DetectionMeterContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_DetectionMeterContainer), Z_Construct_UClass_UPD3DetectionMeterContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DetectionMeterContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DetectionMeterContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_KeyItemContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_KeyItemContainer = { "Widget_KeyItemContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_KeyItemContainer), Z_Construct_UClass_UPD3KeyItemContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_KeyItemContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_KeyItemContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CharacterEffectsContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CharacterEffectsContainer = { "Widget_CharacterEffectsContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_CharacterEffectsContainer), Z_Construct_UClass_USBZCharacterEffectContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CharacterEffectsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CharacterEffectsContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CombinedHealthBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DownedCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_PrimaryWeaponAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_SecondaryWeaponAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_OverkillWeaponAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Image_PlayerIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Text_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_PlayerDefeatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DefeatTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CarryStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Revive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Reticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Throwable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_RequestOverkillWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Placeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_ToolStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_RoomStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_Interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_DetectionMeterContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_KeyItemContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::NewProp_Widget_CharacterEffectsContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3HUDPlayerStatusWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::ClassParams = {
		&UPD3HUDPlayerStatusWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3HUDPlayerStatusWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3HUDPlayerStatusWidget, 3743822172);
	template<> STARBREEZE_API UClass* StaticClass<UPD3HUDPlayerStatusWidget>()
	{
		return UPD3HUDPlayerStatusWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3HUDPlayerStatusWidget(Z_Construct_UClass_UPD3HUDPlayerStatusWidget, &UPD3HUDPlayerStatusWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3HUDPlayerStatusWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3HUDPlayerStatusWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
