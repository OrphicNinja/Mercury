// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSentryGunAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSentryGunAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryGunAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryGunAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSentryGun_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer();
// End Cross Module References
	void USBZSentryGunAnimation::StaticRegisterNativesUSBZSentryGunAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZSentryGunAnimation_NoRegister()
	{
		return USBZSentryGunAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZSentryGunAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentryYawOnlyRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SentryYawOnlyRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentryRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SentryRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentryGun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SentryGun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawBouncer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawBouncer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchBouncer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchBouncer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeadPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToDeadPitchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToDeadPitchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromDeadPitchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FromDeadPitchSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSentryGunAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZSentryGunAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryYawOnlyRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGunAnimation" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryYawOnlyRotation = { "SentryYawOnlyRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSentryGunAnimation, SentryYawOnlyRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryYawOnlyRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryYawOnlyRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGunAnimation" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryRotation = { "SentryRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSentryGunAnimation, SentryRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryGun_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGunAnimation" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryGun = { "SentryGun", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSentryGunAnimation, SentryGun), Z_Construct_UClass_ASBZSentryGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryGun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryGun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_YawBouncer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGunAnimation" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_YawBouncer = { "YawBouncer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSentryGunAnimation, YawBouncer), Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer, METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_YawBouncer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_YawBouncer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_PitchBouncer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGunAnimation" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_PitchBouncer = { "PitchBouncer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSentryGunAnimation, PitchBouncer), Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer, METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_PitchBouncer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_PitchBouncer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_DeadPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGunAnimation" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_DeadPitch = { "DeadPitch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSentryGunAnimation, DeadPitch), METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_DeadPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_DeadPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_ToDeadPitchSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGunAnimation" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_ToDeadPitchSpeed = { "ToDeadPitchSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSentryGunAnimation, ToDeadPitchSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_ToDeadPitchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_ToDeadPitchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_FromDeadPitchSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGunAnimation" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_FromDeadPitchSpeed = { "FromDeadPitchSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSentryGunAnimation, FromDeadPitchSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_FromDeadPitchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_FromDeadPitchSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSentryGunAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryYawOnlyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_SentryGun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_YawBouncer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_PitchBouncer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_DeadPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_ToDeadPitchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryGunAnimation_Statics::NewProp_FromDeadPitchSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSentryGunAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSentryGunAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSentryGunAnimation_Statics::ClassParams = {
		&USBZSentryGunAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSentryGunAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAnimation_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSentryGunAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSentryGunAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSentryGunAnimation, 2878117361);
	template<> STARBREEZE_API UClass* StaticClass<USBZSentryGunAnimation>()
	{
		return USBZSentryGunAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSentryGunAnimation(Z_Construct_UClass_USBZSentryGunAnimation, &USBZSentryGunAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSentryGunAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSentryGunAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
