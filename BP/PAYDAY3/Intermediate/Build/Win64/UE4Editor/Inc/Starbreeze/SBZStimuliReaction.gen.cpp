// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStimuliReaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStimuliReaction() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStimuliReaction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZStimuliReaction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZStimuliReaction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZStimuliReaction, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZStimuliReaction"), sizeof(FSBZStimuliReaction), Get_Z_Construct_UScriptStruct_FSBZStimuliReaction_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZStimuliReaction>()
{
	return FSBZStimuliReaction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZStimuliReaction(FSBZStimuliReaction::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZStimuliReaction"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStimuliReaction
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStimuliReaction()
	{
		UScriptStruct::DeferCppStructOps<FSBZStimuliReaction>(FName(TEXT("SBZStimuliReaction")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZStimuliReaction;
	struct Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_AllowedStates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedBehaviors_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AllowedBehaviors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldSetToIsAlert_MetaData[];
#endif
		static void NewProp_bShouldSetToIsAlert_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldSetToIsAlert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Predicate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Predicate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Predicates_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Predicates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Predicates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Predicates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZStimuliReaction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZStimuliReaction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStimuliReaction" },
		{ "ModuleRelativePath", "Public/SBZStimuliReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStimuliReaction, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_AllowedStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStimuliReaction" },
		{ "ModuleRelativePath", "Public/SBZStimuliReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_AllowedStates = { "AllowedStates", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStimuliReaction, AllowedStates), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_AllowedStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_AllowedStates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_AllowedBehaviors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStimuliReaction" },
		{ "ModuleRelativePath", "Public/SBZStimuliReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_AllowedBehaviors = { "AllowedBehaviors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStimuliReaction, AllowedBehaviors), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_AllowedBehaviors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_AllowedBehaviors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStimuliReaction" },
		{ "ModuleRelativePath", "Public/SBZStimuliReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStimuliReaction, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStimuliReaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStimuliReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStimuliReaction, Action), Z_Construct_UClass_USBZAIAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_bShouldSetToIsAlert_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStimuliReaction" },
		{ "ModuleRelativePath", "Public/SBZStimuliReaction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_bShouldSetToIsAlert_SetBit(void* Obj)
	{
		((FSBZStimuliReaction*)Obj)->bShouldSetToIsAlert = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_bShouldSetToIsAlert = { "bShouldSetToIsAlert", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZStimuliReaction), &Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_bShouldSetToIsAlert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_bShouldSetToIsAlert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_bShouldSetToIsAlert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStimuliReaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStimuliReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicate = { "Predicate", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStimuliReaction, Predicate), Z_Construct_UClass_USBZReactionPredicate_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicates_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStimuliReaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStimuliReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicates_Inner = { "Predicates", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZReactionPredicate_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicates_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicates_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStimuliReaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStimuliReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicates = { "Predicates", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStimuliReaction, Predicates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_AllowedStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_AllowedBehaviors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_bShouldSetToIsAlert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::NewProp_Predicates,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZStimuliReaction",
		sizeof(FSBZStimuliReaction),
		alignof(FSBZStimuliReaction),
		Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZStimuliReaction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZStimuliReaction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZStimuliReaction"), sizeof(FSBZStimuliReaction), Get_Z_Construct_UScriptStruct_FSBZStimuliReaction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZStimuliReaction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZStimuliReaction_Hash() { return 428079731U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
