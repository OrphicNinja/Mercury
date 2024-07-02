// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerAnimationCollectionFPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerAnimationCollectionFPP() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAnimationCollectionFPP();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseCharacterAnimationCollection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMontageContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void USBZPlayerAnimationCollectionFPP::StaticRegisterNativesUSBZPlayerAnimationCollectionFPP()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_NoRegister()
	{
		return USBZPlayerAnimationCollectionFPP::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationLeftHandEquippedContainers_ValueProp;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AnimationLeftHandEquippedContainers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationLeftHandEquippedContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimationLeftHandEquippedContainers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GamePlayTagBasedMontageContainers_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GamePlayTagBasedMontageContainers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamePlayTagBasedMontageContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GamePlayTagBasedMontageContainers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseCharacterAnimationCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerAnimationCollectionFPP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationCollectionFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_AnimationLeftHandEquippedContainers_ValueProp = { "AnimationLeftHandEquippedContainers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_AnimationLeftHandEquippedContainers_Key_KeyProp = { "AnimationLeftHandEquippedContainers_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_AnimationLeftHandEquippedContainers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationCollectionFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationCollectionFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_AnimationLeftHandEquippedContainers = { "AnimationLeftHandEquippedContainers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationCollectionFPP, AnimationLeftHandEquippedContainers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_AnimationLeftHandEquippedContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_AnimationLeftHandEquippedContainers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_GamePlayTagBasedMontageContainers_ValueProp = { "GamePlayTagBasedMontageContainers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZMontageContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_GamePlayTagBasedMontageContainers_Key_KeyProp = { "GamePlayTagBasedMontageContainers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_GamePlayTagBasedMontageContainers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationCollectionFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationCollectionFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_GamePlayTagBasedMontageContainers = { "GamePlayTagBasedMontageContainers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationCollectionFPP, GamePlayTagBasedMontageContainers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_GamePlayTagBasedMontageContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_GamePlayTagBasedMontageContainers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_AnimationLeftHandEquippedContainers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_AnimationLeftHandEquippedContainers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_AnimationLeftHandEquippedContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_GamePlayTagBasedMontageContainers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_GamePlayTagBasedMontageContainers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::NewProp_GamePlayTagBasedMontageContainers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerAnimationCollectionFPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::ClassParams = {
		&USBZPlayerAnimationCollectionFPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerAnimationCollectionFPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerAnimationCollectionFPP, 635252236);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerAnimationCollectionFPP>()
	{
		return USBZPlayerAnimationCollectionFPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerAnimationCollectionFPP(Z_Construct_UClass_USBZPlayerAnimationCollectionFPP, &USBZPlayerAnimationCollectionFPP::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerAnimationCollectionFPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerAnimationCollectionFPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
