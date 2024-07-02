// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHurtReactionPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHurtReactionPose() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionPose();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneHurtReaction();
// End Cross Module References
class UScriptStruct* FSBZHurtReactionPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHurtReactionPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHurtReactionPose, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHurtReactionPose"), sizeof(FSBZHurtReactionPose), Get_Z_Construct_UScriptStruct_FSBZHurtReactionPose_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHurtReactionPose>()
{
	return FSBZHurtReactionPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHurtReactionPose(FSBZHurtReactionPose::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHurtReactionPose"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHurtReactionPose
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHurtReactionPose()
	{
		UScriptStruct::DeferCppStructOps<FSBZHurtReactionPose>(FName(TEXT("SBZHurtReactionPose")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHurtReactionPose;
	struct Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Standing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Standing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crouching_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Crouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LyingOnFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LyingOnFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LyingOnBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LyingOnBack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHurtReactionPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_Standing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionPose" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_Standing = { "Standing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionPose, Standing), Z_Construct_UScriptStruct_FSBZBoneHurtReaction, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_Standing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_Standing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_Crouching_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionPose" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_Crouching = { "Crouching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionPose, Crouching), Z_Construct_UScriptStruct_FSBZBoneHurtReaction, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_Crouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_Crouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_LyingOnFront_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionPose" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_LyingOnFront = { "LyingOnFront", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionPose, LyingOnFront), Z_Construct_UScriptStruct_FSBZBoneHurtReaction, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_LyingOnFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_LyingOnFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_LyingOnBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionPose" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_LyingOnBack = { "LyingOnBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionPose, LyingOnBack), Z_Construct_UScriptStruct_FSBZBoneHurtReaction, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_LyingOnBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_LyingOnBack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_Standing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_Crouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_LyingOnFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::NewProp_LyingOnBack,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHurtReactionPose",
		sizeof(FSBZHurtReactionPose),
		alignof(FSBZHurtReactionPose),
		Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHurtReactionPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHurtReactionPose"), sizeof(FSBZHurtReactionPose), Get_Z_Construct_UScriptStruct_FSBZHurtReactionPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHurtReactionPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHurtReactionPose_Hash() { return 210113477U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
