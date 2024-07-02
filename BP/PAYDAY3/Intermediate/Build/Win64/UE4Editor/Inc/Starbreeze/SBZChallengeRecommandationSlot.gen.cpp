// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengeRecommandationSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengeRecommandationSlot() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZChallengeRecommandationsPriorityType();
// End Cross Module References
class UScriptStruct* FSBZChallengeRecommandationSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZChallengeRecommandationSlot"), sizeof(FSBZChallengeRecommandationSlot), Get_Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZChallengeRecommandationSlot>()
{
	return FSBZChallengeRecommandationSlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZChallengeRecommandationSlot(FSBZChallengeRecommandationSlot::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZChallengeRecommandationSlot"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeRecommandationSlot
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeRecommandationSlot()
	{
		UScriptStruct::DeferCppStructOps<FSBZChallengeRecommandationSlot>(FName(TEXT("SBZChallengeRecommandationSlot")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeRecommandationSlot;
	struct Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MandatoryTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MandatoryTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MandatoryTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludedTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckInfamyLevel_MetaData[];
#endif
		static void NewProp_CheckInfamyLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CheckInfamyLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChallengeRecommandationsPriorityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeRecommandationsPriorityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChallengeRecommandationsPriorityType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengeRecommandationSlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZChallengeRecommandationSlot>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_MandatoryTags_Inner = { "MandatoryTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_MandatoryTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeRecommandationSlot" },
		{ "ModuleRelativePath", "Public/SBZChallengeRecommandationSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_MandatoryTags = { "MandatoryTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeRecommandationSlot, MandatoryTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_MandatoryTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_MandatoryTags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ExcludedTags_Inner = { "ExcludedTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ExcludedTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeRecommandationSlot" },
		{ "ModuleRelativePath", "Public/SBZChallengeRecommandationSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ExcludedTags = { "ExcludedTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeRecommandationSlot, ExcludedTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ExcludedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ExcludedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_CheckInfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeRecommandationSlot" },
		{ "ModuleRelativePath", "Public/SBZChallengeRecommandationSlot.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_CheckInfamyLevel_SetBit(void* Obj)
	{
		((FSBZChallengeRecommandationSlot*)Obj)->CheckInfamyLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_CheckInfamyLevel = { "CheckInfamyLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZChallengeRecommandationSlot), &Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_CheckInfamyLevel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_CheckInfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_CheckInfamyLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ChallengeRecommandationsPriorityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ChallengeRecommandationsPriorityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeRecommandationSlot" },
		{ "ModuleRelativePath", "Public/SBZChallengeRecommandationSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ChallengeRecommandationsPriorityType = { "ChallengeRecommandationsPriorityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeRecommandationSlot, ChallengeRecommandationsPriorityType), Z_Construct_UEnum_Starbreeze_ESBZChallengeRecommandationsPriorityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ChallengeRecommandationsPriorityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ChallengeRecommandationsPriorityType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_MandatoryTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_MandatoryTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ExcludedTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ExcludedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_CheckInfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ChallengeRecommandationsPriorityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::NewProp_ChallengeRecommandationsPriorityType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZChallengeRecommandationSlot",
		sizeof(FSBZChallengeRecommandationSlot),
		alignof(FSBZChallengeRecommandationSlot),
		Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZChallengeRecommandationSlot"), sizeof(FSBZChallengeRecommandationSlot), Get_Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot_Hash() { return 1765851127U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
