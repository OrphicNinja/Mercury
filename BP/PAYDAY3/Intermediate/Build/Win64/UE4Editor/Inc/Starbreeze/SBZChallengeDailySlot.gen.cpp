// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengeDailySlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengeDailySlot() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeDailySlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZChallengeDailyCompletionTimeType();
// End Cross Module References
class UScriptStruct* FSBZChallengeDailySlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZChallengeDailySlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZChallengeDailySlot"), sizeof(FSBZChallengeDailySlot), Get_Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZChallengeDailySlot>()
{
	return FSBZChallengeDailySlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZChallengeDailySlot(FSBZChallengeDailySlot::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZChallengeDailySlot"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeDailySlot
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeDailySlot()
	{
		UScriptStruct::DeferCppStructOps<FSBZChallengeDailySlot>(FName(TEXT("SBZChallengeDailySlot")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeDailySlot;
	struct Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChallengeDailyCompletionTimeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeDailyCompletionTimeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChallengeDailyCompletionTimeType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengeDailySlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZChallengeDailySlot>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::NewProp_ChallengeDailyCompletionTimeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::NewProp_ChallengeDailyCompletionTimeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeDailySlot" },
		{ "ModuleRelativePath", "Public/SBZChallengeDailySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::NewProp_ChallengeDailyCompletionTimeType = { "ChallengeDailyCompletionTimeType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeDailySlot, ChallengeDailyCompletionTimeType), Z_Construct_UEnum_Starbreeze_ESBZChallengeDailyCompletionTimeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::NewProp_ChallengeDailyCompletionTimeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::NewProp_ChallengeDailyCompletionTimeType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::NewProp_ChallengeDailyCompletionTimeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::NewProp_ChallengeDailyCompletionTimeType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZChallengeDailySlot",
		sizeof(FSBZChallengeDailySlot),
		alignof(FSBZChallengeDailySlot),
		Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeDailySlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZChallengeDailySlot"), sizeof(FSBZChallengeDailySlot), Get_Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeDailySlot_Hash() { return 2367021190U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
