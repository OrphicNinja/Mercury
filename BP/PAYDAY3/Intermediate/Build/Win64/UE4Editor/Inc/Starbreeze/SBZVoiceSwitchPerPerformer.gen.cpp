// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVoiceSwitchPerPerformer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVoiceSwitchPerPerformer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDialogPerformer();
// End Cross Module References
class UScriptStruct* FSBZVoiceSwitchPerPerformer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVoiceSwitchPerPerformer"), sizeof(FSBZVoiceSwitchPerPerformer), Get_Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVoiceSwitchPerPerformer>()
{
	return FSBZVoiceSwitchPerPerformer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVoiceSwitchPerPerformer(FSBZVoiceSwitchPerPerformer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVoiceSwitchPerPerformer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVoiceSwitchPerPerformer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVoiceSwitchPerPerformer()
	{
		UScriptStruct::DeferCppStructOps<FSBZVoiceSwitchPerPerformer>(FName(TEXT("SBZVoiceSwitchPerPerformer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVoiceSwitchPerPerformer;
	struct Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AllowedVoiceSwitches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedVoiceSwitches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedVoiceSwitches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVoiceSwitchPerPerformer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVoiceSwitchPerPerformer>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_Performer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_Performer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceSwitchPerPerformer" },
		{ "ModuleRelativePath", "Public/SBZVoiceSwitchPerPerformer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_Performer = { "Performer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVoiceSwitchPerPerformer, Performer), Z_Construct_UEnum_Starbreeze_ESBZDialogPerformer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_Performer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_Performer_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_AllowedVoiceSwitches_Inner = { "AllowedVoiceSwitches", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_AllowedVoiceSwitches_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceSwitchPerPerformer" },
		{ "ModuleRelativePath", "Public/SBZVoiceSwitchPerPerformer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_AllowedVoiceSwitches = { "AllowedVoiceSwitches", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVoiceSwitchPerPerformer, AllowedVoiceSwitches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_AllowedVoiceSwitches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_AllowedVoiceSwitches_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_Performer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_Performer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_AllowedVoiceSwitches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::NewProp_AllowedVoiceSwitches,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVoiceSwitchPerPerformer",
		sizeof(FSBZVoiceSwitchPerPerformer),
		alignof(FSBZVoiceSwitchPerPerformer),
		Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVoiceSwitchPerPerformer"), sizeof(FSBZVoiceSwitchPerPerformer), Get_Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer_Hash() { return 631167392U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
