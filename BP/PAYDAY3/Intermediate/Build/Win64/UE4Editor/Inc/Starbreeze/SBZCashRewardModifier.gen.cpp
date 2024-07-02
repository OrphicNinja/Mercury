// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCashRewardModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCashRewardModifier() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardModifier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZCashRewardModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCashRewardModifier, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCashRewardModifier"), sizeof(FSBZCashRewardModifier), Get_Z_Construct_UScriptStruct_FSBZCashRewardModifier_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCashRewardModifier>()
{
	return FSBZCashRewardModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCashRewardModifier(FSBZCashRewardModifier::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCashRewardModifier"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardModifier
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardModifier()
	{
		UScriptStruct::DeferCppStructOps<FSBZCashRewardModifier>(FName(TEXT("SBZCashRewardModifier")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardModifier;
	struct Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxReward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCashRewardModifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCashRewardModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::NewProp_BaseReward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardModifier" },
		{ "ModuleRelativePath", "Public/SBZCashRewardModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::NewProp_BaseReward = { "BaseReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardModifier, BaseReward), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::NewProp_BaseReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::NewProp_BaseReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::NewProp_MaxReward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardModifier" },
		{ "ModuleRelativePath", "Public/SBZCashRewardModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::NewProp_MaxReward = { "MaxReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardModifier, MaxReward), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::NewProp_MaxReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::NewProp_MaxReward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::NewProp_BaseReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::NewProp_MaxReward,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCashRewardModifier",
		sizeof(FSBZCashRewardModifier),
		alignof(FSBZCashRewardModifier),
		Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCashRewardModifier"), sizeof(FSBZCashRewardModifier), Get_Z_Construct_UScriptStruct_FSBZCashRewardModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCashRewardModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardModifier_Hash() { return 3178406014U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
