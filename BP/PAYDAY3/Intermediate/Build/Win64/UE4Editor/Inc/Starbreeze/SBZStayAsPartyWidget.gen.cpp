// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStayAsPartyWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStayAsPartyWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStayAsPartyWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStayAsPartyWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStayAsPartyWidget::execOnRestartAcceptTimerUpdated)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartAcceptTimerUpdated(Z_Param_InNewTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStayAsPartyWidget::execOnRestartCountdownTimerUpdated)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartCountdownTimerUpdated(Z_Param_InNewTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStayAsPartyWidget::execOnRestartExpireTimerUpdated)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartExpireTimerUpdated(Z_Param_InNewTime);
		P_NATIVE_END;
	}
	static FName NAME_USBZStayAsPartyWidget_OnInitialTimerStarted = FName(TEXT("OnInitialTimerStarted"));
	void USBZStayAsPartyWidget::OnInitialTimerStarted(float InNewTime)
	{
		SBZStayAsPartyWidget_eventOnInitialTimerStarted_Parms Parms;
		Parms.InNewTime=InNewTime;
		ProcessEvent(FindFunctionChecked(NAME_USBZStayAsPartyWidget_OnInitialTimerStarted),&Parms);
	}
	static FName NAME_USBZStayAsPartyWidget_OnMergePartyUpdated = FName(TEXT("OnMergePartyUpdated"));
	void USBZStayAsPartyWidget::OnMergePartyUpdated(const FString& PlayerDisplayName, bool bIsMergePartySelected)
	{
		SBZStayAsPartyWidget_eventOnMergePartyUpdated_Parms Parms;
		Parms.PlayerDisplayName=PlayerDisplayName;
		Parms.bIsMergePartySelected=bIsMergePartySelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZStayAsPartyWidget_OnMergePartyUpdated),&Parms);
	}
	static FName NAME_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted = FName(TEXT("OnRestartAcceptTimerStarted"));
	void USBZStayAsPartyWidget::OnRestartAcceptTimerStarted(float InNewTime)
	{
		SBZStayAsPartyWidget_eventOnRestartAcceptTimerStarted_Parms Parms;
		Parms.InNewTime=InNewTime;
		ProcessEvent(FindFunctionChecked(NAME_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted),&Parms);
	}
	static FName NAME_USBZStayAsPartyWidget_OnRestartStarted = FName(TEXT("OnRestartStarted"));
	void USBZStayAsPartyWidget::OnRestartStarted(float InNewTime)
	{
		SBZStayAsPartyWidget_eventOnRestartStarted_Parms Parms;
		Parms.InNewTime=InNewTime;
		ProcessEvent(FindFunctionChecked(NAME_USBZStayAsPartyWidget_OnRestartStarted),&Parms);
	}
	static FName NAME_USBZStayAsPartyWidget_OnSetup = FName(TEXT("OnSetup"));
	void USBZStayAsPartyWidget::OnSetup(TArray<ASBZPlayerState*> const& PlayerStateArray)
	{
		SBZStayAsPartyWidget_eventOnSetup_Parms Parms;
		Parms.PlayerStateArray=PlayerStateArray;
		ProcessEvent(FindFunctionChecked(NAME_USBZStayAsPartyWidget_OnSetup),&Parms);
	}
	void USBZStayAsPartyWidget::StaticRegisterNativesUSBZStayAsPartyWidget()
	{
		UClass* Class = USBZStayAsPartyWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRestartAcceptTimerUpdated", &USBZStayAsPartyWidget::execOnRestartAcceptTimerUpdated },
			{ "OnRestartCountdownTimerUpdated", &USBZStayAsPartyWidget::execOnRestartCountdownTimerUpdated },
			{ "OnRestartExpireTimerUpdated", &USBZStayAsPartyWidget::execOnRestartExpireTimerUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStayAsPartyWidget_OnInitialTimerStarted_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnInitialTimerStarted_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStayAsPartyWidget_eventOnInitialTimerStarted_Parms, InNewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStayAsPartyWidget_OnInitialTimerStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStayAsPartyWidget_OnInitialTimerStarted_Statics::NewProp_InNewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStayAsPartyWidget_OnInitialTimerStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStayAsPartyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnInitialTimerStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStayAsPartyWidget, nullptr, "OnInitialTimerStarted", nullptr, nullptr, sizeof(SBZStayAsPartyWidget_eventOnInitialTimerStarted_Parms), Z_Construct_UFunction_USBZStayAsPartyWidget_OnInitialTimerStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnInitialTimerStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStayAsPartyWidget_OnInitialTimerStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnInitialTimerStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStayAsPartyWidget_OnInitialTimerStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStayAsPartyWidget_OnInitialTimerStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMergePartySelected_MetaData[];
#endif
		static void NewProp_bIsMergePartySelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMergePartySelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName = { "PlayerDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStayAsPartyWidget_eventOnMergePartyUpdated_Parms, PlayerDisplayName), METADATA_PARAMS(Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_SetBit(void* Obj)
	{
		((SBZStayAsPartyWidget_eventOnMergePartyUpdated_Parms*)Obj)->bIsMergePartySelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected = { "bIsMergePartySelected", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZStayAsPartyWidget_eventOnMergePartyUpdated_Parms), &Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStayAsPartyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStayAsPartyWidget, nullptr, "OnMergePartyUpdated", nullptr, nullptr, sizeof(SBZStayAsPartyWidget_eventOnMergePartyUpdated_Parms), Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStayAsPartyWidget_eventOnRestartAcceptTimerStarted_Parms, InNewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted_Statics::NewProp_InNewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStayAsPartyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStayAsPartyWidget, nullptr, "OnRestartAcceptTimerStarted", nullptr, nullptr, sizeof(SBZStayAsPartyWidget_eventOnRestartAcceptTimerStarted_Parms), Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerUpdated_Statics
	{
		struct SBZStayAsPartyWidget_eventOnRestartAcceptTimerUpdated_Parms
		{
			float InNewTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerUpdated_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStayAsPartyWidget_eventOnRestartAcceptTimerUpdated_Parms, InNewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerUpdated_Statics::NewProp_InNewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStayAsPartyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStayAsPartyWidget, nullptr, "OnRestartAcceptTimerUpdated", nullptr, nullptr, sizeof(SBZStayAsPartyWidget_eventOnRestartAcceptTimerUpdated_Parms), Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartCountdownTimerUpdated_Statics
	{
		struct SBZStayAsPartyWidget_eventOnRestartCountdownTimerUpdated_Parms
		{
			float InNewTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartCountdownTimerUpdated_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStayAsPartyWidget_eventOnRestartCountdownTimerUpdated_Parms, InNewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartCountdownTimerUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartCountdownTimerUpdated_Statics::NewProp_InNewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartCountdownTimerUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStayAsPartyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartCountdownTimerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStayAsPartyWidget, nullptr, "OnRestartCountdownTimerUpdated", nullptr, nullptr, sizeof(SBZStayAsPartyWidget_eventOnRestartCountdownTimerUpdated_Parms), Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartCountdownTimerUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartCountdownTimerUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartCountdownTimerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartCountdownTimerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartCountdownTimerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartCountdownTimerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartExpireTimerUpdated_Statics
	{
		struct SBZStayAsPartyWidget_eventOnRestartExpireTimerUpdated_Parms
		{
			float InNewTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartExpireTimerUpdated_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStayAsPartyWidget_eventOnRestartExpireTimerUpdated_Parms, InNewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartExpireTimerUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartExpireTimerUpdated_Statics::NewProp_InNewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartExpireTimerUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStayAsPartyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartExpireTimerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStayAsPartyWidget, nullptr, "OnRestartExpireTimerUpdated", nullptr, nullptr, sizeof(SBZStayAsPartyWidget_eventOnRestartExpireTimerUpdated_Parms), Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartExpireTimerUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartExpireTimerUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartExpireTimerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartExpireTimerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartExpireTimerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartExpireTimerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartStarted_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartStarted_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStayAsPartyWidget_eventOnRestartStarted_Parms, InNewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartStarted_Statics::NewProp_InNewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStayAsPartyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStayAsPartyWidget, nullptr, "OnRestartStarted", nullptr, nullptr, sizeof(SBZStayAsPartyWidget_eventOnRestartStarted_Parms), Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStateArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStateArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerStateArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::NewProp_PlayerStateArray_Inner = { "PlayerStateArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::NewProp_PlayerStateArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::NewProp_PlayerStateArray = { "PlayerStateArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStayAsPartyWidget_eventOnSetup_Parms, PlayerStateArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::NewProp_PlayerStateArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::NewProp_PlayerStateArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::NewProp_PlayerStateArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::NewProp_PlayerStateArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStayAsPartyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStayAsPartyWidget, nullptr, "OnSetup", nullptr, nullptr, sizeof(SBZStayAsPartyWidget_eventOnSetup_Parms), Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStayAsPartyWidget_NoRegister()
	{
		return USBZStayAsPartyWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZStayAsPartyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStayAsPartyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStayAsPartyWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStayAsPartyWidget_OnInitialTimerStarted, "OnInitialTimerStarted" }, // 3200669642
		{ &Z_Construct_UFunction_USBZStayAsPartyWidget_OnMergePartyUpdated, "OnMergePartyUpdated" }, // 241300610
		{ &Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerStarted, "OnRestartAcceptTimerStarted" }, // 652984886
		{ &Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartAcceptTimerUpdated, "OnRestartAcceptTimerUpdated" }, // 1881836922
		{ &Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartCountdownTimerUpdated, "OnRestartCountdownTimerUpdated" }, // 3154469477
		{ &Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartExpireTimerUpdated, "OnRestartExpireTimerUpdated" }, // 2689547813
		{ &Z_Construct_UFunction_USBZStayAsPartyWidget_OnRestartStarted, "OnRestartStarted" }, // 998463572
		{ &Z_Construct_UFunction_USBZStayAsPartyWidget_OnSetup, "OnSetup" }, // 563576504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStayAsPartyWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStayAsPartyWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStayAsPartyWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStayAsPartyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStayAsPartyWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStayAsPartyWidget_Statics::ClassParams = {
		&USBZStayAsPartyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStayAsPartyWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStayAsPartyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStayAsPartyWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStayAsPartyWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStayAsPartyWidget, 3283514674);
	template<> STARBREEZE_API UClass* StaticClass<USBZStayAsPartyWidget>()
	{
		return USBZStayAsPartyWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStayAsPartyWidget(Z_Construct_UClass_USBZStayAsPartyWidget, &USBZStayAsPartyWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStayAsPartyWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStayAsPartyWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
