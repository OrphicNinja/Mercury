// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnNotifyOnce.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnNotifyOnce() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpawnNotifyOnce_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpawnNotifyOnce();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnPredefined_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSpawnNotifyOnce::execOnSpawnComplete)
	{
		P_GET_OBJECT(APawn,Z_Param_SpawnedPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpawnComplete(Z_Param_SpawnedPawn);
		P_NATIVE_END;
	}
	void ASBZSpawnNotifyOnce::StaticRegisterNativesASBZSpawnNotifyOnce()
	{
		UClass* Class = ASBZSpawnNotifyOnce::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSpawnComplete", &ASBZSpawnNotifyOnce::execOnSpawnComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSpawnNotifyOnce_OnSpawnComplete_Statics
	{
		struct SBZSpawnNotifyOnce_eventOnSpawnComplete_Parms
		{
			APawn* SpawnedPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSpawnNotifyOnce_OnSpawnComplete_Statics::NewProp_SpawnedPawn = { "SpawnedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnNotifyOnce_eventOnSpawnComplete_Parms, SpawnedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSpawnNotifyOnce_OnSpawnComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSpawnNotifyOnce_OnSpawnComplete_Statics::NewProp_SpawnedPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSpawnNotifyOnce_OnSpawnComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnNotifyOnce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSpawnNotifyOnce_OnSpawnComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSpawnNotifyOnce, nullptr, "OnSpawnComplete", nullptr, nullptr, sizeof(SBZSpawnNotifyOnce_eventOnSpawnComplete_Parms), Z_Construct_UFunction_ASBZSpawnNotifyOnce_OnSpawnComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpawnNotifyOnce_OnSpawnComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSpawnNotifyOnce_OnSpawnComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpawnNotifyOnce_OnSpawnComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSpawnNotifyOnce_OnSpawnComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSpawnNotifyOnce_OnSpawnComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSpawnNotifyOnce_NoRegister()
	{
		return ASBZSpawnNotifyOnce::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spawner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnerArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnNotifyReactors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnNotifyReactors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnNotifyReactors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSpawnNotifyOnce_OnSpawnComplete, "OnSpawnComplete" }, // 980288321
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZSpawnNotifyOnce.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnNotifyOnce.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_Spawner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnNotifyOnce" },
		{ "ModuleRelativePath", "Public/SBZSpawnNotifyOnce.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnNotifyOnce, Spawner), Z_Construct_UClass_ASBZPawnSpawnPredefined_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_Spawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_Spawner_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnerArray_Inner = { "SpawnerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPawnSpawnPredefined_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnerArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnNotifyOnce" },
		{ "ModuleRelativePath", "Public/SBZSpawnNotifyOnce.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnerArray = { "SpawnerArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnNotifyOnce, SpawnerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnerArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnNotifyReactors_Inner = { "SpawnNotifyReactors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnNotifyReactors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnNotifyOnce" },
		{ "ModuleRelativePath", "Public/SBZSpawnNotifyOnce.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnNotifyReactors = { "SpawnNotifyReactors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnNotifyOnce, SpawnNotifyReactors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnNotifyReactors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnNotifyReactors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_Spawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnerArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnNotifyReactors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::NewProp_SpawnNotifyReactors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSpawnNotifyOnce>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::ClassParams = {
		&ASBZSpawnNotifyOnce::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSpawnNotifyOnce()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSpawnNotifyOnce, 4005753742);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSpawnNotifyOnce>()
	{
		return ASBZSpawnNotifyOnce::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSpawnNotifyOnce(Z_Construct_UClass_ASBZSpawnNotifyOnce, &ASBZSpawnNotifyOnce::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSpawnNotifyOnce"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSpawnNotifyOnce);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
