// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSeasonalEventItemSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSeasonalEventItemSpawner() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSeasonalEventItemSpawner_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSeasonalEventItemSpawner();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZActorSpawnTransforms();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorSpawnRequestData_NoRegister();
// End Cross Module References
	void ASBZSeasonalEventItemSpawner::StaticRegisterNativesASBZSeasonalEventItemSpawner()
	{
	}
	UClass* Z_Construct_UClass_ASBZSeasonalEventItemSpawner_NoRegister()
	{
		return ASBZSeasonalEventItemSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRequestData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnRequestData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZActorSpawnTransforms,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSeasonalEventItemSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemSpawner.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::NewProp_SpawnRequestData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemSpawner" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::NewProp_SpawnRequestData = { "SpawnRequestData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemSpawner, SpawnRequestData), Z_Construct_UClass_USBZActorSpawnRequestData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::NewProp_SpawnRequestData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::NewProp_SpawnRequestData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::NewProp_NumberToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemSpawner" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::NewProp_NumberToSpawn = { "NumberToSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemSpawner, NumberToSpawn), METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::NewProp_NumberToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::NewProp_NumberToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::NewProp_SpawnRequestData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::NewProp_NumberToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSeasonalEventItemSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::ClassParams = {
		&ASBZSeasonalEventItemSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSeasonalEventItemSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSeasonalEventItemSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSeasonalEventItemSpawner, 3339577316);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSeasonalEventItemSpawner>()
	{
		return ASBZSeasonalEventItemSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSeasonalEventItemSpawner(Z_Construct_UClass_ASBZSeasonalEventItemSpawner, &ASBZSeasonalEventItemSpawner::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSeasonalEventItemSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSeasonalEventItemSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
