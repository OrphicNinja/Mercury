// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRewardWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRewardWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRewardWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRewardWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInfamyManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZRewardWidget::execOnChallengeCompleted)
	{
		P_GET_STRUCT_REF(FSBZChallengeData,Z_Param_Out_ChallengeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChallengeCompleted(Z_Param_Out_ChallengeData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZRewardWidget::execOnInfamyChanged)
	{
		P_GET_OBJECT(USBZInfamyManager,Z_Param_InfamyManager);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewInfamyExperience);
		P_GET_PROPERTY(FIntProperty,Z_Param_PreviousInfamyExperience);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInfamyChanged(Z_Param_InfamyManager,Z_Param_NewInfamyExperience,Z_Param_PreviousInfamyExperience);
		P_NATIVE_END;
	}
	static FName NAME_USBZRewardWidget_ChallengeCompleted = FName(TEXT("ChallengeCompleted"));
	void USBZRewardWidget::ChallengeCompleted(FSBZChallengeData const& ChallengeData)
	{
		SBZRewardWidget_eventChallengeCompleted_Parms Parms;
		Parms.ChallengeData=ChallengeData;
		ProcessEvent(FindFunctionChecked(NAME_USBZRewardWidget_ChallengeCompleted),&Parms);
	}
	static FName NAME_USBZRewardWidget_InfamyExperinceChanged = FName(TEXT("InfamyExperinceChanged"));
	void USBZRewardWidget::InfamyExperinceChanged(int32 PreviousInfamyExperince, int32 CurrentInfamyExperience, int32 SkillPointsEarned)
	{
		SBZRewardWidget_eventInfamyExperinceChanged_Parms Parms;
		Parms.PreviousInfamyExperince=PreviousInfamyExperince;
		Parms.CurrentInfamyExperience=CurrentInfamyExperience;
		Parms.SkillPointsEarned=SkillPointsEarned;
		ProcessEvent(FindFunctionChecked(NAME_USBZRewardWidget_InfamyExperinceChanged),&Parms);
	}
	void USBZRewardWidget::StaticRegisterNativesUSBZRewardWidget()
	{
		UClass* Class = USBZRewardWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnChallengeCompleted", &USBZRewardWidget::execOnChallengeCompleted },
			{ "OnInfamyChanged", &USBZRewardWidget::execOnInfamyChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics::NewProp_ChallengeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics::NewProp_ChallengeData = { "ChallengeData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRewardWidget_eventChallengeCompleted_Parms, ChallengeData), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics::NewProp_ChallengeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics::NewProp_ChallengeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics::NewProp_ChallengeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRewardWidget, nullptr, "ChallengeCompleted", nullptr, nullptr, sizeof(SBZRewardWidget_eventChallengeCompleted_Parms), Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousInfamyExperince;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentInfamyExperience;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillPointsEarned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::NewProp_PreviousInfamyExperince = { "PreviousInfamyExperince", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRewardWidget_eventInfamyExperinceChanged_Parms, PreviousInfamyExperince), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::NewProp_CurrentInfamyExperience = { "CurrentInfamyExperience", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRewardWidget_eventInfamyExperinceChanged_Parms, CurrentInfamyExperience), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::NewProp_SkillPointsEarned = { "SkillPointsEarned", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRewardWidget_eventInfamyExperinceChanged_Parms, SkillPointsEarned), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::NewProp_PreviousInfamyExperince,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::NewProp_CurrentInfamyExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::NewProp_SkillPointsEarned,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRewardWidget, nullptr, "InfamyExperinceChanged", nullptr, nullptr, sizeof(SBZRewardWidget_eventInfamyExperinceChanged_Parms), Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics
	{
		struct SBZRewardWidget_eventOnChallengeCompleted_Parms
		{
			FSBZChallengeData ChallengeData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics::NewProp_ChallengeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics::NewProp_ChallengeData = { "ChallengeData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRewardWidget_eventOnChallengeCompleted_Parms, ChallengeData), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics::NewProp_ChallengeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics::NewProp_ChallengeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics::NewProp_ChallengeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRewardWidget, nullptr, "OnChallengeCompleted", nullptr, nullptr, sizeof(SBZRewardWidget_eventOnChallengeCompleted_Parms), Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics
	{
		struct SBZRewardWidget_eventOnInfamyChanged_Parms
		{
			USBZInfamyManager* InfamyManager;
			int32 NewInfamyExperience;
			int32 PreviousInfamyExperience;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfamyManager;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewInfamyExperience;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousInfamyExperience;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::NewProp_InfamyManager = { "InfamyManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRewardWidget_eventOnInfamyChanged_Parms, InfamyManager), Z_Construct_UClass_USBZInfamyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::NewProp_NewInfamyExperience = { "NewInfamyExperience", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRewardWidget_eventOnInfamyChanged_Parms, NewInfamyExperience), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::NewProp_PreviousInfamyExperience = { "PreviousInfamyExperience", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRewardWidget_eventOnInfamyChanged_Parms, PreviousInfamyExperience), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::NewProp_InfamyManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::NewProp_NewInfamyExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::NewProp_PreviousInfamyExperience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRewardWidget, nullptr, "OnInfamyChanged", nullptr, nullptr, sizeof(SBZRewardWidget_eventOnInfamyChanged_Parms), Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZRewardWidget_NoRegister()
	{
		return USBZRewardWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZRewardWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRewardWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZRewardWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZRewardWidget_ChallengeCompleted, "ChallengeCompleted" }, // 2795790801
		{ &Z_Construct_UFunction_USBZRewardWidget_InfamyExperinceChanged, "InfamyExperinceChanged" }, // 2082460361
		{ &Z_Construct_UFunction_USBZRewardWidget_OnChallengeCompleted, "OnChallengeCompleted" }, // 2640646098
		{ &Z_Construct_UFunction_USBZRewardWidget_OnInfamyChanged, "OnInfamyChanged" }, // 130852637
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRewardWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZRewardWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRewardWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRewardWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRewardWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRewardWidget_Statics::ClassParams = {
		&USBZRewardWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZRewardWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRewardWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRewardWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRewardWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRewardWidget, 1188175592);
	template<> STARBREEZE_API UClass* StaticClass<USBZRewardWidget>()
	{
		return USBZRewardWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRewardWidget(Z_Construct_UClass_USBZRewardWidget, &USBZRewardWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRewardWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRewardWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
