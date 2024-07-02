// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnSpawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnSpawnBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ASBZPawnSpawnBase::StaticRegisterNativesASBZPawnSpawnBase()
	{
	}
	UClass* Z_Construct_UClass_ASBZPawnSpawnBase_NoRegister()
	{
		return ASBZPawnSpawnBase::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPawnSpawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeSpawnTransformStartingIndex_MetaData[];
#endif
		static void NewProp_bRandomizeSpawnTransformStartingIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeSpawnTransformStartingIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationHandling_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationHandling;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnDefinitionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnDefinitionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnDefinitionArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextSpawnDefinitionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextSpawnDefinitionIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightedLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightedLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPawnSpawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPawnSpawnBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnBase" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPawnSpawnBase, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnBase" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnBase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex_SetBit(void* Obj)
	{
		((ASBZPawnSpawnBase*)Obj)->bRandomizeSpawnTransformStartingIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex = { "bRandomizeSpawnTransformStartingIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPawnSpawnBase), &Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_RotationHandling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnBase" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_RotationHandling = { "RotationHandling", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPawnSpawnBase, RotationHandling), Z_Construct_UScriptStruct_FSBZSpawnRotationHandlingMethod, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_RotationHandling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_RotationHandling_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_SpawnDefinitionArray_Inner = { "SpawnDefinitionArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_SpawnDefinitionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnBase" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_SpawnDefinitionArray = { "SpawnDefinitionArray", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPawnSpawnBase, SpawnDefinitionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_SpawnDefinitionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_SpawnDefinitionArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_NextSpawnDefinitionIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnBase" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_NextSpawnDefinitionIndex = { "NextSpawnDefinitionIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPawnSpawnBase, NextSpawnDefinitionIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_NextSpawnDefinitionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_NextSpawnDefinitionIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_WeightedLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnBase" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_WeightedLocation = { "WeightedLocation", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPawnSpawnBase, WeightedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_WeightedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_WeightedLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPawnSpawnBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_RotationHandling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_SpawnDefinitionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_SpawnDefinitionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_NextSpawnDefinitionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnBase_Statics::NewProp_WeightedLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPawnSpawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPawnSpawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPawnSpawnBase_Statics::ClassParams = {
		&ASBZPawnSpawnBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZPawnSpawnBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPawnSpawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPawnSpawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPawnSpawnBase, 3204316542);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPawnSpawnBase>()
	{
		return ASBZPawnSpawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPawnSpawnBase(Z_Construct_UClass_ASBZPawnSpawnBase, &ASBZPawnSpawnBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPawnSpawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPawnSpawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
