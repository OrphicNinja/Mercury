// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIDroneMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIDroneMovementComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDroneMovementComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDroneMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USBZAIDroneMovementComponent::StaticRegisterNativesUSBZAIDroneMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZAIDroneMovementComponent_NoRegister()
	{
		return USBZAIDroneMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIDroneMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFlyDownSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFlyDownSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroneAvoidanceConsiderationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DroneAvoidanceConsiderationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroneAvoidanceCollisionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DroneAvoidanceCollisionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveUpVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveUpVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAIDroneMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDroneMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_MaxFlyDownSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAIDroneMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_MaxFlyDownSpeed = { "MaxFlyDownSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneMovementComponent, MaxFlyDownSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_MaxFlyDownSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_MaxFlyDownSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_DroneAvoidanceConsiderationRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAIDroneMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_DroneAvoidanceConsiderationRadius = { "DroneAvoidanceConsiderationRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneMovementComponent, DroneAvoidanceConsiderationRadius), METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_DroneAvoidanceConsiderationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_DroneAvoidanceConsiderationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_DroneAvoidanceCollisionRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAIDroneMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_DroneAvoidanceCollisionRadius = { "DroneAvoidanceCollisionRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneMovementComponent, DroneAvoidanceCollisionRadius), METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_DroneAvoidanceCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_DroneAvoidanceCollisionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_MoveUpVector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAIDroneMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_MoveUpVector = { "MoveUpVector", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneMovementComponent, MoveUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_MoveUpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_MoveUpVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_MaxFlyDownSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_DroneAvoidanceConsiderationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_DroneAvoidanceCollisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::NewProp_MoveUpVector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIDroneMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::ClassParams = {
		&USBZAIDroneMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIDroneMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIDroneMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIDroneMovementComponent, 2573524720);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIDroneMovementComponent>()
	{
		return USBZAIDroneMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIDroneMovementComponent(Z_Construct_UClass_USBZAIDroneMovementComponent, &USBZAIDroneMovementComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIDroneMovementComponent"), false, nullptr, nullptr, nullptr);

	void USBZAIDroneMovementComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MoveUpVector(TEXT("MoveUpVector"));

		const bool bIsValid = true
			&& Name_MoveUpVector == ClassReps[(int32)ENetFields_Private::MoveUpVector].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZAIDroneMovementComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIDroneMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
