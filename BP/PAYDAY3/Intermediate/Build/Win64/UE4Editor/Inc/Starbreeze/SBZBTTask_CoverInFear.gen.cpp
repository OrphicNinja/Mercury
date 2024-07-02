// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_CoverInFear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_CoverInFear() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_CoverInFear_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_CoverInFear();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZBTTask_CoverInFear::StaticRegisterNativesUSBZBTTask_CoverInFear()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_CoverInFear_NoRegister()
	{
		return USBZBTTask_CoverInFear::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_CoverInFear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistFromEnemyToReact_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistFromEnemyToReact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReactionTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnderFireReactionTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnderFireReactionTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactDurationInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReactDurationInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistFromEnemyToForceCrouch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistFromEnemyToForceCrouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchBySoundRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchBySoundRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchBySoundTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrouchBySoundTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletDetectionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletDetectionRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_CoverInFear.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_CoverInFear.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_MaxDistFromEnemyToReact_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_CoverInFear" },
		{ "ModuleRelativePath", "Public/SBZBTTask_CoverInFear.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_MaxDistFromEnemyToReact = { "MaxDistFromEnemyToReact", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_CoverInFear, MaxDistFromEnemyToReact), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_MaxDistFromEnemyToReact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_MaxDistFromEnemyToReact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_ReactionTimeInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_CoverInFear" },
		{ "ModuleRelativePath", "Public/SBZBTTask_CoverInFear.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_ReactionTimeInterval = { "ReactionTimeInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_CoverInFear, ReactionTimeInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_ReactionTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_ReactionTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_UnderFireReactionTimeInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_CoverInFear" },
		{ "ModuleRelativePath", "Public/SBZBTTask_CoverInFear.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_UnderFireReactionTimeInterval = { "UnderFireReactionTimeInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_CoverInFear, UnderFireReactionTimeInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_UnderFireReactionTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_UnderFireReactionTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_ReactDurationInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_CoverInFear" },
		{ "ModuleRelativePath", "Public/SBZBTTask_CoverInFear.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_ReactDurationInterval = { "ReactDurationInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_CoverInFear, ReactDurationInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_ReactDurationInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_ReactDurationInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_DistFromEnemyToForceCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_CoverInFear" },
		{ "ModuleRelativePath", "Public/SBZBTTask_CoverInFear.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_DistFromEnemyToForceCrouch = { "DistFromEnemyToForceCrouch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_CoverInFear, DistFromEnemyToForceCrouch), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_DistFromEnemyToForceCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_DistFromEnemyToForceCrouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_CrouchBySoundRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_CoverInFear" },
		{ "ModuleRelativePath", "Public/SBZBTTask_CoverInFear.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_CrouchBySoundRadius = { "CrouchBySoundRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_CoverInFear, CrouchBySoundRadius), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_CrouchBySoundRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_CrouchBySoundRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_CrouchBySoundTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_CoverInFear" },
		{ "ModuleRelativePath", "Public/SBZBTTask_CoverInFear.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_CrouchBySoundTags = { "CrouchBySoundTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_CoverInFear, CrouchBySoundTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_CrouchBySoundTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_CrouchBySoundTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_BulletDetectionRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_CoverInFear" },
		{ "ModuleRelativePath", "Public/SBZBTTask_CoverInFear.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_BulletDetectionRadius = { "BulletDetectionRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_CoverInFear, BulletDetectionRadius), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_BulletDetectionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_BulletDetectionRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_MaxDistFromEnemyToReact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_ReactionTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_UnderFireReactionTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_ReactDurationInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_DistFromEnemyToForceCrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_CrouchBySoundRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_CrouchBySoundTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::NewProp_BulletDetectionRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_CoverInFear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::ClassParams = {
		&USBZBTTask_CoverInFear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_CoverInFear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_CoverInFear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_CoverInFear, 2167507315);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_CoverInFear>()
	{
		return USBZBTTask_CoverInFear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_CoverInFear(Z_Construct_UClass_USBZBTTask_CoverInFear, &USBZBTTask_CoverInFear::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_CoverInFear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_CoverInFear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
