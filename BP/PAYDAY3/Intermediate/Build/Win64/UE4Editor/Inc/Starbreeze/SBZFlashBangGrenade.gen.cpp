// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFlashBangGrenade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFlashBangGrenade() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZFlashBangGrenade_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZFlashBangGrenade();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGrenade();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void ASBZFlashBangGrenade::StaticRegisterNativesASBZFlashBangGrenade()
	{
	}
	UClass* Z_Construct_UClass_ASBZFlashBangGrenade_NoRegister()
	{
		return ASBZFlashBangGrenade::StaticClass();
	}
	struct Z_Construct_UClass_ASBZFlashBangGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZFlashBangGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZGrenade,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFlashBangGrenade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFlashBangGrenade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFlashBangGrenade.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFlashBangGrenade_Statics::NewProp_CapsuleCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlashBangGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZFlashBangGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZFlashBangGrenade_Statics::NewProp_CapsuleCollision = { "CapsuleCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFlashBangGrenade, CapsuleCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZFlashBangGrenade_Statics::NewProp_CapsuleCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFlashBangGrenade_Statics::NewProp_CapsuleCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZFlashBangGrenade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFlashBangGrenade_Statics::NewProp_CapsuleCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZFlashBangGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZFlashBangGrenade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZFlashBangGrenade_Statics::ClassParams = {
		&ASBZFlashBangGrenade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZFlashBangGrenade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFlashBangGrenade_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZFlashBangGrenade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFlashBangGrenade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZFlashBangGrenade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZFlashBangGrenade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZFlashBangGrenade, 2703213771);
	template<> STARBREEZE_API UClass* StaticClass<ASBZFlashBangGrenade>()
	{
		return ASBZFlashBangGrenade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZFlashBangGrenade(Z_Construct_UClass_ASBZFlashBangGrenade, &ASBZFlashBangGrenade::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZFlashBangGrenade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZFlashBangGrenade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
