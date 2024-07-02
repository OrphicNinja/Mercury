// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuStackWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuStackWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIStackChangedEvent();
// End Cross Module References
	DEFINE_FUNCTION(USBZMenuStackWidget::execGetStackValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetStackValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuStackWidget::execOnStackStateChanged)
	{
		P_GET_STRUCT(FSBZUIStackChangedEvent,Z_Param_UIStackStateChangedEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStackStateChanged(Z_Param_UIStackStateChangedEvent);
		P_NATIVE_END;
	}
	static FName NAME_USBZMenuStackWidget_OnAddedToStack = FName(TEXT("OnAddedToStack"));
	void USBZMenuStackWidget::OnAddedToStack()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuStackWidget_OnAddedToStack),NULL);
	}
	static FName NAME_USBZMenuStackWidget_OnGainedStackFocused = FName(TEXT("OnGainedStackFocused"));
	void USBZMenuStackWidget::OnGainedStackFocused(FName const& PreviousValue)
	{
		SBZMenuStackWidget_eventOnGainedStackFocused_Parms Parms;
		Parms.PreviousValue=PreviousValue;
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuStackWidget_OnGainedStackFocused),&Parms);
	}
	static FName NAME_USBZMenuStackWidget_OnLostStackFocused = FName(TEXT("OnLostStackFocused"));
	void USBZMenuStackWidget::OnLostStackFocused()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuStackWidget_OnLostStackFocused),NULL);
	}
	static FName NAME_USBZMenuStackWidget_OnRemovedFromStack = FName(TEXT("OnRemovedFromStack"));
	void USBZMenuStackWidget::OnRemovedFromStack()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuStackWidget_OnRemovedFromStack),NULL);
	}
	void USBZMenuStackWidget::StaticRegisterNativesUSBZMenuStackWidget()
	{
		UClass* Class = USBZMenuStackWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStackValue", &USBZMenuStackWidget::execGetStackValue },
			{ "OnStackStateChanged", &USBZMenuStackWidget::execOnStackStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMenuStackWidget_GetStackValue_Statics
	{
		struct SBZMenuStackWidget_eventGetStackValue_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMenuStackWidget_GetStackValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMenuStackWidget_eventGetStackValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuStackWidget_GetStackValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuStackWidget_GetStackValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackWidget_GetStackValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackWidget_GetStackValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackWidget, nullptr, "GetStackValue", nullptr, nullptr, sizeof(SBZMenuStackWidget_eventGetStackValue_Parms), Z_Construct_UFunction_USBZMenuStackWidget_GetStackValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackWidget_GetStackValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackWidget_GetStackValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackWidget_GetStackValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackWidget_GetStackValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackWidget_GetStackValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuStackWidget_OnAddedToStack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackWidget_OnAddedToStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackWidget_OnAddedToStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackWidget, nullptr, "OnAddedToStack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackWidget_OnAddedToStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackWidget_OnAddedToStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackWidget_OnAddedToStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackWidget_OnAddedToStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics::NewProp_PreviousValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMenuStackWidget_eventOnGainedStackFocused_Parms, PreviousValue), METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics::NewProp_PreviousValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics::NewProp_PreviousValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics::NewProp_PreviousValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackWidget, nullptr, "OnGainedStackFocused", nullptr, nullptr, sizeof(SBZMenuStackWidget_eventOnGainedStackFocused_Parms), Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuStackWidget_OnLostStackFocused_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackWidget_OnLostStackFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackWidget_OnLostStackFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackWidget, nullptr, "OnLostStackFocused", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackWidget_OnLostStackFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackWidget_OnLostStackFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackWidget_OnLostStackFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackWidget_OnLostStackFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuStackWidget_OnRemovedFromStack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackWidget_OnRemovedFromStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackWidget_OnRemovedFromStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackWidget, nullptr, "OnRemovedFromStack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackWidget_OnRemovedFromStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackWidget_OnRemovedFromStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackWidget_OnRemovedFromStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackWidget_OnRemovedFromStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuStackWidget_OnStackStateChanged_Statics
	{
		struct SBZMenuStackWidget_eventOnStackStateChanged_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMenuStackWidget_OnStackStateChanged_Statics::NewProp_UIStackStateChangedEvent = { "UIStackStateChangedEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMenuStackWidget_eventOnStackStateChanged_Parms, UIStackStateChangedEvent), Z_Construct_UScriptStruct_FSBZUIStackChangedEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuStackWidget_OnStackStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuStackWidget_OnStackStateChanged_Statics::NewProp_UIStackStateChangedEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackWidget_OnStackStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackWidget_OnStackStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackWidget, nullptr, "OnStackStateChanged", nullptr, nullptr, sizeof(SBZMenuStackWidget_eventOnStackStateChanged_Parms), Z_Construct_UFunction_USBZMenuStackWidget_OnStackStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackWidget_OnStackStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackWidget_OnStackStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackWidget_OnStackStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackWidget_OnStackStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackWidget_OnStackStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMenuStackWidget_NoRegister()
	{
		return USBZMenuStackWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMenuStackWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StackValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStackFocus_MetaData[];
#endif
		static void NewProp_bHasStackFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStackFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOnStack_MetaData[];
#endif
		static void NewProp_bIsOnStack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOnStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMenuStackWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMenuStackWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMenuStackWidget_GetStackValue, "GetStackValue" }, // 2052213599
		{ &Z_Construct_UFunction_USBZMenuStackWidget_OnAddedToStack, "OnAddedToStack" }, // 2629102094
		{ &Z_Construct_UFunction_USBZMenuStackWidget_OnGainedStackFocused, "OnGainedStackFocused" }, // 1061065808
		{ &Z_Construct_UFunction_USBZMenuStackWidget_OnLostStackFocused, "OnLostStackFocused" }, // 3149532922
		{ &Z_Construct_UFunction_USBZMenuStackWidget_OnRemovedFromStack, "OnRemovedFromStack" }, // 4275063715
		{ &Z_Construct_UFunction_USBZMenuStackWidget_OnStackStateChanged, "OnStackStateChanged" }, // 3683193777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMenuStackWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuStackWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_StackValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuStackWidget" },
		{ "ModuleRelativePath", "Public/SBZMenuStackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_StackValue = { "StackValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuStackWidget, StackValue), METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_StackValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_StackValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bHasStackFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuStackWidget" },
		{ "ModuleRelativePath", "Public/SBZMenuStackWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bHasStackFocus_SetBit(void* Obj)
	{
		((USBZMenuStackWidget*)Obj)->bHasStackFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bHasStackFocus = { "bHasStackFocus", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMenuStackWidget), &Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bHasStackFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bHasStackFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bHasStackFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bIsOnStack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuStackWidget" },
		{ "ModuleRelativePath", "Public/SBZMenuStackWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bIsOnStack_SetBit(void* Obj)
	{
		((USBZMenuStackWidget*)Obj)->bIsOnStack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bIsOnStack = { "bIsOnStack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMenuStackWidget), &Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bIsOnStack_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bIsOnStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bIsOnStack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMenuStackWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_StackValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bHasStackFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuStackWidget_Statics::NewProp_bIsOnStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMenuStackWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMenuStackWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMenuStackWidget_Statics::ClassParams = {
		&USBZMenuStackWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMenuStackWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMenuStackWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMenuStackWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMenuStackWidget, 977173840);
	template<> STARBREEZE_API UClass* StaticClass<USBZMenuStackWidget>()
	{
		return USBZMenuStackWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMenuStackWidget(Z_Construct_UClass_USBZMenuStackWidget, &USBZMenuStackWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMenuStackWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMenuStackWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
