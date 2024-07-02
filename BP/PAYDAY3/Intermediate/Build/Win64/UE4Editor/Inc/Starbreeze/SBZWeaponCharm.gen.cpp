// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponCharm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponCharm() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWeaponCharm_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWeaponCharm();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippableCharm();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZWeaponCharm::StaticRegisterNativesASBZWeaponCharm()
	{
	}
	UClass* Z_Construct_UClass_ASBZWeaponCharm_NoRegister()
	{
		return ASBZWeaponCharm::StaticClass();
	}
	struct Z_Construct_UClass_ASBZWeaponCharm_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZWeaponCharm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZEquippableCharm,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeaponCharm_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponCharm.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponCharm.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZWeaponCharm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZWeaponCharm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZWeaponCharm_Statics::ClassParams = {
		&ASBZWeaponCharm::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZWeaponCharm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeaponCharm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZWeaponCharm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZWeaponCharm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZWeaponCharm, 3397184962);
	template<> STARBREEZE_API UClass* StaticClass<ASBZWeaponCharm>()
	{
		return ASBZWeaponCharm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZWeaponCharm(Z_Construct_UClass_ASBZWeaponCharm, &ASBZWeaponCharm::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZWeaponCharm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZWeaponCharm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
