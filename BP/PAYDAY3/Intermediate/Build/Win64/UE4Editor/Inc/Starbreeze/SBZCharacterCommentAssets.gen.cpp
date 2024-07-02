// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterCommentAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterCommentAssets() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterCommentAssets();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZCharacterCommentAssets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCharacterCommentAssets"), sizeof(FSBZCharacterCommentAssets), Get_Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCharacterCommentAssets>()
{
	return FSBZCharacterCommentAssets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCharacterCommentAssets(FSBZCharacterCommentAssets::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCharacterCommentAssets"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterCommentAssets
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterCommentAssets()
	{
		UScriptStruct::DeferCppStructOps<FSBZCharacterCommentAssets>(FName(TEXT("SBZCharacterCommentAssets")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterCommentAssets;
	struct Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakeDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TakeDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GruntLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GruntLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GruntHeavy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GruntHeavy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GruntHurtLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GruntHurtLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GruntHurtHeavy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GruntHurtHeavy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GruntUpwards_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GruntUpwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GruntDownwards_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GruntDownwards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterCommentAssets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCharacterCommentAssets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_TakeDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterCommentAssets" },
		{ "ModuleRelativePath", "Public/SBZCharacterCommentAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_TakeDamage = { "TakeDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterCommentAssets, TakeDamage), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_TakeDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_TakeDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_OnDeath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterCommentAssets" },
		{ "ModuleRelativePath", "Public/SBZCharacterCommentAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterCommentAssets, OnDeath), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_OnDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_OnDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntLight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterCommentAssets" },
		{ "ModuleRelativePath", "Public/SBZCharacterCommentAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntLight = { "GruntLight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterCommentAssets, GruntLight), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHeavy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterCommentAssets" },
		{ "ModuleRelativePath", "Public/SBZCharacterCommentAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHeavy = { "GruntHeavy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterCommentAssets, GruntHeavy), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHeavy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHeavy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHurtLight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterCommentAssets" },
		{ "ModuleRelativePath", "Public/SBZCharacterCommentAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHurtLight = { "GruntHurtLight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterCommentAssets, GruntHurtLight), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHurtLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHurtLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHurtHeavy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterCommentAssets" },
		{ "ModuleRelativePath", "Public/SBZCharacterCommentAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHurtHeavy = { "GruntHurtHeavy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterCommentAssets, GruntHurtHeavy), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHurtHeavy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHurtHeavy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntUpwards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterCommentAssets" },
		{ "ModuleRelativePath", "Public/SBZCharacterCommentAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntUpwards = { "GruntUpwards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterCommentAssets, GruntUpwards), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntUpwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntUpwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntDownwards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterCommentAssets" },
		{ "ModuleRelativePath", "Public/SBZCharacterCommentAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntDownwards = { "GruntDownwards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterCommentAssets, GruntDownwards), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntDownwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntDownwards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_TakeDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_OnDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHeavy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHurtLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntHurtHeavy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntUpwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::NewProp_GruntDownwards,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCharacterCommentAssets",
		sizeof(FSBZCharacterCommentAssets),
		alignof(FSBZCharacterCommentAssets),
		Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterCommentAssets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCharacterCommentAssets"), sizeof(FSBZCharacterCommentAssets), Get_Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterCommentAssets_Hash() { return 3850877395U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
