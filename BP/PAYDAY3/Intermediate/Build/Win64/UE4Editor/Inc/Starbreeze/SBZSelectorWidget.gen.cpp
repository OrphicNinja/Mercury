// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSelectorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSelectorWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSelectorWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSelectorWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnSelectorOptionChanged__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZSelectorWidget::execSelectLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSelectorWidget::execSelectRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSelectorWidget::execSetCurrentIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DesiredIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentIndex(Z_Param_DesiredIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSelectorWidget::execSetSelectionCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewSelectionCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectionCount(Z_Param_NewSelectionCount);
		P_NATIVE_END;
	}
	static FName NAME_USBZSelectorWidget_OnSelectedLeft = FName(TEXT("OnSelectedLeft"));
	void USBZSelectorWidget::OnSelectedLeft()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSelectorWidget_OnSelectedLeft),NULL);
	}
	static FName NAME_USBZSelectorWidget_OnSelectedRight = FName(TEXT("OnSelectedRight"));
	void USBZSelectorWidget::OnSelectedRight()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSelectorWidget_OnSelectedRight),NULL);
	}
	static FName NAME_USBZSelectorWidget_OnSelectionOptionChanged = FName(TEXT("OnSelectionOptionChanged"));
	void USBZSelectorWidget::OnSelectionOptionChanged(int32 InCurrentIndex)
	{
		SBZSelectorWidget_eventOnSelectionOptionChanged_Parms Parms;
		Parms.InCurrentIndex=InCurrentIndex;
		ProcessEvent(FindFunctionChecked(NAME_USBZSelectorWidget_OnSelectionOptionChanged),&Parms);
	}
	void USBZSelectorWidget::StaticRegisterNativesUSBZSelectorWidget()
	{
		UClass* Class = USBZSelectorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectLeft", &USBZSelectorWidget::execSelectLeft },
			{ "SelectRight", &USBZSelectorWidget::execSelectRight },
			{ "SetCurrentIndex", &USBZSelectorWidget::execSetCurrentIndex },
			{ "SetSelectionCount", &USBZSelectorWidget::execSetSelectionCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSelectorWidget_OnSelectedLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSelectorWidget_OnSelectedLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSelectorWidget_OnSelectedLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSelectorWidget, nullptr, "OnSelectedLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSelectorWidget_OnSelectedLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSelectorWidget_OnSelectedLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSelectorWidget_OnSelectedLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSelectorWidget_OnSelectedLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSelectorWidget_OnSelectedRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSelectorWidget_OnSelectedRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSelectorWidget_OnSelectedRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSelectorWidget, nullptr, "OnSelectedRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSelectorWidget_OnSelectedRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSelectorWidget_OnSelectedRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSelectorWidget_OnSelectedRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSelectorWidget_OnSelectedRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSelectorWidget_OnSelectionOptionChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InCurrentIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSelectorWidget_OnSelectionOptionChanged_Statics::NewProp_InCurrentIndex = { "InCurrentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSelectorWidget_eventOnSelectionOptionChanged_Parms, InCurrentIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSelectorWidget_OnSelectionOptionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSelectorWidget_OnSelectionOptionChanged_Statics::NewProp_InCurrentIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSelectorWidget_OnSelectionOptionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSelectorWidget_OnSelectionOptionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSelectorWidget, nullptr, "OnSelectionOptionChanged", nullptr, nullptr, sizeof(SBZSelectorWidget_eventOnSelectionOptionChanged_Parms), Z_Construct_UFunction_USBZSelectorWidget_OnSelectionOptionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSelectorWidget_OnSelectionOptionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSelectorWidget_OnSelectionOptionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSelectorWidget_OnSelectionOptionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSelectorWidget_OnSelectionOptionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSelectorWidget_OnSelectionOptionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSelectorWidget_SelectLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSelectorWidget_SelectLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSelectorWidget_SelectLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSelectorWidget, nullptr, "SelectLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSelectorWidget_SelectLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSelectorWidget_SelectLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSelectorWidget_SelectLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSelectorWidget_SelectLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSelectorWidget_SelectRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSelectorWidget_SelectRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSelectorWidget_SelectRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSelectorWidget, nullptr, "SelectRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSelectorWidget_SelectRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSelectorWidget_SelectRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSelectorWidget_SelectRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSelectorWidget_SelectRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSelectorWidget_SetCurrentIndex_Statics
	{
		struct SBZSelectorWidget_eventSetCurrentIndex_Parms
		{
			int32 DesiredIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DesiredIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSelectorWidget_SetCurrentIndex_Statics::NewProp_DesiredIndex = { "DesiredIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSelectorWidget_eventSetCurrentIndex_Parms, DesiredIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSelectorWidget_SetCurrentIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSelectorWidget_SetCurrentIndex_Statics::NewProp_DesiredIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSelectorWidget_SetCurrentIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSelectorWidget_SetCurrentIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSelectorWidget, nullptr, "SetCurrentIndex", nullptr, nullptr, sizeof(SBZSelectorWidget_eventSetCurrentIndex_Parms), Z_Construct_UFunction_USBZSelectorWidget_SetCurrentIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSelectorWidget_SetCurrentIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSelectorWidget_SetCurrentIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSelectorWidget_SetCurrentIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSelectorWidget_SetCurrentIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSelectorWidget_SetCurrentIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSelectorWidget_SetSelectionCount_Statics
	{
		struct SBZSelectorWidget_eventSetSelectionCount_Parms
		{
			int32 NewSelectionCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewSelectionCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSelectorWidget_SetSelectionCount_Statics::NewProp_NewSelectionCount = { "NewSelectionCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSelectorWidget_eventSetSelectionCount_Parms, NewSelectionCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSelectorWidget_SetSelectionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSelectorWidget_SetSelectionCount_Statics::NewProp_NewSelectionCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSelectorWidget_SetSelectionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSelectorWidget_SetSelectionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSelectorWidget, nullptr, "SetSelectionCount", nullptr, nullptr, sizeof(SBZSelectorWidget_eventSetSelectionCount_Parms), Z_Construct_UFunction_USBZSelectorWidget_SetSelectionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSelectorWidget_SetSelectionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSelectorWidget_SetSelectionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSelectorWidget_SetSelectionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSelectorWidget_SetSelectionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSelectorWidget_SetSelectionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSelectorWidget_NoRegister()
	{
		return USBZSelectorWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZSelectorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionOptionChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectionOptionChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSelectorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSelectorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSelectorWidget_OnSelectedLeft, "OnSelectedLeft" }, // 2982305715
		{ &Z_Construct_UFunction_USBZSelectorWidget_OnSelectedRight, "OnSelectedRight" }, // 407287648
		{ &Z_Construct_UFunction_USBZSelectorWidget_OnSelectionOptionChanged, "OnSelectionOptionChanged" }, // 2411585059
		{ &Z_Construct_UFunction_USBZSelectorWidget_SelectLeft, "SelectLeft" }, // 3976980253
		{ &Z_Construct_UFunction_USBZSelectorWidget_SelectRight, "SelectRight" }, // 3047364497
		{ &Z_Construct_UFunction_USBZSelectorWidget_SetCurrentIndex, "SetCurrentIndex" }, // 1190580278
		{ &Z_Construct_UFunction_USBZSelectorWidget_SetSelectionCount, "SetSelectionCount" }, // 1469799765
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSelectorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSelectorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSelectorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_SelectionOptionChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSelectorWidget" },
		{ "ModuleRelativePath", "Public/SBZSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_SelectionOptionChanged = { "SelectionOptionChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSelectorWidget, SelectionOptionChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnSelectorOptionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_SelectionOptionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_SelectionOptionChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_SelectionCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSelectorWidget" },
		{ "ModuleRelativePath", "Public/SBZSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_SelectionCount = { "SelectionCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSelectorWidget, SelectionCount), METADATA_PARAMS(Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_SelectionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_SelectionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_CurrentIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSelectorWidget" },
		{ "ModuleRelativePath", "Public/SBZSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSelectorWidget, CurrentIndex), METADATA_PARAMS(Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_CurrentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_CurrentIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSelectorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_SelectionOptionChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_SelectionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSelectorWidget_Statics::NewProp_CurrentIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSelectorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSelectorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSelectorWidget_Statics::ClassParams = {
		&USBZSelectorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSelectorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSelectorWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSelectorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSelectorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSelectorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSelectorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSelectorWidget, 773647839);
	template<> STARBREEZE_API UClass* StaticClass<USBZSelectorWidget>()
	{
		return USBZSelectorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSelectorWidget(Z_Construct_UClass_USBZSelectorWidget, &USBZSelectorWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSelectorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSelectorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
