// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLeftHandEquippableAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLeftHandEquippableAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLeftHandEquippableAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLeftHandEquippableAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableAnimationCollection_NoRegister();
// End Cross Module References
	void USBZLeftHandEquippableAnimation::StaticRegisterNativesUSBZLeftHandEquippableAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZLeftHandEquippableAnimation_NoRegister()
	{
		return USBZLeftHandEquippableAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsingIdle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsingIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
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
	UObject* (*const Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZLeftHandEquippableAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLeftHandEquippableAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Idle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLeftHandEquippableAnimation" },
		{ "ModuleRelativePath", "Public/SBZLeftHandEquippableAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Idle = { "Idle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLeftHandEquippableAnimation, Idle), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_UsingIdle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLeftHandEquippableAnimation" },
		{ "ModuleRelativePath", "Public/SBZLeftHandEquippableAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_UsingIdle = { "UsingIdle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLeftHandEquippableAnimation, UsingIdle), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_UsingIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_UsingIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_IdleTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLeftHandEquippableAnimation" },
		{ "ModuleRelativePath", "Public/SBZLeftHandEquippableAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_IdleTime = { "IdleTime", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLeftHandEquippableAnimation, IdleTime), METADATA_PARAMS(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_IdleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_IdleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLeftHandEquippableAnimation" },
		{ "ModuleRelativePath", "Public/SBZLeftHandEquippableAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLeftHandEquippableAnimation, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Equippable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLeftHandEquippableAnimation" },
		{ "ModuleRelativePath", "Public/SBZLeftHandEquippableAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLeftHandEquippableAnimation, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Equippable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_AnimationCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLeftHandEquippableAnimation" },
		{ "ModuleRelativePath", "Public/SBZLeftHandEquippableAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_AnimationCollection = { "AnimationCollection", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLeftHandEquippableAnimation, AnimationCollection), Z_Construct_UClass_USBZEquippableAnimationCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_AnimationCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_AnimationCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_UsingIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_IdleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_Equippable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::NewProp_AnimationCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLeftHandEquippableAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::ClassParams = {
		&USBZLeftHandEquippableAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLeftHandEquippableAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLeftHandEquippableAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLeftHandEquippableAnimation, 741277413);
	template<> STARBREEZE_API UClass* StaticClass<USBZLeftHandEquippableAnimation>()
	{
		return USBZLeftHandEquippableAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLeftHandEquippableAnimation(Z_Construct_UClass_USBZLeftHandEquippableAnimation, &USBZLeftHandEquippableAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLeftHandEquippableAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLeftHandEquippableAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
