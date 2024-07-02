// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActorSpawnVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActorSpawnVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZActorSpawnVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZActorSpawnVolume();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZActorSpawnRegionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZActorSpawnVolume::StaticRegisterNativesASBZActorSpawnVolume()
	{
	}
	UClass* Z_Construct_UClass_ASBZActorSpawnVolume_NoRegister()
	{
		return ASBZActorSpawnVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZActorSpawnVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZActorSpawnVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZActorSpawnRegionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZActorSpawnVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZActorSpawnVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZActorSpawnVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZActorSpawnVolume_Statics::ClassParams = {
		&ASBZActorSpawnVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZActorSpawnVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZActorSpawnVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZActorSpawnVolume, 2482774225);
	template<> STARBREEZE_API UClass* StaticClass<ASBZActorSpawnVolume>()
	{
		return ASBZActorSpawnVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZActorSpawnVolume(Z_Construct_UClass_ASBZActorSpawnVolume, &ASBZActorSpawnVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZActorSpawnVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZActorSpawnVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
