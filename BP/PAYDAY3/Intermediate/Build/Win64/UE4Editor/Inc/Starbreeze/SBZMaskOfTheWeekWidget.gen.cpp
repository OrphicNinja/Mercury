// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskOfTheWeekWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskOfTheWeekWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskOfTheWeekWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskOfTheWeekWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreItemUIData();
// End Cross Module References
	DEFINE_FUNCTION(USBZMaskOfTheWeekWidget::execGetTimeRemainingUntilReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetTimeRemainingUntilReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMaskOfTheWeekWidget::execUpdateData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateData();
		P_NATIVE_END;
	}
	static FName NAME_USBZMaskOfTheWeekWidget_OnDataUpdated = FName(TEXT("OnDataUpdated"));
	void USBZMaskOfTheWeekWidget::OnDataUpdated(FSBZStoreItemUIData const& InUpdatedStoreItemUIData)
	{
		SBZMaskOfTheWeekWidget_eventOnDataUpdated_Parms Parms;
		Parms.InUpdatedStoreItemUIData=InUpdatedStoreItemUIData;
		ProcessEvent(FindFunctionChecked(NAME_USBZMaskOfTheWeekWidget_OnDataUpdated),&Parms);
	}
	static FName NAME_USBZMaskOfTheWeekWidget_OnMaskOfTheWeekReset = FName(TEXT("OnMaskOfTheWeekReset"));
	void USBZMaskOfTheWeekWidget::OnMaskOfTheWeekReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMaskOfTheWeekWidget_OnMaskOfTheWeekReset),NULL);
	}
	static FName NAME_USBZMaskOfTheWeekWidget_OnUpdateTimerText = FName(TEXT("OnUpdateTimerText"));
	void USBZMaskOfTheWeekWidget::OnUpdateTimerText(bool bInPreviewDays, FTimespan const& InTimeRemaining)
	{
		SBZMaskOfTheWeekWidget_eventOnUpdateTimerText_Parms Parms;
		Parms.bInPreviewDays=bInPreviewDays ? true : false;
		Parms.InTimeRemaining=InTimeRemaining;
		ProcessEvent(FindFunctionChecked(NAME_USBZMaskOfTheWeekWidget_OnUpdateTimerText),&Parms);
	}
	void USBZMaskOfTheWeekWidget::StaticRegisterNativesUSBZMaskOfTheWeekWidget()
	{
		UClass* Class = USBZMaskOfTheWeekWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTimeRemainingUntilReset", &USBZMaskOfTheWeekWidget::execGetTimeRemainingUntilReset },
			{ "UpdateData", &USBZMaskOfTheWeekWidget::execUpdateData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMaskOfTheWeekWidget_GetTimeRemainingUntilReset_Statics
	{
		struct SBZMaskOfTheWeekWidget_eventGetTimeRemainingUntilReset_Parms
		{
			FTimespan ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMaskOfTheWeekWidget_GetTimeRemainingUntilReset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaskOfTheWeekWidget_eventGetTimeRemainingUntilReset_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMaskOfTheWeekWidget_GetTimeRemainingUntilReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskOfTheWeekWidget_GetTimeRemainingUntilReset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskOfTheWeekWidget_GetTimeRemainingUntilReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskOfTheWeekWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskOfTheWeekWidget_GetTimeRemainingUntilReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskOfTheWeekWidget, nullptr, "GetTimeRemainingUntilReset", nullptr, nullptr, sizeof(SBZMaskOfTheWeekWidget_eventGetTimeRemainingUntilReset_Parms), Z_Construct_UFunction_USBZMaskOfTheWeekWidget_GetTimeRemainingUntilReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_GetTimeRemainingUntilReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_GetTimeRemainingUntilReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_GetTimeRemainingUntilReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskOfTheWeekWidget_GetTimeRemainingUntilReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskOfTheWeekWidget_GetTimeRemainingUntilReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUpdatedStoreItemUIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InUpdatedStoreItemUIData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics::NewProp_InUpdatedStoreItemUIData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics::NewProp_InUpdatedStoreItemUIData = { "InUpdatedStoreItemUIData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaskOfTheWeekWidget_eventOnDataUpdated_Parms, InUpdatedStoreItemUIData), Z_Construct_UScriptStruct_FSBZStoreItemUIData, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics::NewProp_InUpdatedStoreItemUIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics::NewProp_InUpdatedStoreItemUIData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics::NewProp_InUpdatedStoreItemUIData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskOfTheWeekWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskOfTheWeekWidget, nullptr, "OnDataUpdated", nullptr, nullptr, sizeof(SBZMaskOfTheWeekWidget_eventOnDataUpdated_Parms), Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnMaskOfTheWeekReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnMaskOfTheWeekReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskOfTheWeekWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnMaskOfTheWeekReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskOfTheWeekWidget, nullptr, "OnMaskOfTheWeekReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnMaskOfTheWeekReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnMaskOfTheWeekReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnMaskOfTheWeekReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnMaskOfTheWeekReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInPreviewDays_MetaData[];
#endif
		static void NewProp_bInPreviewDays_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInPreviewDays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimeRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTimeRemaining;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::NewProp_bInPreviewDays_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::NewProp_bInPreviewDays_SetBit(void* Obj)
	{
		((SBZMaskOfTheWeekWidget_eventOnUpdateTimerText_Parms*)Obj)->bInPreviewDays = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::NewProp_bInPreviewDays = { "bInPreviewDays", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMaskOfTheWeekWidget_eventOnUpdateTimerText_Parms), &Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::NewProp_bInPreviewDays_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::NewProp_bInPreviewDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::NewProp_bInPreviewDays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::NewProp_InTimeRemaining_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::NewProp_InTimeRemaining = { "InTimeRemaining", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaskOfTheWeekWidget_eventOnUpdateTimerText_Parms, InTimeRemaining), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::NewProp_InTimeRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::NewProp_InTimeRemaining_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::NewProp_bInPreviewDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::NewProp_InTimeRemaining,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskOfTheWeekWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskOfTheWeekWidget, nullptr, "OnUpdateTimerText", nullptr, nullptr, sizeof(SBZMaskOfTheWeekWidget_eventOnUpdateTimerText_Parms), Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMaskOfTheWeekWidget_UpdateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskOfTheWeekWidget_UpdateData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskOfTheWeekWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskOfTheWeekWidget_UpdateData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskOfTheWeekWidget, nullptr, "UpdateData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_UpdateData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskOfTheWeekWidget_UpdateData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskOfTheWeekWidget_UpdateData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskOfTheWeekWidget_UpdateData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMaskOfTheWeekWidget_NoRegister()
	{
		return USBZMaskOfTheWeekWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerUpdateFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerUpdateFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMaskOfTheWeekWidget_GetTimeRemainingUntilReset, "GetTimeRemainingUntilReset" }, // 620140065
		{ &Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnDataUpdated, "OnDataUpdated" }, // 1971700474
		{ &Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnMaskOfTheWeekReset, "OnMaskOfTheWeekReset" }, // 413722811
		{ &Z_Construct_UFunction_USBZMaskOfTheWeekWidget_OnUpdateTimerText, "OnUpdateTimerText" }, // 2105765043
		{ &Z_Construct_UFunction_USBZMaskOfTheWeekWidget_UpdateData, "UpdateData" }, // 1692689864
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskOfTheWeekWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskOfTheWeekWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::NewProp_TimerUpdateFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskOfTheWeekWidget" },
		{ "ModuleRelativePath", "Public/SBZMaskOfTheWeekWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::NewProp_TimerUpdateFrequency = { "TimerUpdateFrequency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskOfTheWeekWidget, TimerUpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::NewProp_TimerUpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::NewProp_TimerUpdateFrequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::NewProp_TimerUpdateFrequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskOfTheWeekWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::ClassParams = {
		&USBZMaskOfTheWeekWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskOfTheWeekWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskOfTheWeekWidget, 4047874984);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskOfTheWeekWidget>()
	{
		return USBZMaskOfTheWeekWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskOfTheWeekWidget(Z_Construct_UClass_USBZMaskOfTheWeekWidget, &USBZMaskOfTheWeekWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskOfTheWeekWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskOfTheWeekWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
