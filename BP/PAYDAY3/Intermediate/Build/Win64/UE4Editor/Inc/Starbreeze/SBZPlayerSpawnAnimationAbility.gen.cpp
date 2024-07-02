// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerSpawnAnimationAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerSpawnAnimationAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerSpawnAnimationAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void USBZPlayerSpawnAnimationAbility::StaticRegisterNativesUSBZPlayerSpawnAnimationAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_NoRegister()
	{
		return USBZPlayerSpawnAnimationAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayedMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayedMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerSpawnAnimationAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerSpawnAnimationAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::NewProp_PlayedMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerSpawnAnimationAbility" },
		{ "ModuleRelativePath", "Public/SBZPlayerSpawnAnimationAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::NewProp_PlayedMontage = { "PlayedMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerSpawnAnimationAbility, PlayedMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::NewProp_PlayedMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::NewProp_PlayedMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::NewProp_PlayedMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerSpawnAnimationAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::ClassParams = {
		&USBZPlayerSpawnAnimationAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerSpawnAnimationAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerSpawnAnimationAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerSpawnAnimationAbility, 2520612567);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerSpawnAnimationAbility>()
	{
		return USBZPlayerSpawnAnimationAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerSpawnAnimationAbility(Z_Construct_UClass_USBZPlayerSpawnAnimationAbility, &USBZPlayerSpawnAnimationAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerSpawnAnimationAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerSpawnAnimationAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
