// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInfamyWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInfamyWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInfamyWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInfamyWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInfamyManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZInfamyWidget::execOnInfamyAdded)
	{
		P_GET_OBJECT(USBZInfamyManager,Z_Param_InfamyManager);
		P_GET_PROPERTY(FIntProperty,Z_Param_InLevelValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InExpirienceValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInfamyAdded(Z_Param_InfamyManager,Z_Param_InLevelValue,Z_Param_InExpirienceValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInfamyWidget::execRefreshCurrentInfamyData)
	{
		P_GET_OBJECT(USBZInfamyManager,Z_Param_InfamyManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshCurrentInfamyData(Z_Param_InfamyManager);
		P_NATIVE_END;
	}
	static FName NAME_USBZInfamyWidget_OnInfamyValuesRefreshed = FName(TEXT("OnInfamyValuesRefreshed"));
	void USBZInfamyWidget::OnInfamyValuesRefreshed()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZInfamyWidget_OnInfamyValuesRefreshed),NULL);
	}
	void USBZInfamyWidget::StaticRegisterNativesUSBZInfamyWidget()
	{
		UClass* Class = USBZInfamyWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInfamyAdded", &USBZInfamyWidget::execOnInfamyAdded },
			{ "RefreshCurrentInfamyData", &USBZInfamyWidget::execRefreshCurrentInfamyData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics
	{
		struct SBZInfamyWidget_eventOnInfamyAdded_Parms
		{
			USBZInfamyManager* InfamyManager;
			int32 InLevelValue;
			int32 InExpirienceValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfamyManager;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLevelValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InExpirienceValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::NewProp_InfamyManager = { "InfamyManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyWidget_eventOnInfamyAdded_Parms, InfamyManager), Z_Construct_UClass_USBZInfamyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::NewProp_InLevelValue = { "InLevelValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyWidget_eventOnInfamyAdded_Parms, InLevelValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::NewProp_InExpirienceValue = { "InExpirienceValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyWidget_eventOnInfamyAdded_Parms, InExpirienceValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::NewProp_InfamyManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::NewProp_InLevelValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::NewProp_InExpirienceValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyWidget, nullptr, "OnInfamyAdded", nullptr, nullptr, sizeof(SBZInfamyWidget_eventOnInfamyAdded_Parms), Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInfamyWidget_OnInfamyValuesRefreshed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyWidget_OnInfamyValuesRefreshed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyWidget_OnInfamyValuesRefreshed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyWidget, nullptr, "OnInfamyValuesRefreshed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyWidget_OnInfamyValuesRefreshed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyWidget_OnInfamyValuesRefreshed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyWidget_OnInfamyValuesRefreshed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyWidget_OnInfamyValuesRefreshed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInfamyWidget_RefreshCurrentInfamyData_Statics
	{
		struct SBZInfamyWidget_eventRefreshCurrentInfamyData_Parms
		{
			USBZInfamyManager* InfamyManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfamyManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInfamyWidget_RefreshCurrentInfamyData_Statics::NewProp_InfamyManager = { "InfamyManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInfamyWidget_eventRefreshCurrentInfamyData_Parms, InfamyManager), Z_Construct_UClass_USBZInfamyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInfamyWidget_RefreshCurrentInfamyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInfamyWidget_RefreshCurrentInfamyData_Statics::NewProp_InfamyManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInfamyWidget_RefreshCurrentInfamyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInfamyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInfamyWidget_RefreshCurrentInfamyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInfamyWidget, nullptr, "RefreshCurrentInfamyData", nullptr, nullptr, sizeof(SBZInfamyWidget_eventRefreshCurrentInfamyData_Parms), Z_Construct_UFunction_USBZInfamyWidget_RefreshCurrentInfamyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyWidget_RefreshCurrentInfamyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInfamyWidget_RefreshCurrentInfamyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInfamyWidget_RefreshCurrentInfamyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInfamyWidget_RefreshCurrentInfamyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInfamyWidget_RefreshCurrentInfamyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZInfamyWidget_NoRegister()
	{
		return USBZInfamyWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZInfamyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperienceForCurrentLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExperienceForCurrentLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperienceForNextLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExperienceForNextLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentLevelProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMaxLevel_MetaData[];
#endif
		static void NewProp_bIsMaxLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMaxLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInfamyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZInfamyWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZInfamyWidget_OnInfamyAdded, "OnInfamyAdded" }, // 4105233183
		{ &Z_Construct_UFunction_USBZInfamyWidget_OnInfamyValuesRefreshed, "OnInfamyValuesRefreshed" }, // 1844041422
		{ &Z_Construct_UFunction_USBZInfamyWidget_RefreshCurrentInfamyData, "RefreshCurrentInfamyData" }, // 883033300
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInfamyWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInfamyWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInfamyWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_InfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyWidget" },
		{ "ModuleRelativePath", "Public/SBZInfamyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_InfamyLevel = { "InfamyLevel", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInfamyWidget, InfamyLevel), METADATA_PARAMS(Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_InfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_InfamyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_InfamyExperience_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyWidget" },
		{ "ModuleRelativePath", "Public/SBZInfamyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_InfamyExperience = { "InfamyExperience", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInfamyWidget, InfamyExperience), METADATA_PARAMS(Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_InfamyExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_InfamyExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_ExperienceForCurrentLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyWidget" },
		{ "ModuleRelativePath", "Public/SBZInfamyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_ExperienceForCurrentLevel = { "ExperienceForCurrentLevel", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInfamyWidget, ExperienceForCurrentLevel), METADATA_PARAMS(Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_ExperienceForCurrentLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_ExperienceForCurrentLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_ExperienceForNextLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyWidget" },
		{ "ModuleRelativePath", "Public/SBZInfamyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_ExperienceForNextLevel = { "ExperienceForNextLevel", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInfamyWidget, ExperienceForNextLevel), METADATA_PARAMS(Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_ExperienceForNextLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_ExperienceForNextLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_CurrentLevelProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyWidget" },
		{ "ModuleRelativePath", "Public/SBZInfamyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_CurrentLevelProgress = { "CurrentLevelProgress", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInfamyWidget, CurrentLevelProgress), METADATA_PARAMS(Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_CurrentLevelProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_CurrentLevelProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_bIsMaxLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyWidget" },
		{ "ModuleRelativePath", "Public/SBZInfamyWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_bIsMaxLevel_SetBit(void* Obj)
	{
		((USBZInfamyWidget*)Obj)->bIsMaxLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_bIsMaxLevel = { "bIsMaxLevel", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZInfamyWidget), &Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_bIsMaxLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_bIsMaxLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_bIsMaxLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZInfamyWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_InfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_InfamyExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_ExperienceForCurrentLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_ExperienceForNextLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_CurrentLevelProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInfamyWidget_Statics::NewProp_bIsMaxLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInfamyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInfamyWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInfamyWidget_Statics::ClassParams = {
		&USBZInfamyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZInfamyWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZInfamyWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZInfamyWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInfamyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInfamyWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInfamyWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInfamyWidget, 401005436);
	template<> STARBREEZE_API UClass* StaticClass<USBZInfamyWidget>()
	{
		return USBZInfamyWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInfamyWidget(Z_Construct_UClass_USBZInfamyWidget, &USBZInfamyWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInfamyWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInfamyWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
