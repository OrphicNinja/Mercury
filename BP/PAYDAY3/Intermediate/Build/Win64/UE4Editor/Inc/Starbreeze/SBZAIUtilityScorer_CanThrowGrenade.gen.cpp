// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityScorer_CanThrowGrenade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityScorer_CanThrowGrenade() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIUtilityScorer_CanThrowGrenade::StaticRegisterNativesUSBZAIUtilityScorer_CanThrowGrenade()
	{
	}
	UClass* Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_NoRegister()
	{
		return USBZAIUtilityScorer_CanThrowGrenade::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumEnemyDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumEnemyDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIUtilityScorer,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityScorer_CanThrowGrenade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer_CanThrowGrenade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::NewProp_MinimumEnemyDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityScorer_CanThrowGrenade" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer_CanThrowGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::NewProp_MinimumEnemyDistance = { "MinimumEnemyDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityScorer_CanThrowGrenade, MinimumEnemyDistance), METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::NewProp_MinimumEnemyDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::NewProp_MinimumEnemyDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::NewProp_MinimumEnemyDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityScorer_CanThrowGrenade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::ClassParams = {
		&USBZAIUtilityScorer_CanThrowGrenade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityScorer_CanThrowGrenade, 3395217521);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityScorer_CanThrowGrenade>()
	{
		return USBZAIUtilityScorer_CanThrowGrenade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityScorer_CanThrowGrenade(Z_Construct_UClass_USBZAIUtilityScorer_CanThrowGrenade, &USBZAIUtilityScorer_CanThrowGrenade::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityScorer_CanThrowGrenade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityScorer_CanThrowGrenade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
