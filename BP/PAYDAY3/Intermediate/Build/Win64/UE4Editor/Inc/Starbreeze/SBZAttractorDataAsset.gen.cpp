// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAttractorDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAttractorDataAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIAttractorPriority();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActionMetaData();
// End Cross Module References
	void USBZAttractorDataAsset::StaticRegisterNativesUSBZAttractorDataAsset()
	{
	}
	UClass* Z_Construct_UClass_USBZAttractorDataAsset_NoRegister()
	{
		return USBZAttractorDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USBZAttractorDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RegisterAsSourceForSenses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisterAsSourceForSenses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisterAsSourceForSenses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSense_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultSense;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxHeistStateToBeEnabled_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeistStateToBeEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaxHeistStateToBeEnabled;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaxConcurrentUsers_MetaData[];
#endif
		static void NewProp_bUseMaxConcurrentUsers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaxConcurrentUsers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentUsers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUses_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxUses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnComplete_MetaData[];
#endif
		static void NewProp_bDestroyOnComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReusable_MetaData[];
#endif
		static void NewProp_bIsReusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReusable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorPredicates_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorPredicates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorPredicates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttractorPredicates;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionMetaData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionMetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAttractorDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAttractorDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_RegisterAsSourceForSenses_Inner = { "RegisterAsSourceForSenses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_RegisterAsSourceForSenses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_RegisterAsSourceForSenses = { "RegisterAsSourceForSenses", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAttractorDataAsset, RegisterAsSourceForSenses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_RegisterAsSourceForSenses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_RegisterAsSourceForSenses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_DefaultSense_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_DefaultSense = { "DefaultSense", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAttractorDataAsset, DefaultSense), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_DefaultSense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_DefaultSense_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxHeistStateToBeEnabled_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxHeistStateToBeEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxHeistStateToBeEnabled = { "MaxHeistStateToBeEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAttractorDataAsset, MaxHeistStateToBeEnabled), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxHeistStateToBeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxHeistStateToBeEnabled_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAttractorDataAsset, Priority), Z_Construct_UEnum_Starbreeze_ESBZAIAttractorPriority, METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAttractorDataAsset, Radius), METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bUseMaxConcurrentUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bUseMaxConcurrentUsers_SetBit(void* Obj)
	{
		((USBZAttractorDataAsset*)Obj)->bUseMaxConcurrentUsers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bUseMaxConcurrentUsers = { "bUseMaxConcurrentUsers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAttractorDataAsset), &Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bUseMaxConcurrentUsers_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bUseMaxConcurrentUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bUseMaxConcurrentUsers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxConcurrentUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxConcurrentUsers = { "MaxConcurrentUsers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAttractorDataAsset, MaxConcurrentUsers), METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxConcurrentUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxConcurrentUsers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxUses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxUses = { "MaxUses", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAttractorDataAsset, MaxUses), METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxUses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxUses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bDestroyOnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bDestroyOnComplete_SetBit(void* Obj)
	{
		((USBZAttractorDataAsset*)Obj)->bDestroyOnComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bDestroyOnComplete = { "bDestroyOnComplete", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAttractorDataAsset), &Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bDestroyOnComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bDestroyOnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bDestroyOnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bIsReusable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bIsReusable_SetBit(void* Obj)
	{
		((USBZAttractorDataAsset*)Obj)->bIsReusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bIsReusable = { "bIsReusable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAttractorDataAsset), &Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bIsReusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bIsReusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bIsReusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAttractorDataAsset, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_AttractorPredicates_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_AttractorPredicates_Inner = { "AttractorPredicates", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAttractorPredicate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_AttractorPredicates_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_AttractorPredicates_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_AttractorPredicates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_AttractorPredicates = { "AttractorPredicates", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAttractorDataAsset, AttractorPredicates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_AttractorPredicates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_AttractorPredicates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_ActionMetaData_Inner = { "ActionMetaData", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZActionMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_ActionMetaData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorDataAsset" },
		{ "ModuleRelativePath", "Public/SBZAttractorDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_ActionMetaData = { "ActionMetaData", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAttractorDataAsset, ActionMetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_ActionMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_ActionMetaData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAttractorDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_RegisterAsSourceForSenses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_RegisterAsSourceForSenses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_DefaultSense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxHeistStateToBeEnabled_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxHeistStateToBeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Priority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bUseMaxConcurrentUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxConcurrentUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_MaxUses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bDestroyOnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_bIsReusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_AttractorPredicates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_AttractorPredicates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_ActionMetaData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorDataAsset_Statics::NewProp_ActionMetaData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAttractorDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAttractorDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAttractorDataAsset_Statics::ClassParams = {
		&USBZAttractorDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAttractorDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAttractorDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAttractorDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAttractorDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAttractorDataAsset, 1253885998);
	template<> STARBREEZE_API UClass* StaticClass<USBZAttractorDataAsset>()
	{
		return USBZAttractorDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAttractorDataAsset(Z_Construct_UClass_USBZAttractorDataAsset, &USBZAttractorDataAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAttractorDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAttractorDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
