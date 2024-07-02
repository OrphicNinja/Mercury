// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTagReaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTagReaction() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTagReaction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTagReactionActivation();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
class UScriptStruct* FSBZTagReaction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTagReaction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTagReaction, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTagReaction"), sizeof(FSBZTagReaction), Get_Z_Construct_UScriptStruct_FSBZTagReaction_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTagReaction>()
{
	return FSBZTagReaction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTagReaction(FSBZTagReaction::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTagReaction"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTagReaction
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTagReaction()
	{
		UScriptStruct::DeferCppStructOps<FSBZTagReaction>(FName(TEXT("SBZTagReaction")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTagReaction;
	struct Z_Construct_UScriptStruct_FSBZTagReaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateStanding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivateStanding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateCrouching_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivateCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateLyingOnFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivateLyingOnFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateLyingOnBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivateLyingOnBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivateStanding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeactivateStanding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivateCrouching_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeactivateCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivateLyingOnFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeactivateLyingOnFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivateLyingOnBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeactivateLyingOnBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagReactionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TagReactionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagReactionStartedComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TagReactionStartedComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagReactionEndedComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TagReactionEndedComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockingTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTagReaction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateStanding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateStanding = { "ActivateStanding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, ActivateStanding), Z_Construct_UScriptStruct_FSBZTagReactionActivation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateStanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateStanding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateCrouching_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateCrouching = { "ActivateCrouching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, ActivateCrouching), Z_Construct_UScriptStruct_FSBZTagReactionActivation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateLyingOnFront_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateLyingOnFront = { "ActivateLyingOnFront", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, ActivateLyingOnFront), Z_Construct_UScriptStruct_FSBZTagReactionActivation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateLyingOnFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateLyingOnFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateLyingOnBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateLyingOnBack = { "ActivateLyingOnBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, ActivateLyingOnBack), Z_Construct_UScriptStruct_FSBZTagReactionActivation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateLyingOnBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateLyingOnBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateStanding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateStanding = { "DeactivateStanding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, DeactivateStanding), Z_Construct_UScriptStruct_FSBZTagReactionActivation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateStanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateStanding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateCrouching_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateCrouching = { "DeactivateCrouching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, DeactivateCrouching), Z_Construct_UScriptStruct_FSBZTagReactionActivation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateLyingOnFront_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateLyingOnFront = { "DeactivateLyingOnFront", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, DeactivateLyingOnFront), Z_Construct_UScriptStruct_FSBZTagReactionActivation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateLyingOnFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateLyingOnFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateLyingOnBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateLyingOnBack = { "DeactivateLyingOnBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, DeactivateLyingOnBack), Z_Construct_UScriptStruct_FSBZTagReactionActivation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateLyingOnBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateLyingOnBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, Priority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionEffect = { "TagReactionEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, TagReactionEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionStartedComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionStartedComment = { "TagReactionStartedComment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, TagReactionStartedComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionStartedComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionStartedComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionEndedComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionEndedComment = { "TagReactionEndedComment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, TagReactionEndedComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionEndedComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionEndedComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_EffectSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_EffectSocket = { "EffectSocket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, EffectSocket), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_EffectSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_EffectSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_BlockingTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReaction" },
		{ "ModuleRelativePath", "Public/SBZTagReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_BlockingTags = { "BlockingTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReaction, BlockingTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_BlockingTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_BlockingTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTagReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateStanding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateLyingOnFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_ActivateLyingOnBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateStanding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateLyingOnFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_DeactivateLyingOnBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionStartedComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_TagReactionEndedComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_EffectSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReaction_Statics::NewProp_BlockingTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTagReaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTagReaction",
		sizeof(FSBZTagReaction),
		alignof(FSBZTagReaction),
		Z_Construct_UScriptStruct_FSBZTagReaction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTagReaction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTagReaction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTagReaction"), sizeof(FSBZTagReaction), Get_Z_Construct_UScriptStruct_FSBZTagReaction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTagReaction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTagReaction_Hash() { return 1641569725U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
