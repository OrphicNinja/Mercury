// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAerialVehicleAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAerialVehicleAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAerialVehicleAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAerialVehicleAnimation();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleAnimation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAerialVehicleAnimation::StaticRegisterNativesUSBZAerialVehicleAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZAerialVehicleAnimation_NoRegister()
	{
		return USBZAerialVehicleAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZAerialVehicleAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAerialVehicleAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZVehicleAnimation,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZAerialVehicleAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAnimation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAerialVehicleAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAerialVehicleAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAerialVehicleAnimation_Statics::ClassParams = {
		&USBZAerialVehicleAnimation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAerialVehicleAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAerialVehicleAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAerialVehicleAnimation, 1446143991);
	template<> STARBREEZE_API UClass* StaticClass<USBZAerialVehicleAnimation>()
	{
		return USBZAerialVehicleAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAerialVehicleAnimation(Z_Construct_UClass_USBZAerialVehicleAnimation, &USBZAerialVehicleAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAerialVehicleAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAerialVehicleAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
