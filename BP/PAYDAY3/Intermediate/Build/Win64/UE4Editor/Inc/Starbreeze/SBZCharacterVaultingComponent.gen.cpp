// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterVaultingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterVaultingComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterVaultingComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterVaultingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
// End Cross Module References
	void USBZCharacterVaultingComponent::StaticRegisterNativesUSBZCharacterVaultingComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZCharacterVaultingComponent_NoRegister()
	{
		return USBZCharacterVaultingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterVaultingComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoleySoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoleySoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMakeNoise_MetaData[];
#endif
		static void NewProp_bCanMakeNoise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMakeNoise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultingNoiseRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VaultingNoiseRange;
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
	UObject* (*const Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZCharacterVaultingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterVaultingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OverrideSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVaultingComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVaultingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OverrideSoundEvent = { "OverrideSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVaultingComponent, OverrideSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OverrideSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OverrideSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_FoleySoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVaultingComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVaultingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_FoleySoundEvent = { "FoleySoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVaultingComponent, FoleySoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_FoleySoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_FoleySoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_bCanMakeNoise_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVaultingComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVaultingComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_bCanMakeNoise_SetBit(void* Obj)
	{
		((USBZCharacterVaultingComponent*)Obj)->bCanMakeNoise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_bCanMakeNoise = { "bCanMakeNoise", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCharacterVaultingComponent), &Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_bCanMakeNoise_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_bCanMakeNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_bCanMakeNoise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_VaultingNoiseRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVaultingComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVaultingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_VaultingNoiseRange = { "VaultingNoiseRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVaultingComponent, VaultingNoiseRange), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_VaultingNoiseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_VaultingNoiseRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVaultingComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVaultingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVaultingComponent, OwnerCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OwnerCharacterMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVaultingComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterVaultingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OwnerCharacterMovementComponent = { "OwnerCharacterMovementComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVaultingComponent, OwnerCharacterMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OwnerCharacterMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OwnerCharacterMovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OverrideSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_FoleySoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_bCanMakeNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_VaultingNoiseRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::NewProp_OwnerCharacterMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterVaultingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::ClassParams = {
		&USBZCharacterVaultingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterVaultingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterVaultingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterVaultingComponent, 1108112756);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterVaultingComponent>()
	{
		return USBZCharacterVaultingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterVaultingComponent(Z_Construct_UClass_USBZCharacterVaultingComponent, &USBZCharacterVaultingComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterVaultingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterVaultingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
