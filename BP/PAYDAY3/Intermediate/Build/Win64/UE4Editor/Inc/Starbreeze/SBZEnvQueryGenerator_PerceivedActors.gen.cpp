// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryGenerator_PerceivedActors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryGenerator_PerceivedActors() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZEnvQueryGenerator_PerceivedActors::StaticRegisterNativesUSBZEnvQueryGenerator_PerceivedActors()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_NoRegister()
	{
		return USBZEnvQueryGenerator_PerceivedActors::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceiverContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PerceiverContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHostilesOnly_MetaData[];
#endif
		static void NewProp_bHostilesOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHostilesOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyVisualGenerators_MetaData[];
#endif
		static void NewProp_bOnlyVisualGenerators_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyVisualGenerators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCurrentlySensed_MetaData[];
#endif
		static void NewProp_bCurrentlySensed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurrentlySensed;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Senses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Senses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Senses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedPawnTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllowedPawnTypes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryGenerator_PerceivedActors.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_PerceivedActors.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_PerceiverContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryGenerator_PerceivedActors" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_PerceivedActors.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_PerceiverContext = { "PerceiverContext", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryGenerator_PerceivedActors, PerceiverContext), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_PerceiverContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_PerceiverContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bHostilesOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryGenerator_PerceivedActors" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_PerceivedActors.h" },
	};
#endif
	void Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bHostilesOnly_SetBit(void* Obj)
	{
		((USBZEnvQueryGenerator_PerceivedActors*)Obj)->bHostilesOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bHostilesOnly = { "bHostilesOnly", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZEnvQueryGenerator_PerceivedActors), &Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bHostilesOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bHostilesOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bHostilesOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bOnlyVisualGenerators_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryGenerator_PerceivedActors" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_PerceivedActors.h" },
	};
#endif
	void Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bOnlyVisualGenerators_SetBit(void* Obj)
	{
		((USBZEnvQueryGenerator_PerceivedActors*)Obj)->bOnlyVisualGenerators = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bOnlyVisualGenerators = { "bOnlyVisualGenerators", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZEnvQueryGenerator_PerceivedActors), &Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bOnlyVisualGenerators_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bOnlyVisualGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bOnlyVisualGenerators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bCurrentlySensed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryGenerator_PerceivedActors" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_PerceivedActors.h" },
	};
#endif
	void Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bCurrentlySensed_SetBit(void* Obj)
	{
		((USBZEnvQueryGenerator_PerceivedActors*)Obj)->bCurrentlySensed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bCurrentlySensed = { "bCurrentlySensed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZEnvQueryGenerator_PerceivedActors), &Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bCurrentlySensed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bCurrentlySensed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bCurrentlySensed_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_Senses_Inner = { "Senses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_Senses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryGenerator_PerceivedActors" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_PerceivedActors.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_Senses = { "Senses", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryGenerator_PerceivedActors, Senses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_Senses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_Senses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedPawnTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryGenerator_PerceivedActors" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_PerceivedActors.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedPawnTypes = { "AllowedPawnTypes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryGenerator_PerceivedActors, AllowedPawnTypes), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedPawnTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedPawnTypes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_PerceiverContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bHostilesOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bOnlyVisualGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_bCurrentlySensed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_Senses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_Senses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedPawnTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryGenerator_PerceivedActors>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::ClassParams = {
		&USBZEnvQueryGenerator_PerceivedActors::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryGenerator_PerceivedActors, 2604053447);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryGenerator_PerceivedActors>()
	{
		return USBZEnvQueryGenerator_PerceivedActors::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryGenerator_PerceivedActors(Z_Construct_UClass_USBZEnvQueryGenerator_PerceivedActors, &USBZEnvQueryGenerator_PerceivedActors::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryGenerator_PerceivedActors"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryGenerator_PerceivedActors);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
