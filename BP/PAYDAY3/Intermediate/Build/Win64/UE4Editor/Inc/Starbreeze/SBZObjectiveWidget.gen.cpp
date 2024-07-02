// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZObjectiveWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZObjectiveWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectiveWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectiveWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZObjective_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZObjectiveWidget::execOnObjectiveActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObjectiveActivated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZObjectiveWidget::execOnObjectiveUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObjectiveUpdated();
		P_NATIVE_END;
	}
	static FName NAME_USBZObjectiveWidget_ObjectiveActivated = FName(TEXT("ObjectiveActivated"));
	void USBZObjectiveWidget::ObjectiveActivated(ASBZObjective* NewObjectiveActivated)
	{
		SBZObjectiveWidget_eventObjectiveActivated_Parms Parms;
		Parms.NewObjectiveActivated=NewObjectiveActivated;
		ProcessEvent(FindFunctionChecked(NAME_USBZObjectiveWidget_ObjectiveActivated),&Parms);
	}
	static FName NAME_USBZObjectiveWidget_ObjectiveCompleted = FName(TEXT("ObjectiveCompleted"));
	void USBZObjectiveWidget::ObjectiveCompleted(ASBZObjective* NewObjectiveCompleted)
	{
		SBZObjectiveWidget_eventObjectiveCompleted_Parms Parms;
		Parms.NewObjectiveCompleted=NewObjectiveCompleted;
		ProcessEvent(FindFunctionChecked(NAME_USBZObjectiveWidget_ObjectiveCompleted),&Parms);
	}
	static FName NAME_USBZObjectiveWidget_ObjectiveDisabled = FName(TEXT("ObjectiveDisabled"));
	void USBZObjectiveWidget::ObjectiveDisabled(ASBZObjective* NewObjectiveDisabled)
	{
		SBZObjectiveWidget_eventObjectiveDisabled_Parms Parms;
		Parms.NewObjectiveDisabled=NewObjectiveDisabled;
		ProcessEvent(FindFunctionChecked(NAME_USBZObjectiveWidget_ObjectiveDisabled),&Parms);
	}
	static FName NAME_USBZObjectiveWidget_ObjectiveFailed = FName(TEXT("ObjectiveFailed"));
	void USBZObjectiveWidget::ObjectiveFailed(ASBZObjective* NewObjectiveFailed)
	{
		SBZObjectiveWidget_eventObjectiveFailed_Parms Parms;
		Parms.NewObjectiveFailed=NewObjectiveFailed;
		ProcessEvent(FindFunctionChecked(NAME_USBZObjectiveWidget_ObjectiveFailed),&Parms);
	}
	static FName NAME_USBZObjectiveWidget_ObjectiveUpdated = FName(TEXT("ObjectiveUpdated"));
	void USBZObjectiveWidget::ObjectiveUpdated(ASBZObjective* NewObjectiveUpdated)
	{
		SBZObjectiveWidget_eventObjectiveUpdated_Parms Parms;
		Parms.NewObjectiveUpdated=NewObjectiveUpdated;
		ProcessEvent(FindFunctionChecked(NAME_USBZObjectiveWidget_ObjectiveUpdated),&Parms);
	}
	static FName NAME_USBZObjectiveWidget_OnObjectiveInitialized = FName(TEXT("OnObjectiveInitialized"));
	void USBZObjectiveWidget::OnObjectiveInitialized(ASBZObjective* ObjectiveInit, bool bIsSubObjective)
	{
		SBZObjectiveWidget_eventOnObjectiveInitialized_Parms Parms;
		Parms.ObjectiveInit=ObjectiveInit;
		Parms.bIsSubObjective=bIsSubObjective ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZObjectiveWidget_OnObjectiveInitialized),&Parms);
	}
	static FName NAME_USBZObjectiveWidget_OnObjectiveRemoved = FName(TEXT("OnObjectiveRemoved"));
	void USBZObjectiveWidget::OnObjectiveRemoved()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZObjectiveWidget_OnObjectiveRemoved),NULL);
	}
	void USBZObjectiveWidget::StaticRegisterNativesUSBZObjectiveWidget()
	{
		UClass* Class = USBZObjectiveWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnObjectiveActivated", &USBZObjectiveWidget::execOnObjectiveActivated },
			{ "OnObjectiveUpdated", &USBZObjectiveWidget::execOnObjectiveUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveActivated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewObjectiveActivated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveActivated_Statics::NewProp_NewObjectiveActivated = { "NewObjectiveActivated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectiveWidget_eventObjectiveActivated_Parms, NewObjectiveActivated), Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveActivated_Statics::NewProp_NewObjectiveActivated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectiveWidget, nullptr, "ObjectiveActivated", nullptr, nullptr, sizeof(SBZObjectiveWidget_eventObjectiveActivated_Parms), Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveCompleted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewObjectiveCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveCompleted_Statics::NewProp_NewObjectiveCompleted = { "NewObjectiveCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectiveWidget_eventObjectiveCompleted_Parms, NewObjectiveCompleted), Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveCompleted_Statics::NewProp_NewObjectiveCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectiveWidget, nullptr, "ObjectiveCompleted", nullptr, nullptr, sizeof(SBZObjectiveWidget_eventObjectiveCompleted_Parms), Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveDisabled_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewObjectiveDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveDisabled_Statics::NewProp_NewObjectiveDisabled = { "NewObjectiveDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectiveWidget_eventObjectiveDisabled_Parms, NewObjectiveDisabled), Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveDisabled_Statics::NewProp_NewObjectiveDisabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectiveWidget, nullptr, "ObjectiveDisabled", nullptr, nullptr, sizeof(SBZObjectiveWidget_eventObjectiveDisabled_Parms), Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveFailed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewObjectiveFailed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveFailed_Statics::NewProp_NewObjectiveFailed = { "NewObjectiveFailed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectiveWidget_eventObjectiveFailed_Parms, NewObjectiveFailed), Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveFailed_Statics::NewProp_NewObjectiveFailed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectiveWidget, nullptr, "ObjectiveFailed", nullptr, nullptr, sizeof(SBZObjectiveWidget_eventObjectiveFailed_Parms), Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveUpdated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewObjectiveUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveUpdated_Statics::NewProp_NewObjectiveUpdated = { "NewObjectiveUpdated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectiveWidget_eventObjectiveUpdated_Parms, NewObjectiveUpdated), Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveUpdated_Statics::NewProp_NewObjectiveUpdated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectiveWidget, nullptr, "ObjectiveUpdated", nullptr, nullptr, sizeof(SBZObjectiveWidget_eventObjectiveUpdated_Parms), Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectiveWidget, nullptr, "OnObjectiveActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveInit;
		static void NewProp_bIsSubObjective_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSubObjective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::NewProp_ObjectiveInit = { "ObjectiveInit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectiveWidget_eventOnObjectiveInitialized_Parms, ObjectiveInit), Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::NewProp_bIsSubObjective_SetBit(void* Obj)
	{
		((SBZObjectiveWidget_eventOnObjectiveInitialized_Parms*)Obj)->bIsSubObjective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::NewProp_bIsSubObjective = { "bIsSubObjective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZObjectiveWidget_eventOnObjectiveInitialized_Parms), &Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::NewProp_bIsSubObjective_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::NewProp_ObjectiveInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::NewProp_bIsSubObjective,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectiveWidget, nullptr, "OnObjectiveInitialized", nullptr, nullptr, sizeof(SBZObjectiveWidget_eventOnObjectiveInitialized_Parms), Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveRemoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectiveWidget, nullptr, "OnObjectiveRemoved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectiveWidget, nullptr, "OnObjectiveUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZObjectiveWidget_NoRegister()
	{
		return USBZObjectiveWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZObjectiveWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubObjectiveWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SubObjectiveWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Objective_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Objective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_ProgressSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_ProgressSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_SubObjectivesContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_SubObjectivesContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTimed_MetaData[];
#endif
		static void NewProp_bIsTimed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTimed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objective_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZObjectiveWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZObjectiveWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveActivated, "ObjectiveActivated" }, // 2187144820
		{ &Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveCompleted, "ObjectiveCompleted" }, // 4048803091
		{ &Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveDisabled, "ObjectiveDisabled" }, // 253586662
		{ &Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveFailed, "ObjectiveFailed" }, // 2272370817
		{ &Z_Construct_UFunction_USBZObjectiveWidget_ObjectiveUpdated, "ObjectiveUpdated" }, // 449373335
		{ &Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveActivated, "OnObjectiveActivated" }, // 1162569830
		{ &Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveInitialized, "OnObjectiveInitialized" }, // 3897390368
		{ &Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveRemoved, "OnObjectiveRemoved" }, // 2361716371
		{ &Z_Construct_UFunction_USBZObjectiveWidget_OnObjectiveUpdated, "OnObjectiveUpdated" }, // 153209802
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZObjectiveWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_SubObjectiveWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectiveWidget" },
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_SubObjectiveWidgetClass = { "SubObjectiveWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectiveWidget, SubObjectiveWidgetClass), Z_Construct_UClass_USBZObjectiveWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_SubObjectiveWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_SubObjectiveWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Text_Objective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectiveWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Text_Objective = { "Text_Objective", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectiveWidget, Text_Objective), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Text_Objective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Text_Objective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_ProgressBar_Progress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectiveWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_ProgressBar_Progress = { "ProgressBar_Progress", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectiveWidget, ProgressBar_Progress), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_ProgressBar_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_ProgressBar_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Text_ProgressSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectiveWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Text_ProgressSpeed = { "Text_ProgressSpeed", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectiveWidget, Text_ProgressSpeed), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Text_ProgressSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Text_ProgressSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Panel_SubObjectivesContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectiveWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Panel_SubObjectivesContainer = { "Panel_SubObjectivesContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectiveWidget, Panel_SubObjectivesContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Panel_SubObjectivesContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Panel_SubObjectivesContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectiveWidget" },
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((USBZObjectiveWidget*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZObjectiveWidget), &Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsTimed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectiveWidget" },
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsTimed_SetBit(void* Obj)
	{
		((USBZObjectiveWidget*)Obj)->bIsTimed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsTimed = { "bIsTimed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZObjectiveWidget), &Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsTimed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsTimed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsTimed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Objective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectiveWidget" },
		{ "ModuleRelativePath", "Public/SBZObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectiveWidget, Objective), Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Objective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Objective_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZObjectiveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_SubObjectiveWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Text_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_ProgressBar_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Text_ProgressSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Panel_SubObjectivesContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_bIsTimed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectiveWidget_Statics::NewProp_Objective,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZObjectiveWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZObjectiveWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZObjectiveWidget_Statics::ClassParams = {
		&USBZObjectiveWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZObjectiveWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZObjectiveWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZObjectiveWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZObjectiveWidget, 3322991795);
	template<> STARBREEZE_API UClass* StaticClass<USBZObjectiveWidget>()
	{
		return USBZObjectiveWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZObjectiveWidget(Z_Construct_UClass_USBZObjectiveWidget, &USBZObjectiveWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZObjectiveWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZObjectiveWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
