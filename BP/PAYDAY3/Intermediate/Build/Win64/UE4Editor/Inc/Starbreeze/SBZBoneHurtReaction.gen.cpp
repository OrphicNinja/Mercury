// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBoneHurtReaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBoneHurtReaction() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneHurtReaction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionDirection();
// End Cross Module References
class UScriptStruct* FSBZBoneHurtReaction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBoneHurtReaction, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBoneHurtReaction"), sizeof(FSBZBoneHurtReaction), Get_Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBoneHurtReaction>()
{
	return FSBZBoneHurtReaction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBoneHurtReaction(FSBZBoneHurtReaction::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBoneHurtReaction"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneHurtReaction
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneHurtReaction()
	{
		UScriptStruct::DeferCppStructOps<FSBZBoneHurtReaction>(FName(TEXT("SBZBoneHurtReaction")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneHurtReaction;
	struct Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultBoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBoneHurtReaction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBoneHurtReaction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_DefaultBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneHurtReaction" },
		{ "ModuleRelativePath", "Public/SBZBoneHurtReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_DefaultBoneName = { "DefaultBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneHurtReaction, DefaultBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_DefaultBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_DefaultBoneName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_BoneMap_ValueProp = { "BoneMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZHurtReactionDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_BoneMap_Key_KeyProp = { "BoneMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_BoneMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneHurtReaction" },
		{ "ModuleRelativePath", "Public/SBZBoneHurtReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_BoneMap = { "BoneMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneHurtReaction, BoneMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_BoneMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_BoneMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_DefaultBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_BoneMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_BoneMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::NewProp_BoneMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBoneHurtReaction",
		sizeof(FSBZBoneHurtReaction),
		alignof(FSBZBoneHurtReaction),
		Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneHurtReaction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBoneHurtReaction"), sizeof(FSBZBoneHurtReaction), Get_Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBoneHurtReaction_Hash() { return 2585670092U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
