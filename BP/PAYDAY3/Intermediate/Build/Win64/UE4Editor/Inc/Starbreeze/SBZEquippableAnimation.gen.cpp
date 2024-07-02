// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippableAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippableAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableAnimationCollection_NoRegister();
// End Cross Module References
	void USBZEquippableAnimation::StaticRegisterNativesUSBZEquippableAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZEquippableAnimation_NoRegister()
	{
		return USBZEquippableAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZEquippableAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdlePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdlePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEquippableAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZEquippableAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippableAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_IdlePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableAnimation" },
		{ "ModuleRelativePath", "Public/SBZEquippableAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_IdlePose = { "IdlePose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableAnimation, IdlePose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_IdlePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_IdlePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_Equippable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableAnimation" },
		{ "ModuleRelativePath", "Public/SBZEquippableAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableAnimation, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_Equippable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_AnimationCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableAnimation" },
		{ "ModuleRelativePath", "Public/SBZEquippableAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_AnimationCollection = { "AnimationCollection", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableAnimation, AnimationCollection), Z_Construct_UClass_USBZEquippableAnimationCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_AnimationCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_AnimationCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEquippableAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_IdlePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_Equippable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableAnimation_Statics::NewProp_AnimationCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEquippableAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEquippableAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEquippableAnimation_Statics::ClassParams = {
		&USBZEquippableAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEquippableAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableAnimation_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEquippableAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEquippableAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEquippableAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEquippableAnimation, 2129286962);
	template<> STARBREEZE_API UClass* StaticClass<USBZEquippableAnimation>()
	{
		return USBZEquippableAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEquippableAnimation(Z_Construct_UClass_USBZEquippableAnimation, &USBZEquippableAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEquippableAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEquippableAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
