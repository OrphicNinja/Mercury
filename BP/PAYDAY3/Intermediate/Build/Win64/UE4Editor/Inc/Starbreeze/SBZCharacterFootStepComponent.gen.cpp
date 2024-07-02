// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterFootStepComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterFootStepComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterFootStepComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterFootStepComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
// End Cross Module References
	void USBZCharacterFootStepComponent::StaticRegisterNativesUSBZCharacterFootStepComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZCharacterFootStepComponent_NoRegister()
	{
		return USBZCharacterFootStepComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterFootStepComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootStepRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootStepRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalStepDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalStepDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchStepDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchStepDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunStepDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunStepDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingStepDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetingStepDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFootContactNotifies_MetaData[];
#endif
		static void NewProp_bUseFootContactNotifies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFootContactNotifies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationTimeMSFootstep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationTimeMSFootstep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMakeNoise_MetaData[];
#endif
		static void NewProp_bCanMakeNoise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMakeNoise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalNoiseRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalNoiseRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchNoiseRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchNoiseRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunNoiseRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunNoiseRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacterMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacterMovementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZCharacterFootStepComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OverrideSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OverrideSoundEvent = { "OverrideSoundEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterFootStepComponent, OverrideSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OverrideSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OverrideSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_FootStepRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_FootStepRtpc = { "FootStepRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterFootStepComponent, FootStepRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_FootStepRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_FootStepRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_NormalStepDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_NormalStepDistance = { "NormalStepDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterFootStepComponent, NormalStepDistance), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_NormalStepDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_NormalStepDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_CrouchStepDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_CrouchStepDistance = { "CrouchStepDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterFootStepComponent, CrouchStepDistance), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_CrouchStepDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_CrouchStepDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_RunStepDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_RunStepDistance = { "RunStepDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterFootStepComponent, RunStepDistance), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_RunStepDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_RunStepDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_TargetingStepDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_TargetingStepDistance = { "TargetingStepDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterFootStepComponent, TargetingStepDistance), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_TargetingStepDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_TargetingStepDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bUseFootContactNotifies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bUseFootContactNotifies_SetBit(void* Obj)
	{
		((USBZCharacterFootStepComponent*)Obj)->bUseFootContactNotifies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bUseFootContactNotifies = { "bUseFootContactNotifies", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCharacterFootStepComponent), &Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bUseFootContactNotifies_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bUseFootContactNotifies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bUseFootContactNotifies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_InterpolationTimeMSFootstep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_InterpolationTimeMSFootstep = { "InterpolationTimeMSFootstep", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterFootStepComponent, InterpolationTimeMSFootstep), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_InterpolationTimeMSFootstep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_InterpolationTimeMSFootstep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bCanMakeNoise_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bCanMakeNoise_SetBit(void* Obj)
	{
		((USBZCharacterFootStepComponent*)Obj)->bCanMakeNoise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bCanMakeNoise = { "bCanMakeNoise", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCharacterFootStepComponent), &Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bCanMakeNoise_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bCanMakeNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bCanMakeNoise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_NormalNoiseRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_NormalNoiseRange = { "NormalNoiseRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterFootStepComponent, NormalNoiseRange), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_NormalNoiseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_NormalNoiseRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_CrouchNoiseRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_CrouchNoiseRange = { "CrouchNoiseRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterFootStepComponent, CrouchNoiseRange), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_CrouchNoiseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_CrouchNoiseRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_RunNoiseRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_RunNoiseRange = { "RunNoiseRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterFootStepComponent, RunNoiseRange), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_RunNoiseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_RunNoiseRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterFootStepComponent, OwnerCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OwnerCharacterMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterFootStepComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterFootStepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OwnerCharacterMovementComponent = { "OwnerCharacterMovementComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterFootStepComponent, OwnerCharacterMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OwnerCharacterMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OwnerCharacterMovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OverrideSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_FootStepRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_NormalStepDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_CrouchStepDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_RunStepDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_TargetingStepDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bUseFootContactNotifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_InterpolationTimeMSFootstep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_bCanMakeNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_NormalNoiseRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_CrouchNoiseRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_RunNoiseRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::NewProp_OwnerCharacterMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterFootStepComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::ClassParams = {
		&USBZCharacterFootStepComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterFootStepComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterFootStepComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterFootStepComponent, 1582284768);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterFootStepComponent>()
	{
		return USBZCharacterFootStepComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterFootStepComponent(Z_Construct_UClass_USBZCharacterFootStepComponent, &USBZCharacterFootStepComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterFootStepComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterFootStepComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
