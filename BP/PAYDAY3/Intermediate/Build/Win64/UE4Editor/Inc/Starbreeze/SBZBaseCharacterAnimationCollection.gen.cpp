// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBaseCharacterAnimationCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBaseCharacterAnimationCollection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseCharacterAnimationCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseCharacterAnimationCollection();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationContainer();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterStance();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSoftMontageContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void USBZBaseCharacterAnimationCollection::StaticRegisterNativesUSBZBaseCharacterAnimationCollection()
	{
	}
	UClass* Z_Construct_UClass_USBZBaseCharacterAnimationCollection_NoRegister()
	{
		return USBZBaseCharacterAnimationCollection::StaticClass();
	}
	struct Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationContainers_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationContainers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimationContainers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationsPerStances_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimationsPerStances_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnimationsPerStances_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationsPerStances_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimationsPerStances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedGamePlayTagBasedMontages_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedGamePlayTagBasedMontages_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedGamePlayTagBasedMontages_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedGamePlayTagBasedMontages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBaseCharacterAnimationCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseCharacterAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationContainers_ValueProp = { "AnimationContainers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZAnimationContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationContainers_Key_KeyProp = { "AnimationContainers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationContainers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseCharacterAnimationCollection" },
		{ "ModuleRelativePath", "Public/SBZBaseCharacterAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationContainers = { "AnimationContainers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseCharacterAnimationCollection, AnimationContainers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationContainers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationsPerStances_ValueProp = { "AnimationsPerStances", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationsPerStances_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationsPerStances_Key_KeyProp = { "AnimationsPerStances_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZCharacterStance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationsPerStances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseCharacterAnimationCollection" },
		{ "ModuleRelativePath", "Public/SBZBaseCharacterAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationsPerStances = { "AnimationsPerStances", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseCharacterAnimationCollection, AnimationsPerStances), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationsPerStances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationsPerStances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_CachedGamePlayTagBasedMontages_ValueProp = { "CachedGamePlayTagBasedMontages", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZSoftMontageContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_CachedGamePlayTagBasedMontages_Key_KeyProp = { "CachedGamePlayTagBasedMontages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_CachedGamePlayTagBasedMontages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseCharacterAnimationCollection" },
		{ "ModuleRelativePath", "Public/SBZBaseCharacterAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_CachedGamePlayTagBasedMontages = { "CachedGamePlayTagBasedMontages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseCharacterAnimationCollection, CachedGamePlayTagBasedMontages), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_CachedGamePlayTagBasedMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_CachedGamePlayTagBasedMontages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationContainers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationContainers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationsPerStances_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationsPerStances_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationsPerStances_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_AnimationsPerStances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_CachedGamePlayTagBasedMontages_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_CachedGamePlayTagBasedMontages_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::NewProp_CachedGamePlayTagBasedMontages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBaseCharacterAnimationCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::ClassParams = {
		&USBZBaseCharacterAnimationCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBaseCharacterAnimationCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBaseCharacterAnimationCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBaseCharacterAnimationCollection, 1198765645);
	template<> STARBREEZE_API UClass* StaticClass<USBZBaseCharacterAnimationCollection>()
	{
		return USBZBaseCharacterAnimationCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBaseCharacterAnimationCollection(Z_Construct_UClass_USBZBaseCharacterAnimationCollection, &USBZBaseCharacterAnimationCollection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBaseCharacterAnimationCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBaseCharacterAnimationCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
