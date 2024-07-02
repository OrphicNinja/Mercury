// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCarouselWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCarouselWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCarouselWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCarouselWidget();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnCurrentPageIndexChanged__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZCarouselWidget::execGetActiveIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCarouselWidget::execGetWidgetAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetWidgetAtIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCarouselWidget::execNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCarouselWidget::execPreviousPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviousPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCarouselWidget::execSetActiveWidget)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCarouselWidget::execSetActiveWidgetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveWidgetIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCarouselWidget::execStartScrolling)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InScrollInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartScrolling(Z_Param_InScrollInterval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCarouselWidget::execStopScrolling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopScrolling();
		P_NATIVE_END;
	}
	void USBZCarouselWidget::StaticRegisterNativesUSBZCarouselWidget()
	{
		UClass* Class = USBZCarouselWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveIndex", &USBZCarouselWidget::execGetActiveIndex },
			{ "GetWidgetAtIndex", &USBZCarouselWidget::execGetWidgetAtIndex },
			{ "NextPage", &USBZCarouselWidget::execNextPage },
			{ "PreviousPage", &USBZCarouselWidget::execPreviousPage },
			{ "SetActiveWidget", &USBZCarouselWidget::execSetActiveWidget },
			{ "SetActiveWidgetIndex", &USBZCarouselWidget::execSetActiveWidgetIndex },
			{ "StartScrolling", &USBZCarouselWidget::execStartScrolling },
			{ "StopScrolling", &USBZCarouselWidget::execStopScrolling },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCarouselWidget_GetActiveIndex_Statics
	{
		struct SBZCarouselWidget_eventGetActiveIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCarouselWidget_GetActiveIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarouselWidget_eventGetActiveIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCarouselWidget_GetActiveIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCarouselWidget_GetActiveIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCarouselWidget_GetActiveIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarouselWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCarouselWidget_GetActiveIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCarouselWidget, nullptr, "GetActiveIndex", nullptr, nullptr, sizeof(SBZCarouselWidget_eventGetActiveIndex_Parms), Z_Construct_UFunction_USBZCarouselWidget_GetActiveIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_GetActiveIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCarouselWidget_GetActiveIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_GetActiveIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCarouselWidget_GetActiveIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCarouselWidget_GetActiveIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics
	{
		struct SBZCarouselWidget_eventGetWidgetAtIndex_Parms
		{
			int32 Index;
			UWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarouselWidget_eventGetWidgetAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarouselWidget_eventGetWidgetAtIndex_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarouselWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCarouselWidget, nullptr, "GetWidgetAtIndex", nullptr, nullptr, sizeof(SBZCarouselWidget_eventGetWidgetAtIndex_Parms), Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCarouselWidget_NextPage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCarouselWidget_NextPage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarouselWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCarouselWidget_NextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCarouselWidget, nullptr, "NextPage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCarouselWidget_NextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_NextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCarouselWidget_NextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCarouselWidget_NextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCarouselWidget_PreviousPage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCarouselWidget_PreviousPage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarouselWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCarouselWidget_PreviousPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCarouselWidget, nullptr, "PreviousPage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCarouselWidget_PreviousPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_PreviousPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCarouselWidget_PreviousPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCarouselWidget_PreviousPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics
	{
		struct SBZCarouselWidget_eventSetActiveWidget_Parms
		{
			UWidget* Widget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarouselWidget_eventSetActiveWidget_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarouselWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCarouselWidget, nullptr, "SetActiveWidget", nullptr, nullptr, sizeof(SBZCarouselWidget_eventSetActiveWidget_Parms), Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidgetIndex_Statics
	{
		struct SBZCarouselWidget_eventSetActiveWidgetIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidgetIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarouselWidget_eventSetActiveWidgetIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidgetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidgetIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarouselWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCarouselWidget, nullptr, "SetActiveWidgetIndex", nullptr, nullptr, sizeof(SBZCarouselWidget_eventSetActiveWidgetIndex_Parms), Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidgetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidgetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidgetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCarouselWidget_StartScrolling_Statics
	{
		struct SBZCarouselWidget_eventStartScrolling_Parms
		{
			float InScrollInterval;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InScrollInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCarouselWidget_StartScrolling_Statics::NewProp_InScrollInterval = { "InScrollInterval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarouselWidget_eventStartScrolling_Parms, InScrollInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCarouselWidget_StartScrolling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCarouselWidget_StartScrolling_Statics::NewProp_InScrollInterval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCarouselWidget_StartScrolling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarouselWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCarouselWidget_StartScrolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCarouselWidget, nullptr, "StartScrolling", nullptr, nullptr, sizeof(SBZCarouselWidget_eventStartScrolling_Parms), Z_Construct_UFunction_USBZCarouselWidget_StartScrolling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_StartScrolling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCarouselWidget_StartScrolling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_StartScrolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCarouselWidget_StartScrolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCarouselWidget_StartScrolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCarouselWidget_StopScrolling_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCarouselWidget_StopScrolling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarouselWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCarouselWidget_StopScrolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCarouselWidget, nullptr, "StopScrolling", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCarouselWidget_StopScrolling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCarouselWidget_StopScrolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCarouselWidget_StopScrolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCarouselWidget_StopScrolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCarouselWidget_NoRegister()
	{
		return USBZCarouselWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZCarouselWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCurrentPageIndexChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentPageIndexChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScrollInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScrollSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCarouselWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCarouselWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCarouselWidget_GetActiveIndex, "GetActiveIndex" }, // 3792721411
		{ &Z_Construct_UFunction_USBZCarouselWidget_GetWidgetAtIndex, "GetWidgetAtIndex" }, // 953255335
		{ &Z_Construct_UFunction_USBZCarouselWidget_NextPage, "NextPage" }, // 3206899031
		{ &Z_Construct_UFunction_USBZCarouselWidget_PreviousPage, "PreviousPage" }, // 3598562699
		{ &Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidget, "SetActiveWidget" }, // 4133771943
		{ &Z_Construct_UFunction_USBZCarouselWidget_SetActiveWidgetIndex, "SetActiveWidgetIndex" }, // 2255424869
		{ &Z_Construct_UFunction_USBZCarouselWidget_StartScrolling, "StartScrolling" }, // 666859213
		{ &Z_Construct_UFunction_USBZCarouselWidget_StopScrolling, "StopScrolling" }, // 2462736716
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCarouselWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCarouselWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCarouselWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_OnCurrentPageIndexChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarouselWidget" },
		{ "ModuleRelativePath", "Public/SBZCarouselWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_OnCurrentPageIndexChanged = { "OnCurrentPageIndexChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCarouselWidget, OnCurrentPageIndexChanged), Z_Construct_UDelegateFunction_Starbreeze_OnCurrentPageIndexChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_OnCurrentPageIndexChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_OnCurrentPageIndexChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ActiveIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarouselWidget" },
		{ "ModuleRelativePath", "Public/SBZCarouselWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ActiveIndex = { "ActiveIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCarouselWidget, ActiveIndex), METADATA_PARAMS(Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ActiveIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ActiveIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ScrollInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarouselWidget" },
		{ "ModuleRelativePath", "Public/SBZCarouselWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ScrollInterval = { "ScrollInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCarouselWidget, ScrollInterval), METADATA_PARAMS(Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ScrollInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ScrollInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ScrollSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarouselWidget" },
		{ "ModuleRelativePath", "Public/SBZCarouselWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ScrollSpeed = { "ScrollSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCarouselWidget, ScrollSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ScrollSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ScrollSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCarouselWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_OnCurrentPageIndexChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ActiveIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ScrollInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCarouselWidget_Statics::NewProp_ScrollSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCarouselWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCarouselWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCarouselWidget_Statics::ClassParams = {
		&USBZCarouselWidget::StaticClass,
		"StarbreezeUI",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCarouselWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCarouselWidget_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCarouselWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCarouselWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCarouselWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCarouselWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCarouselWidget, 308645737);
	template<> STARBREEZE_API UClass* StaticClass<USBZCarouselWidget>()
	{
		return USBZCarouselWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCarouselWidget(Z_Construct_UClass_USBZCarouselWidget, &USBZCarouselWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCarouselWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCarouselWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
