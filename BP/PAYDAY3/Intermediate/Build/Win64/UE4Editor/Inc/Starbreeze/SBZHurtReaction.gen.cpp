// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHurtReaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHurtReaction() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReaction_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReaction();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionPose();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionArray();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionLookup();
// End Cross Module References
	void USBZHurtReaction::StaticRegisterNativesUSBZHurtReaction()
	{
	}
	UClass* Z_Construct_UClass_USBZHurtReaction_NoRegister()
	{
		return USBZHurtReaction::StaticClass();
	}
	struct Z_Construct_UClass_USBZHurtReaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flinch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Flinch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interrupt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Interrupt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stun_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Incapacitate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Incapacitate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GameplayTagMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageTypeTagMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageTypeTagMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeTagMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DamageTypeTagMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookupArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookupArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LookupArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHurtReaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHurtReaction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHurtReaction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHurtReaction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Flinch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReaction" },
		{ "ModuleRelativePath", "Public/SBZHurtReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Flinch = { "Flinch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHurtReaction, Flinch), Z_Construct_UScriptStruct_FSBZHurtReactionPose, METADATA_PARAMS(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Flinch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Flinch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Interrupt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReaction" },
		{ "ModuleRelativePath", "Public/SBZHurtReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Interrupt = { "Interrupt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHurtReaction, Interrupt), Z_Construct_UScriptStruct_FSBZHurtReactionPose, METADATA_PARAMS(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Interrupt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Interrupt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Stun_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReaction" },
		{ "ModuleRelativePath", "Public/SBZHurtReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Stun = { "Stun", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHurtReaction, Stun), Z_Construct_UScriptStruct_FSBZHurtReactionPose, METADATA_PARAMS(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Stun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Stun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Incapacitate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReaction" },
		{ "ModuleRelativePath", "Public/SBZHurtReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Incapacitate = { "Incapacitate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHurtReaction, Incapacitate), Z_Construct_UScriptStruct_FSBZHurtReactionPose, METADATA_PARAMS(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Incapacitate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Incapacitate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_GameplayTagMap_ValueProp = { "GameplayTagMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZHurtReactionArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_GameplayTagMap_Key_KeyProp = { "GameplayTagMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_GameplayTagMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReaction" },
		{ "ModuleRelativePath", "Public/SBZHurtReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_GameplayTagMap = { "GameplayTagMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHurtReaction, GameplayTagMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_GameplayTagMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_GameplayTagMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_DamageTypeTagMap_ValueProp = { "DamageTypeTagMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZHurtReactionArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_DamageTypeTagMap_Key_KeyProp = { "DamageTypeTagMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_DamageTypeTagMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReaction" },
		{ "ModuleRelativePath", "Public/SBZHurtReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_DamageTypeTagMap = { "DamageTypeTagMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHurtReaction, DamageTypeTagMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_DamageTypeTagMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_DamageTypeTagMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_LookupArray_Inner = { "LookupArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHurtReactionLookup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_LookupArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReaction" },
		{ "ModuleRelativePath", "Public/SBZHurtReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_LookupArray = { "LookupArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHurtReaction, LookupArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_LookupArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_LookupArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHurtReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Flinch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Interrupt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Stun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_Incapacitate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_GameplayTagMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_GameplayTagMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_GameplayTagMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_DamageTypeTagMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_DamageTypeTagMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_DamageTypeTagMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_LookupArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHurtReaction_Statics::NewProp_LookupArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHurtReaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHurtReaction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHurtReaction_Statics::ClassParams = {
		&USBZHurtReaction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZHurtReaction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHurtReaction_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHurtReaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHurtReaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHurtReaction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHurtReaction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHurtReaction, 2996363219);
	template<> STARBREEZE_API UClass* StaticClass<USBZHurtReaction>()
	{
		return USBZHurtReaction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHurtReaction(Z_Construct_UClass_USBZHurtReaction, &USBZHurtReaction::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHurtReaction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHurtReaction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
