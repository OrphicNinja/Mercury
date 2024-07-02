// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWheeledVehicleMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWheeledVehicleMovementComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWheeledVehicleMovementComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWheeledVehicleMovementComponent();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_USimpleWheeledVehicleMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZWheeledVehicleMovementComponent::StaticRegisterNativesUSBZWheeledVehicleMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZWheeledVehicleMovementComponent_NoRegister()
	{
		return USBZWheeledVehicleMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDriveTorque_MetaData[];
#endif
		static void NewProp_bOverrideDriveTorque_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDriveTorque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverriddenDriveTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverriddenDriveTorque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleWheeledVehicleMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "PlanarMovement Components|Movement|Planar Activation Components|Activation PlanarMovement Components|Movement|Planar Activation Components|Activation" },
		{ "IncludePath", "SBZWheeledVehicleMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::NewProp_bOverrideDriveTorque_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::NewProp_bOverrideDriveTorque_SetBit(void* Obj)
	{
		((USBZWheeledVehicleMovementComponent*)Obj)->bOverrideDriveTorque = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::NewProp_bOverrideDriveTorque = { "bOverrideDriveTorque", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWheeledVehicleMovementComponent), &Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::NewProp_bOverrideDriveTorque_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::NewProp_bOverrideDriveTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::NewProp_bOverrideDriveTorque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::NewProp_OverriddenDriveTorque_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::NewProp_OverriddenDriveTorque = { "OverriddenDriveTorque", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleMovementComponent, OverriddenDriveTorque), METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::NewProp_OverriddenDriveTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::NewProp_OverriddenDriveTorque_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::NewProp_bOverrideDriveTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::NewProp_OverriddenDriveTorque,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWheeledVehicleMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::ClassParams = {
		&USBZWheeledVehicleMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWheeledVehicleMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWheeledVehicleMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWheeledVehicleMovementComponent, 353729605);
	template<> STARBREEZE_API UClass* StaticClass<USBZWheeledVehicleMovementComponent>()
	{
		return USBZWheeledVehicleMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWheeledVehicleMovementComponent(Z_Construct_UClass_USBZWheeledVehicleMovementComponent, &USBZWheeledVehicleMovementComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWheeledVehicleMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWheeledVehicleMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
