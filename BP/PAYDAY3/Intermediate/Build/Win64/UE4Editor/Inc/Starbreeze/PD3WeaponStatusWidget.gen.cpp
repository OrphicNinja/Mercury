// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3WeaponStatusWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3WeaponStatusWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3WeaponStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3WeaponStatusWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3AmmoState();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCombinedReloadState();
// End Cross Module References
	static FName NAME_UPD3WeaponStatusWidget_OnAmmoAdded = FName(TEXT("OnAmmoAdded"));
	void UPD3WeaponStatusWidget::OnAmmoAdded(int32 AmmoAddedCount)
	{
		PD3WeaponStatusWidget_eventOnAmmoAdded_Parms Parms;
		Parms.AmmoAddedCount=AmmoAddedCount;
		ProcessEvent(FindFunctionChecked(NAME_UPD3WeaponStatusWidget_OnAmmoAdded),&Parms);
	}
	static FName NAME_UPD3WeaponStatusWidget_OnAmmoInventoryChanged = FName(TEXT("OnAmmoInventoryChanged"));
	void UPD3WeaponStatusWidget::OnAmmoInventoryChanged(int32 AmmoInventoryChanged)
	{
		PD3WeaponStatusWidget_eventOnAmmoInventoryChanged_Parms Parms;
		Parms.AmmoInventoryChanged=AmmoInventoryChanged;
		ProcessEvent(FindFunctionChecked(NAME_UPD3WeaponStatusWidget_OnAmmoInventoryChanged),&Parms);
	}
	static FName NAME_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged = FName(TEXT("OnAmmoInventoryStateChanged"));
	void UPD3WeaponStatusWidget::OnAmmoInventoryStateChanged(EPD3AmmoState NewState)
	{
		PD3WeaponStatusWidget_eventOnAmmoInventoryStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged),&Parms);
	}
	static FName NAME_UPD3WeaponStatusWidget_OnAmmoLoadedChanged = FName(TEXT("OnAmmoLoadedChanged"));
	void UPD3WeaponStatusWidget::OnAmmoLoadedChanged(int32 AmmoLoadedChanged)
	{
		PD3WeaponStatusWidget_eventOnAmmoLoadedChanged_Parms Parms;
		Parms.AmmoLoadedChanged=AmmoLoadedChanged;
		ProcessEvent(FindFunctionChecked(NAME_UPD3WeaponStatusWidget_OnAmmoLoadedChanged),&Parms);
	}
	static FName NAME_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged = FName(TEXT("OnAmmoLoadedStateChanged"));
	void UPD3WeaponStatusWidget::OnAmmoLoadedStateChanged(EPD3AmmoState NewState)
	{
		PD3WeaponStatusWidget_eventOnAmmoLoadedStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged),&Parms);
	}
	static FName NAME_UPD3WeaponStatusWidget_OnAmmoTotalChanged = FName(TEXT("OnAmmoTotalChanged"));
	void UPD3WeaponStatusWidget::OnAmmoTotalChanged(int32 AmmoTotalChanged)
	{
		PD3WeaponStatusWidget_eventOnAmmoTotalChanged_Parms Parms;
		Parms.AmmoTotalChanged=AmmoTotalChanged;
		ProcessEvent(FindFunctionChecked(NAME_UPD3WeaponStatusWidget_OnAmmoTotalChanged),&Parms);
	}
	static FName NAME_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged = FName(TEXT("OnAmmoTotalStateChanged"));
	void UPD3WeaponStatusWidget::OnAmmoTotalStateChanged(EPD3AmmoState NewState)
	{
		PD3WeaponStatusWidget_eventOnAmmoTotalStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged),&Parms);
	}
	static FName NAME_UPD3WeaponStatusWidget_OnAmmoValuesInitialized = FName(TEXT("OnAmmoValuesInitialized"));
	void UPD3WeaponStatusWidget::OnAmmoValuesInitialized(int32 AmmoLoadedInit, int32 AmmoInventoryInit, int32 AmmoTotalInit)
	{
		PD3WeaponStatusWidget_eventOnAmmoValuesInitialized_Parms Parms;
		Parms.AmmoLoadedInit=AmmoLoadedInit;
		Parms.AmmoInventoryInit=AmmoInventoryInit;
		Parms.AmmoTotalInit=AmmoTotalInit;
		ProcessEvent(FindFunctionChecked(NAME_UPD3WeaponStatusWidget_OnAmmoValuesInitialized),&Parms);
	}
	static FName NAME_UPD3WeaponStatusWidget_OnEquippedChanged = FName(TEXT("OnEquippedChanged"));
	void UPD3WeaponStatusWidget::OnEquippedChanged(bool bIsEquippedNewValue)
	{
		PD3WeaponStatusWidget_eventOnEquippedChanged_Parms Parms;
		Parms.bIsEquippedNewValue=bIsEquippedNewValue ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPD3WeaponStatusWidget_OnEquippedChanged),&Parms);
	}
	static FName NAME_UPD3WeaponStatusWidget_OnReloadStateChanged = FName(TEXT("OnReloadStateChanged"));
	void UPD3WeaponStatusWidget::OnReloadStateChanged(FSBZCombinedReloadState const& OldCombinedState, FSBZCombinedReloadState const& NewCombinedState, bool bWasPlaying, bool bIsPlaying)
	{
		PD3WeaponStatusWidget_eventOnReloadStateChanged_Parms Parms;
		Parms.OldCombinedState=OldCombinedState;
		Parms.NewCombinedState=NewCombinedState;
		Parms.bWasPlaying=bWasPlaying ? true : false;
		Parms.bIsPlaying=bIsPlaying ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPD3WeaponStatusWidget_OnReloadStateChanged),&Parms);
	}
	void UPD3WeaponStatusWidget::StaticRegisterNativesUPD3WeaponStatusWidget()
	{
	}
	struct Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoAdded_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoAddedCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoAdded_Statics::NewProp_AmmoAddedCount = { "AmmoAddedCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3WeaponStatusWidget_eventOnAmmoAdded_Parms, AmmoAddedCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoAdded_Statics::NewProp_AmmoAddedCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3WeaponStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3WeaponStatusWidget, nullptr, "OnAmmoAdded", nullptr, nullptr, sizeof(PD3WeaponStatusWidget_eventOnAmmoAdded_Parms), Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoInventoryChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryChanged_Statics::NewProp_AmmoInventoryChanged = { "AmmoInventoryChanged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3WeaponStatusWidget_eventOnAmmoInventoryChanged_Parms, AmmoInventoryChanged), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryChanged_Statics::NewProp_AmmoInventoryChanged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3WeaponStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3WeaponStatusWidget, nullptr, "OnAmmoInventoryChanged", nullptr, nullptr, sizeof(PD3WeaponStatusWidget_eventOnAmmoInventoryChanged_Parms), Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3WeaponStatusWidget_eventOnAmmoInventoryStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3AmmoState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3WeaponStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3WeaponStatusWidget, nullptr, "OnAmmoInventoryStateChanged", nullptr, nullptr, sizeof(PD3WeaponStatusWidget_eventOnAmmoInventoryStateChanged_Parms), Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoLoadedChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedChanged_Statics::NewProp_AmmoLoadedChanged = { "AmmoLoadedChanged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3WeaponStatusWidget_eventOnAmmoLoadedChanged_Parms, AmmoLoadedChanged), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedChanged_Statics::NewProp_AmmoLoadedChanged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3WeaponStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3WeaponStatusWidget, nullptr, "OnAmmoLoadedChanged", nullptr, nullptr, sizeof(PD3WeaponStatusWidget_eventOnAmmoLoadedChanged_Parms), Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3WeaponStatusWidget_eventOnAmmoLoadedStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3AmmoState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3WeaponStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3WeaponStatusWidget, nullptr, "OnAmmoLoadedStateChanged", nullptr, nullptr, sizeof(PD3WeaponStatusWidget_eventOnAmmoLoadedStateChanged_Parms), Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoTotalChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalChanged_Statics::NewProp_AmmoTotalChanged = { "AmmoTotalChanged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3WeaponStatusWidget_eventOnAmmoTotalChanged_Parms, AmmoTotalChanged), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalChanged_Statics::NewProp_AmmoTotalChanged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3WeaponStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3WeaponStatusWidget, nullptr, "OnAmmoTotalChanged", nullptr, nullptr, sizeof(PD3WeaponStatusWidget_eventOnAmmoTotalChanged_Parms), Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3WeaponStatusWidget_eventOnAmmoTotalStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3AmmoState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3WeaponStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3WeaponStatusWidget, nullptr, "OnAmmoTotalStateChanged", nullptr, nullptr, sizeof(PD3WeaponStatusWidget_eventOnAmmoTotalStateChanged_Parms), Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoLoadedInit;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoInventoryInit;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoTotalInit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::NewProp_AmmoLoadedInit = { "AmmoLoadedInit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3WeaponStatusWidget_eventOnAmmoValuesInitialized_Parms, AmmoLoadedInit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::NewProp_AmmoInventoryInit = { "AmmoInventoryInit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3WeaponStatusWidget_eventOnAmmoValuesInitialized_Parms, AmmoInventoryInit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::NewProp_AmmoTotalInit = { "AmmoTotalInit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3WeaponStatusWidget_eventOnAmmoValuesInitialized_Parms, AmmoTotalInit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::NewProp_AmmoLoadedInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::NewProp_AmmoInventoryInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::NewProp_AmmoTotalInit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3WeaponStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3WeaponStatusWidget, nullptr, "OnAmmoValuesInitialized", nullptr, nullptr, sizeof(PD3WeaponStatusWidget_eventOnAmmoValuesInitialized_Parms), Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged_Statics
	{
		static void NewProp_bIsEquippedNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEquippedNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged_Statics::NewProp_bIsEquippedNewValue_SetBit(void* Obj)
	{
		((PD3WeaponStatusWidget_eventOnEquippedChanged_Parms*)Obj)->bIsEquippedNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged_Statics::NewProp_bIsEquippedNewValue = { "bIsEquippedNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3WeaponStatusWidget_eventOnEquippedChanged_Parms), &Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged_Statics::NewProp_bIsEquippedNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged_Statics::NewProp_bIsEquippedNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3WeaponStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3WeaponStatusWidget, nullptr, "OnEquippedChanged", nullptr, nullptr, sizeof(PD3WeaponStatusWidget_eventOnEquippedChanged_Parms), Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldCombinedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCombinedState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCombinedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCombinedState;
		static void NewProp_bWasPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasPlaying;
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_OldCombinedState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_OldCombinedState = { "OldCombinedState", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3WeaponStatusWidget_eventOnReloadStateChanged_Parms, OldCombinedState), Z_Construct_UScriptStruct_FSBZCombinedReloadState, METADATA_PARAMS(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_OldCombinedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_OldCombinedState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_NewCombinedState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_NewCombinedState = { "NewCombinedState", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3WeaponStatusWidget_eventOnReloadStateChanged_Parms, NewCombinedState), Z_Construct_UScriptStruct_FSBZCombinedReloadState, METADATA_PARAMS(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_NewCombinedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_NewCombinedState_MetaData)) };
	void Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_bWasPlaying_SetBit(void* Obj)
	{
		((PD3WeaponStatusWidget_eventOnReloadStateChanged_Parms*)Obj)->bWasPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_bWasPlaying = { "bWasPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3WeaponStatusWidget_eventOnReloadStateChanged_Parms), &Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_bWasPlaying_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((PD3WeaponStatusWidget_eventOnReloadStateChanged_Parms*)Obj)->bIsPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3WeaponStatusWidget_eventOnReloadStateChanged_Parms), &Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_OldCombinedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_NewCombinedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_bWasPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::NewProp_bIsPlaying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3WeaponStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3WeaponStatusWidget, nullptr, "OnReloadStateChanged", nullptr, nullptr, sizeof(PD3WeaponStatusWidget_eventOnReloadStateChanged_Parms), Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3WeaponStatusWidget_NoRegister()
	{
		return UPD3WeaponStatusWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3WeaponStatusWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatePawnWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoAdded, "OnAmmoAdded" }, // 2279755956
		{ &Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryChanged, "OnAmmoInventoryChanged" }, // 2294931426
		{ &Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoInventoryStateChanged, "OnAmmoInventoryStateChanged" }, // 154241371
		{ &Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedChanged, "OnAmmoLoadedChanged" }, // 3540725958
		{ &Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoLoadedStateChanged, "OnAmmoLoadedStateChanged" }, // 2283182269
		{ &Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalChanged, "OnAmmoTotalChanged" }, // 447538143
		{ &Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoTotalStateChanged, "OnAmmoTotalStateChanged" }, // 4002074847
		{ &Z_Construct_UFunction_UPD3WeaponStatusWidget_OnAmmoValuesInitialized, "OnAmmoValuesInitialized" }, // 956015616
		{ &Z_Construct_UFunction_UPD3WeaponStatusWidget_OnEquippedChanged, "OnEquippedChanged" }, // 822275525
		{ &Z_Construct_UFunction_UPD3WeaponStatusWidget_OnReloadStateChanged, "OnReloadStateChanged" }, // 2891959496
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3WeaponStatusWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3WeaponStatusWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::NewProp_WeaponIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3WeaponStatusWidget" },
		{ "ModuleRelativePath", "Public/PD3WeaponStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3WeaponStatusWidget, WeaponIndex), METADATA_PARAMS(Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::NewProp_WeaponIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::NewProp_WeaponIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::NewProp_WeaponIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3WeaponStatusWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::ClassParams = {
		&UPD3WeaponStatusWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3WeaponStatusWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3WeaponStatusWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3WeaponStatusWidget, 2154860373);
	template<> STARBREEZE_API UClass* StaticClass<UPD3WeaponStatusWidget>()
	{
		return UPD3WeaponStatusWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3WeaponStatusWidget(Z_Construct_UClass_UPD3WeaponStatusWidget, &UPD3WeaponStatusWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3WeaponStatusWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3WeaponStatusWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
