// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuMultiStackWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuMultiStackWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuMultiStackWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuMultiStackWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIStackChangedEvent();
// End Cross Module References
	DEFINE_FUNCTION(USBZMenuMultiStackWidget::execGetActiveStackValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetActiveStackValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuMultiStackWidget::execGetStackValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetStackValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuMultiStackWidget::execOnStackStateChanged)
	{
		P_GET_STRUCT(FSBZUIStackChangedEvent,Z_Param_UIStackStateChangedEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStackStateChanged(Z_Param_UIStackStateChangedEvent);
		P_NATIVE_END;
	}
	static FName NAME_USBZMenuMultiStackWidget_OnAddedToStack = FName(TEXT("OnAddedToStack"));
	void USBZMenuMultiStackWidget::OnAddedToStack()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuMultiStackWidget_OnAddedToStack),NULL);
	}
	static FName NAME_USBZMenuMultiStackWidget_OnGainedStackFocused = FName(TEXT("OnGainedStackFocused"));
	void USBZMenuMultiStackWidget::OnGainedStackFocused(FName const& PreviousValue)
	{
		SBZMenuMultiStackWidget_eventOnGainedStackFocused_Parms Parms;
		Parms.PreviousValue=PreviousValue;
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuMultiStackWidget_OnGainedStackFocused),&Parms);
	}
	static FName NAME_USBZMenuMultiStackWidget_OnLostStackFocused = FName(TEXT("OnLostStackFocused"));
	void USBZMenuMultiStackWidget::OnLostStackFocused()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuMultiStackWidget_OnLostStackFocused),NULL);
	}
	static FName NAME_USBZMenuMultiStackWidget_OnRemovedFromStack = FName(TEXT("OnRemovedFromStack"));
	void USBZMenuMultiStackWidget::OnRemovedFromStack()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuMultiStackWidget_OnRemovedFromStack),NULL);
	}
	void USBZMenuMultiStackWidget::StaticRegisterNativesUSBZMenuMultiStackWidget()
	{
		UClass* Class = USBZMenuMultiStackWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveStackValue", &USBZMenuMultiStackWidget::execGetActiveStackValue },
			{ "GetStackValues", &USBZMenuMultiStackWidget::execGetStackValues },
			{ "OnStackStateChanged", &USBZMenuMultiStackWidget::execOnStackStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMenuMultiStackWidget_GetActiveStackValue_Statics
	{
		struct SBZMenuMultiStackWidget_eventGetActiveStackValue_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMenuMultiStackWidget_GetActiveStackValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMenuMultiStackWidget_eventGetActiveStackValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuMultiStackWidget_GetActiveStackValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuMultiStackWidget_GetActiveStackValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuMultiStackWidget_GetActiveStackValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuMultiStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuMultiStackWidget_GetActiveStackValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuMultiStackWidget, nullptr, "GetActiveStackValue", nullptr, nullptr, sizeof(SBZMenuMultiStackWidget_eventGetActiveStackValue_Parms), Z_Construct_UFunction_USBZMenuMultiStackWidget_GetActiveStackValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMultiStackWidget_GetActiveStackValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuMultiStackWidget_GetActiveStackValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMultiStackWidget_GetActiveStackValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuMultiStackWidget_GetActiveStackValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuMultiStackWidget_GetActiveStackValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues_Statics
	{
		struct SBZMenuMultiStackWidget_eventGetStackValues_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMenuMultiStackWidget_eventGetStackValues_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuMultiStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuMultiStackWidget, nullptr, "GetStackValues", nullptr, nullptr, sizeof(SBZMenuMultiStackWidget_eventGetStackValues_Parms), Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuMultiStackWidget_OnAddedToStack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuMultiStackWidget_OnAddedToStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuMultiStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuMultiStackWidget_OnAddedToStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuMultiStackWidget, nullptr, "OnAddedToStack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnAddedToStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnAddedToStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuMultiStackWidget_OnAddedToStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuMultiStackWidget_OnAddedToStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreviousValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics::NewProp_PreviousValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMenuMultiStackWidget_eventOnGainedStackFocused_Parms, PreviousValue), METADATA_PARAMS(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics::NewProp_PreviousValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics::NewProp_PreviousValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics::NewProp_PreviousValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuMultiStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuMultiStackWidget, nullptr, "OnGainedStackFocused", nullptr, nullptr, sizeof(SBZMenuMultiStackWidget_eventOnGainedStackFocused_Parms), Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuMultiStackWidget_OnLostStackFocused_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuMultiStackWidget_OnLostStackFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuMultiStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuMultiStackWidget_OnLostStackFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuMultiStackWidget, nullptr, "OnLostStackFocused", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnLostStackFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnLostStackFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuMultiStackWidget_OnLostStackFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuMultiStackWidget_OnLostStackFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuMultiStackWidget_OnRemovedFromStack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuMultiStackWidget_OnRemovedFromStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuMultiStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuMultiStackWidget_OnRemovedFromStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuMultiStackWidget, nullptr, "OnRemovedFromStack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnRemovedFromStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnRemovedFromStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuMultiStackWidget_OnRemovedFromStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuMultiStackWidget_OnRemovedFromStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuMultiStackWidget_OnStackStateChanged_Statics
	{
		struct SBZMenuMultiStackWidget_eventOnStackStateChanged_Parms
		{
			FSBZUIStackChangedEvent UIStackStateChangedEvent;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIStackStateChangedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMenuMultiStackWidget_OnStackStateChanged_Statics::NewProp_UIStackStateChangedEvent = { "UIStackStateChangedEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMenuMultiStackWidget_eventOnStackStateChanged_Parms, UIStackStateChangedEvent), Z_Construct_UScriptStruct_FSBZUIStackChangedEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuMultiStackWidget_OnStackStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuMultiStackWidget_OnStackStateChanged_Statics::NewProp_UIStackStateChangedEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuMultiStackWidget_OnStackStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuMultiStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuMultiStackWidget_OnStackStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuMultiStackWidget, nullptr, "OnStackStateChanged", nullptr, nullptr, sizeof(SBZMenuMultiStackWidget_eventOnStackStateChanged_Parms), Z_Construct_UFunction_USBZMenuMultiStackWidget_OnStackStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnStackStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnStackStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuMultiStackWidget_OnStackStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuMultiStackWidget_OnStackStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuMultiStackWidget_OnStackStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMenuMultiStackWidget_NoRegister()
	{
		return USBZMenuMultiStackWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMenuMultiStackWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StackValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StackValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStackFocus_MetaData[];
#endif
		static void NewProp_bHasStackFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStackFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMenuMultiStackWidget_GetActiveStackValue, "GetActiveStackValue" }, // 2335781635
		{ &Z_Construct_UFunction_USBZMenuMultiStackWidget_GetStackValues, "GetStackValues" }, // 947363516
		{ &Z_Construct_UFunction_USBZMenuMultiStackWidget_OnAddedToStack, "OnAddedToStack" }, // 2855014477
		{ &Z_Construct_UFunction_USBZMenuMultiStackWidget_OnGainedStackFocused, "OnGainedStackFocused" }, // 2249830795
		{ &Z_Construct_UFunction_USBZMenuMultiStackWidget_OnLostStackFocused, "OnLostStackFocused" }, // 3187929699
		{ &Z_Construct_UFunction_USBZMenuMultiStackWidget_OnRemovedFromStack, "OnRemovedFromStack" }, // 2022173137
		{ &Z_Construct_UFunction_USBZMenuMultiStackWidget_OnStackStateChanged, "OnStackStateChanged" }, // 1848624940
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMenuMultiStackWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuMultiStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_StackValues_Inner = { "StackValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_StackValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuMultiStackWidget" },
		{ "ModuleRelativePath", "Public/SBZMenuMultiStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_StackValues = { "StackValues", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuMultiStackWidget, StackValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_StackValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_StackValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_bHasStackFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuMultiStackWidget" },
		{ "ModuleRelativePath", "Public/SBZMenuMultiStackWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_bHasStackFocus_SetBit(void* Obj)
	{
		((USBZMenuMultiStackWidget*)Obj)->bHasStackFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_bHasStackFocus = { "bHasStackFocus", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMenuMultiStackWidget), &Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_bHasStackFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_bHasStackFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_bHasStackFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_StackValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_StackValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::NewProp_bHasStackFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMenuMultiStackWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::ClassParams = {
		&USBZMenuMultiStackWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMenuMultiStackWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMenuMultiStackWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMenuMultiStackWidget, 212913174);
	template<> STARBREEZE_API UClass* StaticClass<USBZMenuMultiStackWidget>()
	{
		return USBZMenuMultiStackWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMenuMultiStackWidget(Z_Construct_UClass_USBZMenuMultiStackWidget, &USBZMenuMultiStackWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMenuMultiStackWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMenuMultiStackWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
