// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZResultsScreenBaseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZResultsScreenBaseWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZResultsScreenBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZResultsScreenBaseWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static FName NAME_USBZResultsScreenBaseWidget_OnMergePartyUpdated = FName(TEXT("OnMergePartyUpdated"));
	void USBZResultsScreenBaseWidget::OnMergePartyUpdated(const FString& PlayerDisplayName, bool bIsMergePartySelected)
	{
		SBZResultsScreenBaseWidget_eventOnMergePartyUpdated_Parms Parms;
		Parms.PlayerDisplayName=PlayerDisplayName;
		Parms.bIsMergePartySelected=bIsMergePartySelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZResultsScreenBaseWidget_OnMergePartyUpdated),&Parms);
	}
	static FName NAME_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated = FName(TEXT("OnRestartAcceptTimerUpdated"));
	void USBZResultsScreenBaseWidget::OnRestartAcceptTimerUpdated(float InNewTime)
	{
		SBZResultsScreenBaseWidget_eventOnRestartAcceptTimerUpdated_Parms Parms;
		Parms.InNewTime=InNewTime;
		ProcessEvent(FindFunctionChecked(NAME_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated),&Parms);
	}
	static FName NAME_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated = FName(TEXT("OnRestartCountdownTimerUpdated"));
	void USBZResultsScreenBaseWidget::OnRestartCountdownTimerUpdated(float InNewTime)
	{
		SBZResultsScreenBaseWidget_eventOnRestartCountdownTimerUpdated_Parms Parms;
		Parms.InNewTime=InNewTime;
		ProcessEvent(FindFunctionChecked(NAME_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated),&Parms);
	}
	static FName NAME_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated = FName(TEXT("OnRestartExpireTimerUpdated"));
	void USBZResultsScreenBaseWidget::OnRestartExpireTimerUpdated(float InNewTime)
	{
		SBZResultsScreenBaseWidget_eventOnRestartExpireTimerUpdated_Parms Parms;
		Parms.InNewTime=InNewTime;
		ProcessEvent(FindFunctionChecked(NAME_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated),&Parms);
	}
	void USBZResultsScreenBaseWidget::StaticRegisterNativesUSBZResultsScreenBaseWidget()
	{
	}
	struct Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName = { "PlayerDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZResultsScreenBaseWidget_eventOnMergePartyUpdated_Parms, PlayerDisplayName), METADATA_PARAMS(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_SetBit(void* Obj)
	{
		((SBZResultsScreenBaseWidget_eventOnMergePartyUpdated_Parms*)Obj)->bIsMergePartySelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected = { "bIsMergePartySelected", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZResultsScreenBaseWidget_eventOnMergePartyUpdated_Parms), &Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZResultsScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZResultsScreenBaseWidget, nullptr, "OnMergePartyUpdated", nullptr, nullptr, sizeof(SBZResultsScreenBaseWidget_eventOnMergePartyUpdated_Parms), Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZResultsScreenBaseWidget_eventOnRestartAcceptTimerUpdated_Parms, InNewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated_Statics::NewProp_InNewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZResultsScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZResultsScreenBaseWidget, nullptr, "OnRestartAcceptTimerUpdated", nullptr, nullptr, sizeof(SBZResultsScreenBaseWidget_eventOnRestartAcceptTimerUpdated_Parms), Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZResultsScreenBaseWidget_eventOnRestartCountdownTimerUpdated_Parms, InNewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated_Statics::NewProp_InNewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZResultsScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZResultsScreenBaseWidget, nullptr, "OnRestartCountdownTimerUpdated", nullptr, nullptr, sizeof(SBZResultsScreenBaseWidget_eventOnRestartCountdownTimerUpdated_Parms), Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZResultsScreenBaseWidget_eventOnRestartExpireTimerUpdated_Parms, InNewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated_Statics::NewProp_InNewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZResultsScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZResultsScreenBaseWidget, nullptr, "OnRestartExpireTimerUpdated", nullptr, nullptr, sizeof(SBZResultsScreenBaseWidget_eventOnRestartExpireTimerUpdated_Parms), Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZResultsScreenBaseWidget_NoRegister()
	{
		return USBZResultsScreenBaseWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZResultsScreenBaseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZResultsScreenBaseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZResultsScreenBaseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnMergePartyUpdated, "OnMergePartyUpdated" }, // 348469225
		{ &Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartAcceptTimerUpdated, "OnRestartAcceptTimerUpdated" }, // 4058110925
		{ &Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartCountdownTimerUpdated, "OnRestartCountdownTimerUpdated" }, // 298367343
		{ &Z_Construct_UFunction_USBZResultsScreenBaseWidget_OnRestartExpireTimerUpdated, "OnRestartExpireTimerUpdated" }, // 3063670738
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZResultsScreenBaseWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZResultsScreenBaseWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZResultsScreenBaseWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZResultsScreenBaseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZResultsScreenBaseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZResultsScreenBaseWidget_Statics::ClassParams = {
		&USBZResultsScreenBaseWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZResultsScreenBaseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZResultsScreenBaseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZResultsScreenBaseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZResultsScreenBaseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZResultsScreenBaseWidget, 236931380);
	template<> STARBREEZE_API UClass* StaticClass<USBZResultsScreenBaseWidget>()
	{
		return USBZResultsScreenBaseWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZResultsScreenBaseWidget(Z_Construct_UClass_USBZResultsScreenBaseWidget, &USBZResultsScreenBaseWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZResultsScreenBaseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZResultsScreenBaseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
