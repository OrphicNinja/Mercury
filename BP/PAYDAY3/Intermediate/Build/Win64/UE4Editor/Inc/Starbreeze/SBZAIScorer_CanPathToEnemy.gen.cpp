// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIScorer_CanPathToEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIScorer_CanPathToEnemy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIScorer_CanPathToEnemy();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIScorer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZAIScorer_CanPathToEnemy::StaticRegisterNativesUSBZAIScorer_CanPathToEnemy()
	{
	}
	UClass* Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_NoRegister()
	{
		return USBZAIScorer_CanPathToEnemy::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedDistanceFromPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllowedDistanceFromPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultScoreValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultScoreValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoredTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IgnoredTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIScorer,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIScorer_CanPathToEnemy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIScorer_CanPathToEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_FilterClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIScorer_CanPathToEnemy" },
		{ "ModuleRelativePath", "Public/SBZAIScorer_CanPathToEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIScorer_CanPathToEnemy, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_AllowedDistanceFromPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIScorer_CanPathToEnemy" },
		{ "ModuleRelativePath", "Public/SBZAIScorer_CanPathToEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_AllowedDistanceFromPath = { "AllowedDistanceFromPath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIScorer_CanPathToEnemy, AllowedDistanceFromPath), METADATA_PARAMS(Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_AllowedDistanceFromPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_AllowedDistanceFromPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_DefaultScoreValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIScorer_CanPathToEnemy" },
		{ "ModuleRelativePath", "Public/SBZAIScorer_CanPathToEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_DefaultScoreValue = { "DefaultScoreValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIScorer_CanPathToEnemy, DefaultScoreValue), METADATA_PARAMS(Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_DefaultScoreValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_DefaultScoreValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_IgnoredTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIScorer_CanPathToEnemy" },
		{ "ModuleRelativePath", "Public/SBZAIScorer_CanPathToEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_IgnoredTags = { "IgnoredTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIScorer_CanPathToEnemy, IgnoredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_IgnoredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_IgnoredTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_AllowedDistanceFromPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_DefaultScoreValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::NewProp_IgnoredTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIScorer_CanPathToEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::ClassParams = {
		&USBZAIScorer_CanPathToEnemy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIScorer_CanPathToEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIScorer_CanPathToEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIScorer_CanPathToEnemy, 3857699012);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIScorer_CanPathToEnemy>()
	{
		return USBZAIScorer_CanPathToEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIScorer_CanPathToEnemy(Z_Construct_UClass_USBZAIScorer_CanPathToEnemy, &USBZAIScorer_CanPathToEnemy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIScorer_CanPathToEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIScorer_CanPathToEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
