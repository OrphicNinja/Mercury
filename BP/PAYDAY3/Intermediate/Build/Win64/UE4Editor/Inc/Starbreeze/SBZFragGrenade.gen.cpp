// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFragGrenade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFragGrenade() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZFragGrenade_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZFragGrenade();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGrenade();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData();
// End Cross Module References
	void ASBZFragGrenade::StaticRegisterNativesASBZFragGrenade()
	{
	}
	UClass* Z_Construct_UClass_ASBZFragGrenade_NoRegister()
	{
		return ASBZFragGrenade::StaticClass();
	}
	struct Z_Construct_UClass_ASBZFragGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostDamagePhysicsEffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostDamagePhysicsEffectData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZFragGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZGrenade,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFragGrenade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFragGrenade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFragGrenade.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFragGrenade_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFragGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZFragGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZFragGrenade_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFragGrenade, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZFragGrenade_Statics::NewProp_SphereCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFragGrenade_Statics::NewProp_SphereCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFragGrenade_Statics::NewProp_PostDamagePhysicsEffectData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFragGrenade" },
		{ "ModuleRelativePath", "Public/SBZFragGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZFragGrenade_Statics::NewProp_PostDamagePhysicsEffectData = { "PostDamagePhysicsEffectData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFragGrenade, PostDamagePhysicsEffectData), Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData, METADATA_PARAMS(Z_Construct_UClass_ASBZFragGrenade_Statics::NewProp_PostDamagePhysicsEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFragGrenade_Statics::NewProp_PostDamagePhysicsEffectData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZFragGrenade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFragGrenade_Statics::NewProp_SphereCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFragGrenade_Statics::NewProp_PostDamagePhysicsEffectData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZFragGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZFragGrenade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZFragGrenade_Statics::ClassParams = {
		&ASBZFragGrenade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZFragGrenade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFragGrenade_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZFragGrenade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFragGrenade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZFragGrenade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZFragGrenade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZFragGrenade, 3038482419);
	template<> STARBREEZE_API UClass* StaticClass<ASBZFragGrenade>()
	{
		return ASBZFragGrenade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZFragGrenade(Z_Construct_UClass_ASBZFragGrenade, &ASBZFragGrenade::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZFragGrenade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZFragGrenade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
