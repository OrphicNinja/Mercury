// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateDsLoading.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateDsLoading() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateDsLoading_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateDsLoading();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDsStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDSChallengeManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMetaDataLoader_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateDsLoading::execDestinationMapLoaded)
	{
		P_GET_OBJECT(UWorld,Z_Param_NewWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestinationMapLoaded(Z_Param_NewWorld);
		P_NATIVE_END;
	}
	void USBZStateMachineStateDsLoading::StaticRegisterNativesUSBZStateMachineStateDsLoading()
	{
		UClass* Class = USBZStateMachineStateDsLoading::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestinationMapLoaded", &USBZStateMachineStateDsLoading::execDestinationMapLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsLoading_DestinationMapLoaded_Statics
	{
		struct SBZStateMachineStateDsLoading_eventDestinationMapLoaded_Parms
		{
			UWorld* NewWorld;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsLoading_DestinationMapLoaded_Statics::NewProp_NewWorld = { "NewWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsLoading_eventDestinationMapLoaded_Parms, NewWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsLoading_DestinationMapLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsLoading_DestinationMapLoaded_Statics::NewProp_NewWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsLoading_DestinationMapLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsLoading.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsLoading_DestinationMapLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsLoading, nullptr, "DestinationMapLoaded", nullptr, nullptr, sizeof(SBZStateMachineStateDsLoading_eventDestinationMapLoaded_Parms), Z_Construct_UFunction_USBZStateMachineStateDsLoading_DestinationMapLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsLoading_DestinationMapLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsLoading_DestinationMapLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsLoading_DestinationMapLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsLoading_DestinationMapLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsLoading_DestinationMapLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateDsLoading_NoRegister()
	{
		return USBZStateMachineStateDsLoading::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeOutAck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeOutAck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DSChallengeManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DSChallengeManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataLoader_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaDataLoader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDsStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateDsLoading_DestinationMapLoaded, "DestinationMapLoaded" }, // 29287532
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateDsLoading.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsLoading.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_TimeOutAck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsLoading" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsLoading.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_TimeOutAck = { "TimeOutAck", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsLoading, TimeOutAck), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_TimeOutAck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_TimeOutAck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_DSChallengeManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsLoading" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsLoading.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_DSChallengeManager = { "DSChallengeManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsLoading, DSChallengeManager), Z_Construct_UClass_USBZDSChallengeManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_DSChallengeManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_DSChallengeManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_MetaDataLoader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsLoading" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsLoading.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_MetaDataLoader = { "MetaDataLoader", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsLoading, MetaDataLoader), Z_Construct_UClass_USBZMetaDataLoader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_MetaDataLoader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_MetaDataLoader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_TimeOutAck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_DSChallengeManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::NewProp_MetaDataLoader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateDsLoading>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::ClassParams = {
		&USBZStateMachineStateDsLoading::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateDsLoading()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateDsLoading_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateDsLoading, 663966993);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateDsLoading>()
	{
		return USBZStateMachineStateDsLoading::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateDsLoading(Z_Construct_UClass_USBZStateMachineStateDsLoading, &USBZStateMachineStateDsLoading::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateDsLoading"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateDsLoading);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
