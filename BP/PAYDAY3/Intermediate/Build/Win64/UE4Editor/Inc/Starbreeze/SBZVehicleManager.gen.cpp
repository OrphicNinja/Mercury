// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleInfo();
// End Cross Module References
	DEFINE_FUNCTION(USBZVehicleManager::execOnEnteredActionPhase)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnteredActionPhase(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleManager::execOnExitedActionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitedActionPhase();
		P_NATIVE_END;
	}
	void USBZVehicleManager::StaticRegisterNativesUSBZVehicleManager()
	{
		UClass* Class = USBZVehicleManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnteredActionPhase", &USBZVehicleManager::execOnEnteredActionPhase },
			{ "OnExitedActionPhase", &USBZVehicleManager::execOnExitedActionPhase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZVehicleManager_OnEnteredActionPhase_Statics
	{
		struct SBZVehicleManager_eventOnEnteredActionPhase_Parms
		{
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleManager_OnEnteredActionPhase_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleManager_eventOnEnteredActionPhase_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleManager_OnEnteredActionPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleManager_OnEnteredActionPhase_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleManager_OnEnteredActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleManager_OnEnteredActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleManager, nullptr, "OnEnteredActionPhase", nullptr, nullptr, sizeof(SBZVehicleManager_eventOnEnteredActionPhase_Parms), Z_Construct_UFunction_USBZVehicleManager_OnEnteredActionPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleManager_OnEnteredActionPhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleManager_OnEnteredActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleManager_OnEnteredActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleManager_OnEnteredActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleManager_OnEnteredActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleManager_OnExitedActionPhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleManager_OnExitedActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleManager_OnExitedActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleManager, nullptr, "OnExitedActionPhase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleManager_OnExitedActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleManager_OnExitedActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleManager_OnExitedActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleManager_OnExitedActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZVehicleManager_NoRegister()
	{
		return USBZVehicleManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZVehicleManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vehicles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vehicles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VehicleInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVehicleManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZVehicleManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZVehicleManager_OnEnteredActionPhase, "OnEnteredActionPhase" }, // 3779271121
		{ &Z_Construct_UFunction_USBZVehicleManager_OnExitedActionPhase, "OnExitedActionPhase" }, // 2509603603
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZVehicleManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_Vehicles_Inner = { "Vehicles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_Vehicles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleManager" },
		{ "ModuleRelativePath", "Public/SBZVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_Vehicles = { "Vehicles", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleManager, Vehicles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_Vehicles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_Vehicles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_VehicleInfos_Inner = { "VehicleInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZVehicleInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_VehicleInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleManager" },
		{ "ModuleRelativePath", "Public/SBZVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_VehicleInfos = { "VehicleInfos", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleManager, VehicleInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_VehicleInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_VehicleInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVehicleManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_Vehicles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_Vehicles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_VehicleInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleManager_Statics::NewProp_VehicleInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVehicleManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVehicleManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVehicleManager_Statics::ClassParams = {
		&USBZVehicleManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZVehicleManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleManager_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVehicleManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVehicleManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVehicleManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVehicleManager, 3992422646);
	template<> STARBREEZE_API UClass* StaticClass<USBZVehicleManager>()
	{
		return USBZVehicleManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVehicleManager(Z_Construct_UClass_USBZVehicleManager, &USBZVehicleManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVehicleManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVehicleManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
