// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnMontageInstanceEndedMCDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
// End Cross Module References
	void USBZCharacterAnimation::StaticRegisterNativesUSBZCharacterAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZCharacterAnimation_NoRegister()
	{
		return USBZCharacterAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMontageInstanceEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageInstanceEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunning_MetaData[];
#endif
		static void NewProp_bRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZCharacterAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_OnMontageInstanceEnded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimation" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_OnMontageInstanceEnded = { "OnMontageInstanceEnded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimation, OnMontageInstanceEnded), Z_Construct_UDelegateFunction_Starbreeze_OnMontageInstanceEndedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_OnMontageInstanceEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_OnMontageInstanceEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_bRunning_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimation" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_bRunning_SetBit(void* Obj)
	{
		((USBZCharacterAnimation*)Obj)->bRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_bRunning = { "bRunning", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCharacterAnimation), &Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_bRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_bRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_bRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimation" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimation, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_OnMontageInstanceEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_bRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimation_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterAnimation_Statics::ClassParams = {
		&USBZCharacterAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCharacterAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimation_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterAnimation, 967341230);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterAnimation>()
	{
		return USBZCharacterAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterAnimation(Z_Construct_UClass_USBZCharacterAnimation, &USBZCharacterAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
