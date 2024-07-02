// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWheeledVehicleAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWheeledVehicleAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWheeledVehicleAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWheeledVehicleAnimation();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleAnimation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZWheeledVehicleAnimation::StaticRegisterNativesUSBZWheeledVehicleAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZWheeledVehicleAnimation_NoRegister()
	{
		return USBZWheeledVehicleAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZWheeledVehicleAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWheeledVehicleAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZVehicleAnimation,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZWheeledVehicleAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAnimation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWheeledVehicleAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWheeledVehicleAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWheeledVehicleAnimation_Statics::ClassParams = {
		&USBZWheeledVehicleAnimation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWheeledVehicleAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWheeledVehicleAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWheeledVehicleAnimation, 498195170);
	template<> STARBREEZE_API UClass* StaticClass<USBZWheeledVehicleAnimation>()
	{
		return USBZWheeledVehicleAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWheeledVehicleAnimation(Z_Construct_UClass_USBZWheeledVehicleAnimation, &USBZWheeledVehicleAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWheeledVehicleAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWheeledVehicleAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
