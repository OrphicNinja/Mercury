// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActorSpawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActorSpawnBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZActorSpawnBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZActorSpawnBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void ASBZActorSpawnBase::StaticRegisterNativesASBZActorSpawnBase()
	{
	}
	UClass* Z_Construct_UClass_ASBZActorSpawnBase_NoRegister()
	{
		return ASBZActorSpawnBase::StaticClass();
	}
	struct Z_Construct_UClass_ASBZActorSpawnBase_Statics
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransformArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransformArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnTransformArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextSpawnTransformIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextSpawnTransformIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZActorSpawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZActorSpawnBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZActorSpawnBase, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnBase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex_SetBit(void* Obj)
	{
		((ASBZActorSpawnBase*)Obj)->bRandomizeSpawnTransformStartingIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex = { "bRandomizeSpawnTransformStartingIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZActorSpawnBase), &Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_SpawnTransformArray_Inner = { "SpawnTransformArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_SpawnTransformArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_SpawnTransformArray = { "SpawnTransformArray", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZActorSpawnBase, SpawnTransformArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_SpawnTransformArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_SpawnTransformArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_NextSpawnTransformIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_NextSpawnTransformIndex = { "NextSpawnTransformIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZActorSpawnBase, NextSpawnTransformIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_NextSpawnTransformIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_NextSpawnTransformIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZActorSpawnBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_bRandomizeSpawnTransformStartingIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_SpawnTransformArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_SpawnTransformArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnBase_Statics::NewProp_NextSpawnTransformIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZActorSpawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZActorSpawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZActorSpawnBase_Statics::ClassParams = {
		&ASBZActorSpawnBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZActorSpawnBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnBase_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZActorSpawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZActorSpawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZActorSpawnBase, 1853302369);
	template<> STARBREEZE_API UClass* StaticClass<ASBZActorSpawnBase>()
	{
		return ASBZActorSpawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZActorSpawnBase(Z_Construct_UClass_ASBZActorSpawnBase, &ASBZActorSpawnBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZActorSpawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZActorSpawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
