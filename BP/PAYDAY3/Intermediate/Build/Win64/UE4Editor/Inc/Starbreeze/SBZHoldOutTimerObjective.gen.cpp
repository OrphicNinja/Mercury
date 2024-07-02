// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutTimerObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutTimerObjective() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutTimerObjective_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutTimerObjective();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutObjectiveBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZModifiableTimer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZHoldOutTimerObjective::execOnTimerFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTimerFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHoldOutTimerObjective::execOnTimerProgressionReached)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProgressionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTimerProgressionReached(Z_Param_ProgressionIndex);
		P_NATIVE_END;
	}
	void USBZHoldOutTimerObjective::StaticRegisterNativesUSBZHoldOutTimerObjective()
	{
		UClass* Class = USBZHoldOutTimerObjective::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTimerFinished", &USBZHoldOutTimerObjective::execOnTimerFinished },
			{ "OnTimerProgressionReached", &USBZHoldOutTimerObjective::execOnTimerProgressionReached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutTimerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutTimerObjective, nullptr, "OnTimerFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerProgressionReached_Statics
	{
		struct SBZHoldOutTimerObjective_eventOnTimerProgressionReached_Parms
		{
			int32 ProgressionIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProgressionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerProgressionReached_Statics::NewProp_ProgressionIndex = { "ProgressionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutTimerObjective_eventOnTimerProgressionReached_Parms, ProgressionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerProgressionReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerProgressionReached_Statics::NewProp_ProgressionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerProgressionReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutTimerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerProgressionReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutTimerObjective, nullptr, "OnTimerProgressionReached", nullptr, nullptr, sizeof(SBZHoldOutTimerObjective_eventOnTimerProgressionReached_Parms), Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerProgressionReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerProgressionReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerProgressionReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerProgressionReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerProgressionReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerProgressionReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHoldOutTimerObjective_NoRegister()
	{
		return USBZHoldOutTimerObjective::StaticClass();
	}
	struct Z_Construct_UClass_USBZHoldOutTimerObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifiableTimerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModifiableTimerActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZHoldOutObjectiveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerFinished, "OnTimerFinished" }, // 1709057744
		{ &Z_Construct_UFunction_USBZHoldOutTimerObjective_OnTimerProgressionReached, "OnTimerProgressionReached" }, // 3466650445
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHoldOutTimerObjective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutTimerObjective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::NewProp_ModifiableTimerActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutTimerObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutTimerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::NewProp_ModifiableTimerActor = { "ModifiableTimerActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutTimerObjective, ModifiableTimerActor), Z_Construct_UClass_ASBZModifiableTimer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::NewProp_ModifiableTimerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::NewProp_ModifiableTimerActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutTimerObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutTimerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutTimerObjective, Duration), METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::NewProp_ModifiableTimerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::NewProp_Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHoldOutTimerObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::ClassParams = {
		&USBZHoldOutTimerObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHoldOutTimerObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHoldOutTimerObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHoldOutTimerObjective, 111259521);
	template<> STARBREEZE_API UClass* StaticClass<USBZHoldOutTimerObjective>()
	{
		return USBZHoldOutTimerObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHoldOutTimerObjective(Z_Construct_UClass_USBZHoldOutTimerObjective, &USBZHoldOutTimerObjective::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHoldOutTimerObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHoldOutTimerObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
