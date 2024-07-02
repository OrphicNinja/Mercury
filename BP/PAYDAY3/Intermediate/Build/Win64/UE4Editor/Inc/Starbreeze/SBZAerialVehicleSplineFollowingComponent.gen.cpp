// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAerialVehicleSplineFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAerialVehicleSplineFollowingComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleSplineFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAerialVehicleSplineFollowingComponent::StaticRegisterNativesUSBZAerialVehicleSplineFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent_NoRegister()
	{
		return USBZAerialVehicleSplineFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAerialVehicleSplineFollowingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleSplineFollowingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAerialVehicleSplineFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent_Statics::ClassParams = {
		&USBZAerialVehicleSplineFollowingComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAerialVehicleSplineFollowingComponent, 866332687);
	template<> STARBREEZE_API UClass* StaticClass<USBZAerialVehicleSplineFollowingComponent>()
	{
		return USBZAerialVehicleSplineFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAerialVehicleSplineFollowingComponent(Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent, &USBZAerialVehicleSplineFollowingComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAerialVehicleSplineFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAerialVehicleSplineFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
