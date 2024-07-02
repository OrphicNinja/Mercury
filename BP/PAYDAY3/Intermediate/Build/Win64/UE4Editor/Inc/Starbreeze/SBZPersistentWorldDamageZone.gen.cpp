// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPersistentWorldDamageZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPersistentWorldDamageZone() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPersistentWorldDamageZone_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPersistentWorldDamageZone();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_NoRegister();
// End Cross Module References
	void ASBZPersistentWorldDamageZone::StaticRegisterNativesASBZPersistentWorldDamageZone()
	{
	}
	UClass* Z_Construct_UClass_ASBZPersistentWorldDamageZone_NoRegister()
	{
		return ASBZPersistentWorldDamageZone::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Zone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPersistentWorldDamageZone.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageZone.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::NewProp_Zone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPersistentWorldDamageZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPersistentWorldDamageZone, Zone), Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::NewProp_Zone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::NewProp_Zone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::NewProp_Zone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPersistentWorldDamageZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::ClassParams = {
		&ASBZPersistentWorldDamageZone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPersistentWorldDamageZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPersistentWorldDamageZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPersistentWorldDamageZone, 2287118501);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPersistentWorldDamageZone>()
	{
		return ASBZPersistentWorldDamageZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPersistentWorldDamageZone(Z_Construct_UClass_ASBZPersistentWorldDamageZone, &ASBZPersistentWorldDamageZone::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPersistentWorldDamageZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPersistentWorldDamageZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
