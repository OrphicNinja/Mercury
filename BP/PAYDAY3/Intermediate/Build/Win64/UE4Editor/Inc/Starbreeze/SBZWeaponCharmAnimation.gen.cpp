// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponCharmAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponCharmAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponCharmAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponCharmAnimation();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableCharmAnimation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZWeaponCharmAnimation::StaticRegisterNativesUSBZWeaponCharmAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponCharmAnimation_NoRegister()
	{
		return USBZWeaponCharmAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponCharmAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponCharmAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippableCharmAnimation,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCharmAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZWeaponCharmAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponCharmAnimation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponCharmAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponCharmAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponCharmAnimation_Statics::ClassParams = {
		&USBZWeaponCharmAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCharmAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCharmAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponCharmAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponCharmAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponCharmAnimation, 3044179817);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponCharmAnimation>()
	{
		return USBZWeaponCharmAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponCharmAnimation(Z_Construct_UClass_USBZWeaponCharmAnimation, &USBZWeaponCharmAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponCharmAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponCharmAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
