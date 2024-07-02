// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterLinkedAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterLinkedAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterLinkedAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterLinkedAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimationCollection_NoRegister();
// End Cross Module References
	void USBZCharacterLinkedAnimation::StaticRegisterNativesUSBZCharacterLinkedAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZCharacterLinkedAnimation_NoRegister()
	{
		return USBZCharacterLinkedAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEquippableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_CurrentEquippableClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAnimationCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAnimationCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZCharacterLinkedAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterLinkedAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterLinkedAnimation, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_CurrentEquippableClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_CurrentEquippableClass = { "CurrentEquippableClass", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterLinkedAnimation, CurrentEquippableClass), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_CurrentEquippableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_CurrentEquippableClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_CurrentAnimationCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_CurrentAnimationCollection = { "CurrentAnimationCollection", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterLinkedAnimation, CurrentAnimationCollection), Z_Construct_UClass_USBZCharacterAnimationCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_CurrentAnimationCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_CurrentAnimationCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_CurrentEquippableClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::NewProp_CurrentAnimationCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterLinkedAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::ClassParams = {
		&USBZCharacterLinkedAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterLinkedAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterLinkedAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterLinkedAnimation, 3755447537);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterLinkedAnimation>()
	{
		return USBZCharacterLinkedAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterLinkedAnimation(Z_Construct_UClass_USBZCharacterLinkedAnimation, &USBZCharacterLinkedAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterLinkedAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterLinkedAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
