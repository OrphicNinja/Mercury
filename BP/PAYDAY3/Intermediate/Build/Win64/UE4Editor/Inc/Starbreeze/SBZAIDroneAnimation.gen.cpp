// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIDroneAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIDroneAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDroneAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDroneAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIDrone_NoRegister();
// End Cross Module References
	void USBZAIDroneAnimation::StaticRegisterNativesUSBZAIDroneAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZAIDroneAnimation_NoRegister()
	{
		return USBZAIDroneAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIDroneAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLeanAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLeanAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotorMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotorMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotorAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotorAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotorDeceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotorDeceleration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HurtReactions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HurtReactions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotorRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotorRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHovering_MetaData[];
#endif
		static void NewProp_bIsHovering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHovering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFiring_MetaData[];
#endif
		static void NewProp_bIsFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFiring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDamaged_MetaData[];
#endif
		static void NewProp_bIsDamaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDamaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalHurtForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalHurtForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Drone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Drone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIDroneAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZAIDroneAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_MaxLeanAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_MaxLeanAngle = { "MaxLeanAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneAnimation, MaxLeanAngle), METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_MaxLeanAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_MaxLeanAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorMaxSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorMaxSpeed = { "RotorMaxSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneAnimation, RotorMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorAcceleration = { "RotorAcceleration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneAnimation, RotorAcceleration), METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorDeceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorDeceleration = { "RotorDeceleration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneAnimation, RotorDeceleration), METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorDeceleration_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_HurtReactions_Inner = { "HurtReactions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_HurtReactions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_HurtReactions = { "HurtReactions", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneAnimation, HurtReactions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_HurtReactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_HurtReactions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RootRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RootRotation = { "RootRotation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneAnimation, RootRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RootRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RootRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_WeaponRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_WeaponRotation = { "WeaponRotation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneAnimation, WeaponRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_WeaponRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_WeaponRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorRotation = { "RotorRotation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneAnimation, RotorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsHovering_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsHovering_SetBit(void* Obj)
	{
		((USBZAIDroneAnimation*)Obj)->bIsHovering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsHovering = { "bIsHovering", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIDroneAnimation), &Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsHovering_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsHovering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsHovering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsFiring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsFiring_SetBit(void* Obj)
	{
		((USBZAIDroneAnimation*)Obj)->bIsFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsFiring = { "bIsFiring", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIDroneAnimation), &Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsFiring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsDamaged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsDamaged_SetBit(void* Obj)
	{
		((USBZAIDroneAnimation*)Obj)->bIsDamaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsDamaged = { "bIsDamaged", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIDroneAnimation), &Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsDamaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsDamaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsDamaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_LocalVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_LocalVelocity = { "LocalVelocity", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneAnimation, LocalVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_LocalVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_LocalVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_LocalHurtForce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_LocalHurtForce = { "LocalHurtForce", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneAnimation, LocalHurtForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_LocalHurtForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_LocalHurtForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_YawSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_YawSpeed = { "YawSpeed", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneAnimation, YawSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_YawSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_YawSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_Drone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIDroneAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_Drone = { "Drone", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDroneAnimation, Drone), Z_Construct_UClass_ASBZAIDrone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_Drone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_Drone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIDroneAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_MaxLeanAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorDeceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_HurtReactions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_HurtReactions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RootRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_WeaponRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_RotorRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsHovering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsFiring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_bIsDamaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_LocalVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_LocalHurtForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_YawSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDroneAnimation_Statics::NewProp_Drone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIDroneAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIDroneAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIDroneAnimation_Statics::ClassParams = {
		&USBZAIDroneAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIDroneAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIDroneAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIDroneAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIDroneAnimation, 1466179026);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIDroneAnimation>()
	{
		return USBZAIDroneAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIDroneAnimation(Z_Construct_UClass_USBZAIDroneAnimation, &USBZAIDroneAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIDroneAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIDroneAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
