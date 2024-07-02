// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippableCharmAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippableCharmAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableCharmAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableCharmAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEquippableCharmAnimation::StaticRegisterNativesUSBZEquippableCharmAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZEquippableCharmAnimation_NoRegister()
	{
		return USBZEquippableCharmAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZEquippableCharmAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEquippableCharmAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableCharmAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZEquippableCharmAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippableCharmAnimation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEquippableCharmAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEquippableCharmAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEquippableCharmAnimation_Statics::ClassParams = {
		&USBZEquippableCharmAnimation::StaticClass,
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
		0x008000A9u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEquippableCharmAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableCharmAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEquippableCharmAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEquippableCharmAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEquippableCharmAnimation, 3581363702);
	template<> STARBREEZE_API UClass* StaticClass<USBZEquippableCharmAnimation>()
	{
		return USBZEquippableCharmAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEquippableCharmAnimation(Z_Construct_UClass_USBZEquippableCharmAnimation, &USBZEquippableCharmAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEquippableCharmAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEquippableCharmAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
