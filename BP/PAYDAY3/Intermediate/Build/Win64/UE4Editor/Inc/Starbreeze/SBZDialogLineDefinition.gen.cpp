// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDialogLineDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDialogLineDefinition() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDialogLineDefinition();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDialogPerformer();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZDialogLineDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDialogLineDefinition, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDialogLineDefinition"), sizeof(FSBZDialogLineDefinition), Get_Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDialogLineDefinition>()
{
	return FSBZDialogLineDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDialogLineDefinition(FSBZDialogLineDefinition::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDialogLineDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDialogLineDefinition
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDialogLineDefinition()
	{
		UScriptStruct::DeferCppStructOps<FSBZDialogLineDefinition>(FName(TEXT("SBZDialogLineDefinition")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDialogLineDefinition;
	struct Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Performer_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Performer_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Performer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDialogLineDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDialogLineDefinition>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_Performer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_Performer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogLineDefinition" },
		{ "ModuleRelativePath", "Public/SBZDialogLineDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_Performer = { "Performer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDialogLineDefinition, Performer), Z_Construct_UEnum_Starbreeze_ESBZDialogPerformer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_Performer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_Performer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_AudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogLineDefinition" },
		{ "ModuleRelativePath", "Public/SBZDialogLineDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDialogLineDefinition, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_AudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_AudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_CommentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogLineDefinition" },
		{ "ModuleRelativePath", "Public/SBZDialogLineDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_CommentState = { "CommentState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDialogLineDefinition, CommentState), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_CommentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_CommentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_Delay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogLineDefinition" },
		{ "ModuleRelativePath", "Public/SBZDialogLineDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDialogLineDefinition, Delay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_Delay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_Performer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_Performer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_AudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_CommentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::NewProp_Delay,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDialogLineDefinition",
		sizeof(FSBZDialogLineDefinition),
		alignof(FSBZDialogLineDefinition),
		Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDialogLineDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDialogLineDefinition"), sizeof(FSBZDialogLineDefinition), Get_Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDialogLineDefinition_Hash() { return 2839653389U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
