// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuChallengeScreenDescriptionPanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuChallengeScreenDescriptionPanel() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuItemRewardDisplay_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuChallengeScreenDescriptionPanel::execSetChallengeData)
	{
		P_GET_STRUCT_REF(FSBZChallengeData,Z_Param_Out_InChallengeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChallengeData(Z_Param_Out_InChallengeData);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated = FName(TEXT("OnChallengeDataUpdated"));
	void USBZMainMenuChallengeScreenDescriptionPanel::OnChallengeDataUpdated(FSBZChallengeData const& InChallengeData)
	{
		SBZMainMenuChallengeScreenDescriptionPanel_eventOnChallengeDataUpdated_Parms Parms;
		Parms.InChallengeData=InChallengeData;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated),&Parms);
	}
	static FName NAME_USBZMainMenuChallengeScreenDescriptionPanel_SetEmpty = FName(TEXT("SetEmpty"));
	void USBZMainMenuChallengeScreenDescriptionPanel::SetEmpty()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuChallengeScreenDescriptionPanel_SetEmpty),NULL);
	}
	void USBZMainMenuChallengeScreenDescriptionPanel::StaticRegisterNativesUSBZMainMenuChallengeScreenDescriptionPanel()
	{
		UClass* Class = USBZMainMenuChallengeScreenDescriptionPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetChallengeData", &USBZMainMenuChallengeScreenDescriptionPanel::execSetChallengeData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InChallengeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InChallengeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics::NewProp_InChallengeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics::NewProp_InChallengeData = { "InChallengeData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengeScreenDescriptionPanel_eventOnChallengeDataUpdated_Parms, InChallengeData), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics::NewProp_InChallengeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics::NewProp_InChallengeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics::NewProp_InChallengeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel, nullptr, "OnChallengeDataUpdated", nullptr, nullptr, sizeof(SBZMainMenuChallengeScreenDescriptionPanel_eventOnChallengeDataUpdated_Parms), Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics
	{
		struct SBZMainMenuChallengeScreenDescriptionPanel_eventSetChallengeData_Parms
		{
			FSBZChallengeData InChallengeData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InChallengeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InChallengeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics::NewProp_InChallengeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics::NewProp_InChallengeData = { "InChallengeData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengeScreenDescriptionPanel_eventSetChallengeData_Parms, InChallengeData), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics::NewProp_InChallengeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics::NewProp_InChallengeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics::NewProp_InChallengeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel, nullptr, "SetChallengeData", nullptr, nullptr, sizeof(SBZMainMenuChallengeScreenDescriptionPanel_eventSetChallengeData_Parms), Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel, nullptr, "SetEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_NoRegister()
	{
		return USBZMainMenuChallengeScreenDescriptionPanel::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ChallengeStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ChallengeStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ItemRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ItemRewards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeStatWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChallengeStatWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemRewardWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemRewardWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStatWidgetsDisplayed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxStatWidgetsDisplayed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxItemWidgetsDisplayed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxItemWidgetsDisplayed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedStatWidgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedStatWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedStatWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedStatWidgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedItemWidgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedItemWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedItemWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedItemWidgets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_OnChallengeDataUpdated, "OnChallengeDataUpdated" }, // 3888830767
		{ &Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetChallengeData, "SetChallengeData" }, // 2650457300
		{ &Z_Construct_UFunction_USBZMainMenuChallengeScreenDescriptionPanel_SetEmpty, "SetEmpty" }, // 78634194
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuChallengeScreenDescriptionPanel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_Panel_ChallengeStats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeScreenDescriptionPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_Panel_ChallengeStats = { "Panel_ChallengeStats", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, Panel_ChallengeStats), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_Panel_ChallengeStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_Panel_ChallengeStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_Panel_ItemRewards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeScreenDescriptionPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_Panel_ItemRewards = { "Panel_ItemRewards", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, Panel_ItemRewards), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_Panel_ItemRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_Panel_ItemRewards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_ChallengeStatWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeScreenDescriptionPanel" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_ChallengeStatWidgetClass = { "ChallengeStatWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, ChallengeStatWidgetClass), Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_ChallengeStatWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_ChallengeStatWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_ItemRewardWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeScreenDescriptionPanel" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_ItemRewardWidgetClass = { "ItemRewardWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, ItemRewardWidgetClass), Z_Construct_UClass_USBZMainMenuItemRewardDisplay_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_ItemRewardWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_ItemRewardWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_MaxStatWidgetsDisplayed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeScreenDescriptionPanel" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_MaxStatWidgetsDisplayed = { "MaxStatWidgetsDisplayed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, MaxStatWidgetsDisplayed), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_MaxStatWidgetsDisplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_MaxStatWidgetsDisplayed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_MaxItemWidgetsDisplayed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeScreenDescriptionPanel" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_MaxItemWidgetsDisplayed = { "MaxItemWidgetsDisplayed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, MaxItemWidgetsDisplayed), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_MaxItemWidgetsDisplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_MaxItemWidgetsDisplayed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedStatWidgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeScreenDescriptionPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedStatWidgets_Inner = { "CachedStatWidgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedStatWidgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedStatWidgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedStatWidgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeScreenDescriptionPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedStatWidgets = { "CachedStatWidgets", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, CachedStatWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedStatWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedStatWidgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedItemWidgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeScreenDescriptionPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedItemWidgets_Inner = { "CachedItemWidgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuItemRewardDisplay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedItemWidgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedItemWidgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedItemWidgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengeScreenDescriptionPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeScreenDescriptionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedItemWidgets = { "CachedItemWidgets", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, CachedItemWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedItemWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedItemWidgets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_Panel_ChallengeStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_Panel_ItemRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_ChallengeStatWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_ItemRewardWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_MaxStatWidgetsDisplayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_MaxItemWidgetsDisplayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedStatWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedStatWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedItemWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::NewProp_CachedItemWidgets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuChallengeScreenDescriptionPanel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::ClassParams = {
		&USBZMainMenuChallengeScreenDescriptionPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuChallengeScreenDescriptionPanel, 2980187602);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuChallengeScreenDescriptionPanel>()
	{
		return USBZMainMenuChallengeScreenDescriptionPanel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuChallengeScreenDescriptionPanel(Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel, &USBZMainMenuChallengeScreenDescriptionPanel::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuChallengeScreenDescriptionPanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuChallengeScreenDescriptionPanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
