// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWheeledVehicleSkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWheeledVehicleSkeletalMeshComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWheeledVehicleSkeletalMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWheeledVehicleSkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZWheeledVehicleSkeletalMeshComponent::StaticRegisterNativesUSBZWheeledVehicleSkeletalMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZWheeledVehicleSkeletalMeshComponent_NoRegister()
	{
		return USBZWheeledVehicleSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZWheeledVehicleSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWheeledVehicleSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "SBZWheeledVehicleSkeletalMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleSkeletalMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWheeledVehicleSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWheeledVehicleSkeletalMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWheeledVehicleSkeletalMeshComponent_Statics::ClassParams = {
		&USBZWheeledVehicleSkeletalMeshComponent::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleSkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleSkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWheeledVehicleSkeletalMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWheeledVehicleSkeletalMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWheeledVehicleSkeletalMeshComponent, 3326850240);
	template<> STARBREEZE_API UClass* StaticClass<USBZWheeledVehicleSkeletalMeshComponent>()
	{
		return USBZWheeledVehicleSkeletalMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWheeledVehicleSkeletalMeshComponent(Z_Construct_UClass_USBZWheeledVehicleSkeletalMeshComponent, &USBZWheeledVehicleSkeletalMeshComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWheeledVehicleSkeletalMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWheeledVehicleSkeletalMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
