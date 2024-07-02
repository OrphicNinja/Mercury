// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityDecider_AIObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityDecider_AIObjective() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjective();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIObjectiveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIUtilityDecider_AIObjective::execOnCancelationTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelationTimer();
		P_NATIVE_END;
	}
	void USBZAIUtilityDecider_AIObjective::StaticRegisterNativesUSBZAIUtilityDecider_AIObjective()
	{
		UClass* Class = USBZAIUtilityDecider_AIObjective::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCancelationTimer", &USBZAIUtilityDecider_AIObjective::execOnCancelationTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_AIObjective_OnCancelationTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_AIObjective_OnCancelationTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_AIObjective_OnCancelationTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider_AIObjective, nullptr, "OnCancelationTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_AIObjective_OnCancelationTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_AIObjective_OnCancelationTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_AIObjective_OnCancelationTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_AIObjective_OnCancelationTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_NoRegister()
	{
		return USBZAIUtilityDecider_AIObjective::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetObjectiveBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetObjectiveBBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_AIObjective_OnCancelationTimer, "OnCancelationTimer" }, // 3113983853
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityDecider_AIObjective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::NewProp_CurrentObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_AIObjective" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::NewProp_CurrentObjective = { "CurrentObjective", nullptr, (EPropertyFlags)0x002408000008200d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_AIObjective, CurrentObjective), Z_Construct_UClass_USBZAIObjectiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::NewProp_CurrentObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::NewProp_CurrentObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::NewProp_TargetObjectiveBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_AIObjective" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::NewProp_TargetObjectiveBBKey = { "TargetObjectiveBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_AIObjective, TargetObjectiveBBKey), METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::NewProp_TargetObjectiveBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::NewProp_TargetObjectiveBBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::NewProp_CurrentObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::NewProp_TargetObjectiveBBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityDecider_AIObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::ClassParams = {
		&USBZAIUtilityDecider_AIObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityDecider_AIObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityDecider_AIObjective, 3773577184);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityDecider_AIObjective>()
	{
		return USBZAIUtilityDecider_AIObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityDecider_AIObjective(Z_Construct_UClass_USBZAIUtilityDecider_AIObjective, &USBZAIUtilityDecider_AIObjective::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityDecider_AIObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityDecider_AIObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
