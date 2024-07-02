// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutKillEnemiesObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutKillEnemiesObjective() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutKillEnemiesObjective();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutObjectiveBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnManager_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(USBZHoldOutKillEnemiesObjective::execOnEnemyKilled)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnemyKilled(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHoldOutKillEnemiesObjective::execOnEnemySpawned)
	{
		P_GET_OBJECT(USBZSpawnManager,Z_Param_SpawnManager);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnemySpawned(Z_Param_SpawnManager,Z_Param_Pawn);
		P_NATIVE_END;
	}
	void USBZHoldOutKillEnemiesObjective::StaticRegisterNativesUSBZHoldOutKillEnemiesObjective()
	{
		UClass* Class = USBZHoldOutKillEnemiesObjective::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnemyKilled", &USBZHoldOutKillEnemiesObjective::execOnEnemyKilled },
			{ "OnEnemySpawned", &USBZHoldOutKillEnemiesObjective::execOnEnemySpawned },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemyKilled_Statics
	{
		struct SBZHoldOutKillEnemiesObjective_eventOnEnemyKilled_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemyKilled_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutKillEnemiesObjective_eventOnEnemyKilled_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemyKilled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemyKilled_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemyKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutKillEnemiesObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemyKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutKillEnemiesObjective, nullptr, "OnEnemyKilled", nullptr, nullptr, sizeof(SBZHoldOutKillEnemiesObjective_eventOnEnemyKilled_Parms), Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemyKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemyKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemyKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemyKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemyKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemyKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics
	{
		struct SBZHoldOutKillEnemiesObjective_eventOnEnemySpawned_Parms
		{
			USBZSpawnManager* SpawnManager;
			APawn* Pawn;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::NewProp_SpawnManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::NewProp_SpawnManager = { "SpawnManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutKillEnemiesObjective_eventOnEnemySpawned_Parms, SpawnManager), Z_Construct_UClass_USBZSpawnManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::NewProp_SpawnManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::NewProp_SpawnManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutKillEnemiesObjective_eventOnEnemySpawned_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::NewProp_SpawnManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutKillEnemiesObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutKillEnemiesObjective, nullptr, "OnEnemySpawned", nullptr, nullptr, sizeof(SBZHoldOutKillEnemiesObjective_eventOnEnemySpawned_Parms), Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_NoRegister()
	{
		return USBZHoldOutKillEnemiesObjective::StaticClass();
	}
	struct Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumEnemiesToKill_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumEnemiesToKill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PawnTypes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedEnemies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedEnemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedEnemies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZHoldOutObjectiveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemyKilled, "OnEnemyKilled" }, // 4215826588
		{ &Z_Construct_UFunction_USBZHoldOutKillEnemiesObjective_OnEnemySpawned, "OnEnemySpawned" }, // 2614905740
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHoldOutKillEnemiesObjective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutKillEnemiesObjective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_NumEnemiesToKill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutKillEnemiesObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutKillEnemiesObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_NumEnemiesToKill = { "NumEnemiesToKill", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutKillEnemiesObjective, NumEnemiesToKill), METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_NumEnemiesToKill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_NumEnemiesToKill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_PawnTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutKillEnemiesObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutKillEnemiesObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_PawnTypes = { "PawnTypes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutKillEnemiesObjective, PawnTypes), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_PawnTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_PawnTypes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_SpawnedEnemies_Inner = { "SpawnedEnemies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_SpawnedEnemies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutKillEnemiesObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutKillEnemiesObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_SpawnedEnemies = { "SpawnedEnemies", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutKillEnemiesObjective, SpawnedEnemies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_SpawnedEnemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_SpawnedEnemies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_NumEnemiesToKill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_PawnTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_SpawnedEnemies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::NewProp_SpawnedEnemies,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHoldOutKillEnemiesObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::ClassParams = {
		&USBZHoldOutKillEnemiesObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHoldOutKillEnemiesObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHoldOutKillEnemiesObjective, 1005538020);
	template<> STARBREEZE_API UClass* StaticClass<USBZHoldOutKillEnemiesObjective>()
	{
		return USBZHoldOutKillEnemiesObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHoldOutKillEnemiesObjective(Z_Construct_UClass_USBZHoldOutKillEnemiesObjective, &USBZHoldOutKillEnemiesObjective::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHoldOutKillEnemiesObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHoldOutKillEnemiesObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
