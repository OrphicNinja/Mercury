// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPersistentWorldDamageZoneManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPersistentWorldDamageZoneManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMeshZones();
// End Cross Module References
	void ASBZPersistentWorldDamageZoneManager::StaticRegisterNativesASBZPersistentWorldDamageZoneManager()
	{
	}
	UClass* Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_NoRegister()
	{
		return ASBZPersistentWorldDamageZoneManager::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshZonesMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshZonesMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshZonesMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPersistentWorldDamageZoneManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageZoneManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::NewProp_MeshZonesMap_Inner = { "MeshZonesMap", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMeshZones, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::NewProp_MeshZonesMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPersistentWorldDamageZoneManager" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageZoneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::NewProp_MeshZonesMap = { "MeshZonesMap", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPersistentWorldDamageZoneManager, MeshZonesMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::NewProp_MeshZonesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::NewProp_MeshZonesMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::NewProp_MeshZonesMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::NewProp_MeshZonesMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPersistentWorldDamageZoneManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::ClassParams = {
		&ASBZPersistentWorldDamageZoneManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPersistentWorldDamageZoneManager, 806113385);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPersistentWorldDamageZoneManager>()
	{
		return ASBZPersistentWorldDamageZoneManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPersistentWorldDamageZoneManager(Z_Construct_UClass_ASBZPersistentWorldDamageZoneManager, &ASBZPersistentWorldDamageZoneManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPersistentWorldDamageZoneManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPersistentWorldDamageZoneManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
