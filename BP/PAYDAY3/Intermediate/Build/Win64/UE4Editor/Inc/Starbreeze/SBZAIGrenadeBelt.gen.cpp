// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIGrenadeBelt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIGrenadeBelt() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIGrenadeBelt_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIGrenadeBelt();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIExplosiveWeakPoint();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void USBZAIGrenadeBelt::StaticRegisterNativesUSBZAIGrenadeBelt()
	{
	}
	UClass* Z_Construct_UClass_USBZAIGrenadeBelt_NoRegister()
	{
		return USBZAIGrenadeBelt::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIGrenadeBelt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerGameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerGameplayEffectClass;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIExplosionDamage_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AIExplosionDamage_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AIExplosionDamage_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIExplosionDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AIExplosionDamage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerExplosionDamage_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerExplosionDamage_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerExplosionDamage_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerExplosionDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlayerExplosionDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageModifierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageModifierCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStaggerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerStaggerDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIGrenadeBelt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIExplosiveWeakPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIGrenadeBelt_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "SBZAIGrenadeBelt.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIGrenadeBelt.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerGameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIGrenadeBelt" },
		{ "ModuleRelativePath", "Public/SBZAIGrenadeBelt.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerGameplayEffectClass = { "PlayerGameplayEffectClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIGrenadeBelt, PlayerGameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerGameplayEffectClass_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_AIExplosionDamage_ValueProp = { "AIExplosionDamage", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_AIExplosionDamage_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_AIExplosionDamage_Key_KeyProp = { "AIExplosionDamage_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_AIExplosionDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIGrenadeBelt" },
		{ "ModuleRelativePath", "Public/SBZAIGrenadeBelt.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_AIExplosionDamage = { "AIExplosionDamage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIGrenadeBelt, AIExplosionDamage), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_AIExplosionDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_AIExplosionDamage_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerExplosionDamage_ValueProp = { "PlayerExplosionDamage", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerExplosionDamage_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerExplosionDamage_Key_KeyProp = { "PlayerExplosionDamage_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerExplosionDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIGrenadeBelt" },
		{ "ModuleRelativePath", "Public/SBZAIGrenadeBelt.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerExplosionDamage = { "PlayerExplosionDamage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIGrenadeBelt, PlayerExplosionDamage), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerExplosionDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerExplosionDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_DamageModifierCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIGrenadeBelt" },
		{ "ModuleRelativePath", "Public/SBZAIGrenadeBelt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_DamageModifierCurve = { "DamageModifierCurve", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIGrenadeBelt, DamageModifierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_DamageModifierCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_DamageModifierCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerStaggerDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIGrenadeBelt" },
		{ "ModuleRelativePath", "Public/SBZAIGrenadeBelt.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerStaggerDuration = { "PlayerStaggerDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(PlayerStaggerDuration, USBZAIGrenadeBelt), STRUCT_OFFSET(USBZAIGrenadeBelt, PlayerStaggerDuration), METADATA_PARAMS(Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerStaggerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerStaggerDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIGrenadeBelt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerGameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_AIExplosionDamage_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_AIExplosionDamage_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_AIExplosionDamage_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_AIExplosionDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerExplosionDamage_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerExplosionDamage_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerExplosionDamage_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerExplosionDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_DamageModifierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIGrenadeBelt_Statics::NewProp_PlayerStaggerDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIGrenadeBelt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIGrenadeBelt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIGrenadeBelt_Statics::ClassParams = {
		&USBZAIGrenadeBelt::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIGrenadeBelt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIGrenadeBelt_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIGrenadeBelt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIGrenadeBelt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIGrenadeBelt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIGrenadeBelt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIGrenadeBelt, 1769372498);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIGrenadeBelt>()
	{
		return USBZAIGrenadeBelt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIGrenadeBelt(Z_Construct_UClass_USBZAIGrenadeBelt, &USBZAIGrenadeBelt::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIGrenadeBelt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIGrenadeBelt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
