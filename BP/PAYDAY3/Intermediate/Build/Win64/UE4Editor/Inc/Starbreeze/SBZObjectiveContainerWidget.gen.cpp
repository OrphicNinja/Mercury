// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZObjectiveContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZObjectiveContainerWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectiveContainerWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectiveContainerWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZObjective_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectiveWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZObjectiveContainerWidget::execOnObjectiveAdded)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectiveUObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObjectiveAdded(Z_Param_ObjectiveUObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZObjectiveContainerWidget::execOnObjectiveRemoved)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectiveUObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObjectiveRemoved(Z_Param_ObjectiveUObject);
		P_NATIVE_END;
	}
	static FName NAME_USBZObjectiveContainerWidget_ObjectiveAdded = FName(TEXT("ObjectiveAdded"));
	void USBZObjectiveContainerWidget::ObjectiveAdded(ASBZObjective* Objective)
	{
		SBZObjectiveContainerWidget_eventObjectiveAdded_Parms Parms;
		Parms.Objective=Objective;
		ProcessEvent(FindFunctionChecked(NAME_USBZObjectiveContainerWidget_ObjectiveAdded),&Parms);
	}
	static FName NAME_USBZObjectiveContainerWidget_ObjectiveRemove = FName(TEXT("ObjectiveRemove"));
	void USBZObjectiveContainerWidget::ObjectiveRemove(ASBZObjective* Objective)
	{
		SBZObjectiveContainerWidget_eventObjectiveRemove_Parms Parms;
		Parms.Objective=Objective;
		ProcessEvent(FindFunctionChecked(NAME_USBZObjectiveContainerWidget_ObjectiveRemove),&Parms);
	}
	void USBZObjectiveContainerWidget::StaticRegisterNativesUSBZObjectiveContainerWidget()
	{
		UClass* Class = USBZObjectiveContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnObjectiveAdded", &USBZObjectiveContainerWidget::execOnObjectiveAdded },
			{ "OnObjectiveRemoved", &USBZObjectiveContainerWidget::execOnObjectiveRemoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveAdded_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveAdded_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectiveContainerWidget_eventObjectiveAdded_Parms, Objective), Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveAdded_Statics::NewProp_Objective,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectiveContainerWidget, nullptr, "ObjectiveAdded", nullptr, nullptr, sizeof(SBZObjectiveContainerWidget_eventObjectiveAdded_Parms), Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveRemove_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveRemove_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectiveContainerWidget_eventObjectiveRemove_Parms, Objective), Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveRemove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveRemove_Statics::NewProp_Objective,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveRemove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectiveContainerWidget, nullptr, "ObjectiveRemove", nullptr, nullptr, sizeof(SBZObjectiveContainerWidget_eventObjectiveRemove_Parms), Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveRemove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveRemove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveRemove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveRemove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveAdded_Statics
	{
		struct SBZObjectiveContainerWidget_eventOnObjectiveAdded_Parms
		{
			UObject* ObjectiveUObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveUObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveAdded_Statics::NewProp_ObjectiveUObject = { "ObjectiveUObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectiveContainerWidget_eventOnObjectiveAdded_Parms, ObjectiveUObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveAdded_Statics::NewProp_ObjectiveUObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectiveContainerWidget, nullptr, "OnObjectiveAdded", nullptr, nullptr, sizeof(SBZObjectiveContainerWidget_eventOnObjectiveAdded_Parms), Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveRemoved_Statics
	{
		struct SBZObjectiveContainerWidget_eventOnObjectiveRemoved_Parms
		{
			UObject* ObjectiveUObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveUObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveRemoved_Statics::NewProp_ObjectiveUObject = { "ObjectiveUObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectiveContainerWidget_eventOnObjectiveRemoved_Parms, ObjectiveUObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveRemoved_Statics::NewProp_ObjectiveUObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectiveContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectiveContainerWidget, nullptr, "OnObjectiveRemoved", nullptr, nullptr, sizeof(SBZObjectiveContainerWidget_eventOnObjectiveRemoved_Parms), Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZObjectiveContainerWidget_NoRegister()
	{
		return USBZObjectiveContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZObjectiveContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ObjectivesContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ObjectivesContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_OptionalObjectivesContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_OptionalObjectivesContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectiveWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveAdded, "ObjectiveAdded" }, // 2902649945
		{ &Z_Construct_UFunction_USBZObjectiveContainerWidget_ObjectiveRemove, "ObjectiveRemove" }, // 4276593167
		{ &Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveAdded, "OnObjectiveAdded" }, // 1377158602
		{ &Z_Construct_UFunction_USBZObjectiveContainerWidget_OnObjectiveRemoved, "OnObjectiveRemoved" }, // 576822691
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZObjectiveContainerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZObjectiveContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_Panel_ObjectivesContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectiveContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZObjectiveContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_Panel_ObjectivesContainer = { "Panel_ObjectivesContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectiveContainerWidget, Panel_ObjectivesContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_Panel_ObjectivesContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_Panel_ObjectivesContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_Panel_OptionalObjectivesContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectiveContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZObjectiveContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_Panel_OptionalObjectivesContainer = { "Panel_OptionalObjectivesContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectiveContainerWidget, Panel_OptionalObjectivesContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_Panel_OptionalObjectivesContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_Panel_OptionalObjectivesContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_ObjectiveWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectiveContainerWidget" },
		{ "ModuleRelativePath", "Public/SBZObjectiveContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_ObjectiveWidgetClass = { "ObjectiveWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectiveContainerWidget, ObjectiveWidgetClass), Z_Construct_UClass_USBZObjectiveWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_ObjectiveWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_ObjectiveWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_Panel_ObjectivesContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_Panel_OptionalObjectivesContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::NewProp_ObjectiveWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZObjectiveContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::ClassParams = {
		&USBZObjectiveContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZObjectiveContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZObjectiveContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZObjectiveContainerWidget, 103876700);
	template<> STARBREEZE_API UClass* StaticClass<USBZObjectiveContainerWidget>()
	{
		return USBZObjectiveContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZObjectiveContainerWidget(Z_Construct_UClass_USBZObjectiveContainerWidget, &USBZObjectiveContainerWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZObjectiveContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZObjectiveContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
