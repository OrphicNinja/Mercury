// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICharacterLinkedAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICharacterLinkedAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterLinkedAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterLinkedAnimation();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterLinkedAnimation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICharacter_NoRegister();
// End Cross Module References
	void USBZAICharacterLinkedAnimation::StaticRegisterNativesUSBZAICharacterLinkedAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZAICharacterLinkedAnimation_NoRegister()
	{
		return USBZAICharacterLinkedAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDownOnGround_MetaData[];
#endif
		static void NewProp_bIsDownOnGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDownOnGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDownOnGroundPanic_MetaData[];
#endif
		static void NewProp_bIsDownOnGroundPanic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDownOnGroundPanic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownOnGroundIdle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownOnGroundIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterDownOnGroundIdlePanic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnterDownOnGroundIdlePanic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownOnGroundIdlePanic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownOnGroundIdlePanic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitDownOnGroundIdlePanic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitDownOnGroundIdlePanic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AICharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AICharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCharacterLinkedAnimation,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZAICharacterLinkedAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacterLinkedAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGround_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAICharacterLinkedAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGround_SetBit(void* Obj)
	{
		((USBZAICharacterLinkedAnimation*)Obj)->bIsDownOnGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGround = { "bIsDownOnGround", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZAICharacterLinkedAnimation), &Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGroundPanic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAICharacterLinkedAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGroundPanic_SetBit(void* Obj)
	{
		((USBZAICharacterLinkedAnimation*)Obj)->bIsDownOnGroundPanic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGroundPanic = { "bIsDownOnGroundPanic", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZAICharacterLinkedAnimation), &Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGroundPanic_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGroundPanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGroundPanic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_DownOnGroundIdle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAICharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_DownOnGroundIdle = { "DownOnGroundIdle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterLinkedAnimation, DownOnGroundIdle), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_DownOnGroundIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_DownOnGroundIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_EnterDownOnGroundIdlePanic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAICharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_EnterDownOnGroundIdlePanic = { "EnterDownOnGroundIdlePanic", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterLinkedAnimation, EnterDownOnGroundIdlePanic), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_EnterDownOnGroundIdlePanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_EnterDownOnGroundIdlePanic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_DownOnGroundIdlePanic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAICharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_DownOnGroundIdlePanic = { "DownOnGroundIdlePanic", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterLinkedAnimation, DownOnGroundIdlePanic), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_DownOnGroundIdlePanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_DownOnGroundIdlePanic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_ExitDownOnGroundIdlePanic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAICharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_ExitDownOnGroundIdlePanic = { "ExitDownOnGroundIdlePanic", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterLinkedAnimation, ExitDownOnGroundIdlePanic), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_ExitDownOnGroundIdlePanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_ExitDownOnGroundIdlePanic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_AICharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAICharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_AICharacter = { "AICharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterLinkedAnimation, AICharacter), Z_Construct_UClass_ASBZAICharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_AICharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_AICharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_bIsDownOnGroundPanic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_DownOnGroundIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_EnterDownOnGroundIdlePanic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_DownOnGroundIdlePanic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_ExitDownOnGroundIdlePanic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::NewProp_AICharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAICharacterLinkedAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::ClassParams = {
		&USBZAICharacterLinkedAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAICharacterLinkedAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAICharacterLinkedAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAICharacterLinkedAnimation, 3168089475);
	template<> STARBREEZE_API UClass* StaticClass<USBZAICharacterLinkedAnimation>()
	{
		return USBZAICharacterLinkedAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAICharacterLinkedAnimation(Z_Construct_UClass_USBZAICharacterLinkedAnimation, &USBZAICharacterLinkedAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAICharacterLinkedAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAICharacterLinkedAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
