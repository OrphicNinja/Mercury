// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityScorer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityScorer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIScorer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIUtilityScorer::execCalcScoreBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalcScoreBP_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USBZAIUtilityScorer_CalcScoreBP = FName(TEXT("CalcScoreBP"));
	float USBZAIUtilityScorer::CalcScoreBP() const
	{
		SBZAIUtilityScorer_eventCalcScoreBP_Parms Parms;
		const_cast<USBZAIUtilityScorer*>(this)->ProcessEvent(FindFunctionChecked(NAME_USBZAIUtilityScorer_CalcScoreBP),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_USBZAIUtilityScorer_OnActivatedBP = FName(TEXT("OnActivatedBP"));
	void USBZAIUtilityScorer::OnActivatedBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAIUtilityScorer_OnActivatedBP),NULL);
	}
	static FName NAME_USBZAIUtilityScorer_OnDeactivatedBP = FName(TEXT("OnDeactivatedBP"));
	void USBZAIUtilityScorer::OnDeactivatedBP(TEnumAsByte<EBTNodeResult::Type> const& NodeResult)
	{
		SBZAIUtilityScorer_eventOnDeactivatedBP_Parms Parms;
		Parms.NodeResult=NodeResult;
		ProcessEvent(FindFunctionChecked(NAME_USBZAIUtilityScorer_OnDeactivatedBP),&Parms);
	}
	static FName NAME_USBZAIUtilityScorer_OnDeselectedBP = FName(TEXT("OnDeselectedBP"));
	void USBZAIUtilityScorer::OnDeselectedBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAIUtilityScorer_OnDeselectedBP),NULL);
	}
	static FName NAME_USBZAIUtilityScorer_OnSelectedBP = FName(TEXT("OnSelectedBP"));
	void USBZAIUtilityScorer::OnSelectedBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAIUtilityScorer_OnSelectedBP),NULL);
	}
	void USBZAIUtilityScorer::StaticRegisterNativesUSBZAIUtilityScorer()
	{
		UClass* Class = USBZAIUtilityScorer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcScoreBP", &USBZAIUtilityScorer::execCalcScoreBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIUtilityScorer_CalcScoreBP_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAIUtilityScorer_CalcScoreBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIUtilityScorer_eventCalcScoreBP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIUtilityScorer_CalcScoreBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIUtilityScorer_CalcScoreBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityScorer_CalcScoreBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityScorer_CalcScoreBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityScorer, nullptr, "CalcScoreBP", nullptr, nullptr, sizeof(SBZAIUtilityScorer_eventCalcScoreBP_Parms), Z_Construct_UFunction_USBZAIUtilityScorer_CalcScoreBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityScorer_CalcScoreBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityScorer_CalcScoreBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityScorer_CalcScoreBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityScorer_CalcScoreBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityScorer_CalcScoreBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityScorer_OnActivatedBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityScorer_OnActivatedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityScorer_OnActivatedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityScorer, nullptr, "OnActivatedBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityScorer_OnActivatedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityScorer_OnActivatedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityScorer_OnActivatedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityScorer_OnActivatedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics::NewProp_NodeResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics::NewProp_NodeResult = { "NodeResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIUtilityScorer_eventOnDeactivatedBP_Parms, NodeResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics::NewProp_NodeResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics::NewProp_NodeResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics::NewProp_NodeResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityScorer, nullptr, "OnDeactivatedBP", nullptr, nullptr, sizeof(SBZAIUtilityScorer_eventOnDeactivatedBP_Parms), Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityScorer_OnDeselectedBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityScorer_OnDeselectedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityScorer_OnDeselectedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityScorer, nullptr, "OnDeselectedBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityScorer_OnDeselectedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityScorer_OnDeselectedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityScorer_OnDeselectedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityScorer_OnDeselectedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityScorer_OnSelectedBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityScorer_OnSelectedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityScorer_OnSelectedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityScorer, nullptr, "OnSelectedBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityScorer_OnSelectedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityScorer_OnSelectedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityScorer_OnSelectedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityScorer_OnSelectedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIUtilityScorer_NoRegister()
	{
		return USBZAIUtilityScorer::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityScorer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityScorer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIScorer,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIUtilityScorer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIUtilityScorer_CalcScoreBP, "CalcScoreBP" }, // 363394466
		{ &Z_Construct_UFunction_USBZAIUtilityScorer_OnActivatedBP, "OnActivatedBP" }, // 949774639
		{ &Z_Construct_UFunction_USBZAIUtilityScorer_OnDeactivatedBP, "OnDeactivatedBP" }, // 3350166768
		{ &Z_Construct_UFunction_USBZAIUtilityScorer_OnDeselectedBP, "OnDeselectedBP" }, // 342305719
		{ &Z_Construct_UFunction_USBZAIUtilityScorer_OnSelectedBP, "OnSelectedBP" }, // 2077729606
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityScorer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityScorer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityScorer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityScorer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityScorer_Statics::ClassParams = {
		&USBZAIUtilityScorer::StaticClass,
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
		0x008010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityScorer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityScorer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityScorer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityScorer, 3881533761);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityScorer>()
	{
		return USBZAIUtilityScorer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityScorer(Z_Construct_UClass_USBZAIUtilityScorer, &USBZAIUtilityScorer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityScorer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityScorer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
