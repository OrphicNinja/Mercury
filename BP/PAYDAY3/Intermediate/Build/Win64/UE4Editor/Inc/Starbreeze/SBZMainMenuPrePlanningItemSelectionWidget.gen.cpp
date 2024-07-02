// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuPrePlanningItemSelectionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuPrePlanningItemSelectionWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetData_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerInventory_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuPrePlanningItemSelectionWidget::execNativeOnPrePlanningItemButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnPrePlanningItemButtonSelected(Z_Param_InButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlanningItemSelectionWidget::execNativePreplanningAssetAddedByPlayer)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerID);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetSku);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativePreplanningAssetAddedByPlayer(Z_Param_Out_PlayerID,Z_Param_AssetSku);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlanningItemSelectionWidget::execNativePreplanningAssetRemovedByPlayer)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativePreplanningAssetRemovedByPlayer(Z_Param_Out_PlayerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlanningItemSelectionWidget::execSetPreplanningSelectionEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreplanningSelectionEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlanningItemSelectionWidget::execUpdateAvailablePrePlanningAssetList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAvailablePrePlanningAssetList();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer = FName(TEXT("OnPreplanningAssetAddedByPlayer"));
	void USBZMainMenuPrePlanningItemSelectionWidget::OnPreplanningAssetAddedByPlayer(FUniqueNetIdRepl const& PlayerID, const USBZPreplanningAssetData* PreplanningAsset)
	{
		SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningAssetAddedByPlayer_Parms Parms;
		Parms.PlayerID=PlayerID;
		Parms.PreplanningAsset=PreplanningAsset;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer),&Parms);
	}
	static FName NAME_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetDeclinedByServer = FName(TEXT("OnPreplanningAssetDeclinedByServer"));
	void USBZMainMenuPrePlanningItemSelectionWidget::OnPreplanningAssetDeclinedByServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetDeclinedByServer),NULL);
	}
	static FName NAME_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer = FName(TEXT("OnPreplanningAssetRemovedByPlayer"));
	void USBZMainMenuPrePlanningItemSelectionWidget::OnPreplanningAssetRemovedByPlayer(FUniqueNetIdRepl const& PlayerID)
	{
		SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningAssetRemovedByPlayer_Parms Parms;
		Parms.PlayerID=PlayerID;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer),&Parms);
	}
	static FName NAME_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused = FName(TEXT("OnPrePlanningItemButtonFocused"));
	void USBZMainMenuPrePlanningItemSelectionWidget::OnPrePlanningItemButtonFocused(USBZMenuButton* InButton, bool bIsFocused)
	{
		SBZMainMenuPrePlanningItemSelectionWidget_eventOnPrePlanningItemButtonFocused_Parms Parms;
		Parms.InButton=InButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused),&Parms);
	}
	static FName NAME_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged = FName(TEXT("OnPreplanningSelectionEnabledChanged"));
	void USBZMainMenuPrePlanningItemSelectionWidget::OnPreplanningSelectionEnabledChanged(bool bEnabled)
	{
		SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningSelectionEnabledChanged_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged),&Parms);
	}
	void USBZMainMenuPrePlanningItemSelectionWidget::StaticRegisterNativesUSBZMainMenuPrePlanningItemSelectionWidget()
	{
		UClass* Class = USBZMainMenuPrePlanningItemSelectionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeOnPrePlanningItemButtonSelected", &USBZMainMenuPrePlanningItemSelectionWidget::execNativeOnPrePlanningItemButtonSelected },
			{ "NativePreplanningAssetAddedByPlayer", &USBZMainMenuPrePlanningItemSelectionWidget::execNativePreplanningAssetAddedByPlayer },
			{ "NativePreplanningAssetRemovedByPlayer", &USBZMainMenuPrePlanningItemSelectionWidget::execNativePreplanningAssetRemovedByPlayer },
			{ "SetPreplanningSelectionEnabled", &USBZMainMenuPrePlanningItemSelectionWidget::execSetPreplanningSelectionEnabled },
			{ "UpdateAvailablePrePlanningAssetList", &USBZMainMenuPrePlanningItemSelectionWidget::execUpdateAvailablePrePlanningAssetList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics
	{
		struct SBZMainMenuPrePlanningItemSelectionWidget_eventNativeOnPrePlanningItemButtonSelected_Parms
		{
			USBZMenuButton* InButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics::NewProp_InButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics::NewProp_InButton = { "InButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlanningItemSelectionWidget_eventNativeOnPrePlanningItemButtonSelected_Parms, InButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics::NewProp_InButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics::NewProp_InButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics::NewProp_InButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget, nullptr, "NativeOnPrePlanningItemButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningItemSelectionWidget_eventNativeOnPrePlanningItemButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics
	{
		struct SBZMainMenuPrePlanningItemSelectionWidget_eventNativePreplanningAssetAddedByPlayer_Parms
		{
			FUniqueNetIdRepl PlayerID;
			FString AssetSku;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetSku;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::NewProp_PlayerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlanningItemSelectionWidget_eventNativePreplanningAssetAddedByPlayer_Parms, PlayerID), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::NewProp_PlayerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::NewProp_PlayerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::NewProp_AssetSku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::NewProp_AssetSku = { "AssetSku", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlanningItemSelectionWidget_eventNativePreplanningAssetAddedByPlayer_Parms, AssetSku), METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::NewProp_AssetSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::NewProp_AssetSku_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::NewProp_PlayerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::NewProp_AssetSku,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget, nullptr, "NativePreplanningAssetAddedByPlayer", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningItemSelectionWidget_eventNativePreplanningAssetAddedByPlayer_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics
	{
		struct SBZMainMenuPrePlanningItemSelectionWidget_eventNativePreplanningAssetRemovedByPlayer_Parms
		{
			FUniqueNetIdRepl PlayerID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics::NewProp_PlayerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlanningItemSelectionWidget_eventNativePreplanningAssetRemovedByPlayer_Parms, PlayerID), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics::NewProp_PlayerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics::NewProp_PlayerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics::NewProp_PlayerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget, nullptr, "NativePreplanningAssetRemovedByPlayer", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningItemSelectionWidget_eventNativePreplanningAssetRemovedByPlayer_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreplanningAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreplanningAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::NewProp_PlayerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningAssetAddedByPlayer_Parms, PlayerID), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::NewProp_PlayerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::NewProp_PlayerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::NewProp_PreplanningAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::NewProp_PreplanningAsset = { "PreplanningAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningAssetAddedByPlayer_Parms, PreplanningAsset), Z_Construct_UClass_USBZPreplanningAssetData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::NewProp_PreplanningAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::NewProp_PreplanningAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::NewProp_PlayerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::NewProp_PreplanningAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget, nullptr, "OnPreplanningAssetAddedByPlayer", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningAssetAddedByPlayer_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetDeclinedByServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetDeclinedByServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetDeclinedByServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget, nullptr, "OnPreplanningAssetDeclinedByServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetDeclinedByServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetDeclinedByServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetDeclinedByServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetDeclinedByServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics::NewProp_PlayerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningAssetRemovedByPlayer_Parms, PlayerID), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics::NewProp_PlayerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics::NewProp_PlayerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics::NewProp_PlayerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget, nullptr, "OnPreplanningAssetRemovedByPlayer", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningAssetRemovedByPlayer_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InButton;
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::NewProp_InButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::NewProp_InButton = { "InButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlanningItemSelectionWidget_eventOnPrePlanningItemButtonFocused_Parms, InButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::NewProp_InButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::NewProp_InButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuPrePlanningItemSelectionWidget_eventOnPrePlanningItemButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuPrePlanningItemSelectionWidget_eventOnPrePlanningItemButtonFocused_Parms), &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::NewProp_InButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget, nullptr, "OnPrePlanningItemButtonFocused", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningItemSelectionWidget_eventOnPrePlanningItemButtonFocused_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningSelectionEnabledChanged_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningSelectionEnabledChanged_Parms), &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget, nullptr, "OnPreplanningSelectionEnabledChanged", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningSelectionEnabledChanged_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled_Statics
	{
		struct SBZMainMenuPrePlanningItemSelectionWidget_eventSetPreplanningSelectionEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZMainMenuPrePlanningItemSelectionWidget_eventSetPreplanningSelectionEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuPrePlanningItemSelectionWidget_eventSetPreplanningSelectionEnabled_Parms), &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget, nullptr, "SetPreplanningSelectionEnabled", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningItemSelectionWidget_eventSetPreplanningSelectionEnabled_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_UpdateAvailablePrePlanningAssetList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_UpdateAvailablePrePlanningAssetList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_UpdateAvailablePrePlanningAssetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget, nullptr, "UpdateAvailablePrePlanningAssetList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_UpdateAvailablePrePlanningAssetList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_UpdateAvailablePrePlanningAssetList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_UpdateAvailablePrePlanningAssetList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_UpdateAvailablePrePlanningAssetList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_NoRegister()
	{
		return USBZMainMenuPrePlanningItemSelectionWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ButtonList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ButtonList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreplanningItemButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PreplanningItemButtonClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActiveMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrePlanningItemButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrePlanningItemButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrePlanningItemButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrePlanningItemButtonPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedPlayerInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativeOnPrePlanningItemButtonSelected, "NativeOnPrePlanningItemButtonSelected" }, // 3480885683
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetAddedByPlayer, "NativePreplanningAssetAddedByPlayer" }, // 2289769493
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_NativePreplanningAssetRemovedByPlayer, "NativePreplanningAssetRemovedByPlayer" }, // 2957752788
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetAddedByPlayer, "OnPreplanningAssetAddedByPlayer" }, // 132895679
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetDeclinedByServer, "OnPreplanningAssetDeclinedByServer" }, // 2299600359
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningAssetRemovedByPlayer, "OnPreplanningAssetRemovedByPlayer" }, // 3300673363
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPrePlanningItemButtonFocused, "OnPrePlanningItemButtonFocused" }, // 2100015868
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_OnPreplanningSelectionEnabledChanged, "OnPreplanningSelectionEnabledChanged" }, // 1108508745
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_SetPreplanningSelectionEnabled, "SetPreplanningSelectionEnabled" }, // 3231488295
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningItemSelectionWidget_UpdateAvailablePrePlanningAssetList, "UpdateAvailablePrePlanningAssetList" }, // 2446192924
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuPrePlanningItemSelectionWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_Panel_ButtonList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlanningItemSelectionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_Panel_ButtonList = { "Panel_ButtonList", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPrePlanningItemSelectionWidget, Panel_ButtonList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_Panel_ButtonList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_Panel_ButtonList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PreplanningItemButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlanningItemSelectionWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PreplanningItemButtonClass = { "PreplanningItemButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPrePlanningItemSelectionWidget, PreplanningItemButtonClass), Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PreplanningItemButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PreplanningItemButtonClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_ActiveMap_ValueProp = { "ActiveMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZPreplanningAssetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_ActiveMap_Key_KeyProp = { "ActiveMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_ActiveMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlanningItemSelectionWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_ActiveMap = { "ActiveMap", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPrePlanningItemSelectionWidget, ActiveMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_ActiveMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_ActiveMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PrePlanningItemButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlanningItemSelectionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PrePlanningItemButtonPool_Inner = { "PrePlanningItemButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PrePlanningItemButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PrePlanningItemButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PrePlanningItemButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlanningItemSelectionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PrePlanningItemButtonPool = { "PrePlanningItemButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPrePlanningItemSelectionWidget, PrePlanningItemButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PrePlanningItemButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PrePlanningItemButtonPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_CachedPlayerInventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlanningItemSelectionWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningItemSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_CachedPlayerInventory = { "CachedPlayerInventory", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPrePlanningItemSelectionWidget, CachedPlayerInventory), Z_Construct_UClass_USBZPlayerInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_CachedPlayerInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_CachedPlayerInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_Panel_ButtonList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PreplanningItemButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_ActiveMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_ActiveMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_ActiveMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PrePlanningItemButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_PrePlanningItemButtonPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::NewProp_CachedPlayerInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuPrePlanningItemSelectionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::ClassParams = {
		&USBZMainMenuPrePlanningItemSelectionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuPrePlanningItemSelectionWidget, 740757664);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuPrePlanningItemSelectionWidget>()
	{
		return USBZMainMenuPrePlanningItemSelectionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuPrePlanningItemSelectionWidget(Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget, &USBZMainMenuPrePlanningItemSelectionWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuPrePlanningItemSelectionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuPrePlanningItemSelectionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
