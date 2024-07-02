// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSentryGunAngleBouncer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSentryGunAngleBouncer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZSentryGunAngleBouncer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSentryGunAngleBouncer"), sizeof(FSBZSentryGunAngleBouncer), Get_Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSentryGunAngleBouncer>()
{
	return FSBZSentryGunAngleBouncer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSentryGunAngleBouncer(FSBZSentryGunAngleBouncer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSentryGunAngleBouncer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSentryGunAngleBouncer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSentryGunAngleBouncer()
	{
		UScriptStruct::DeferCppStructOps<FSBZSentryGunAngleBouncer>(FName(TEXT("SBZSentryGunAngleBouncer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSentryGunAngleBouncer;
	struct Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAngleBouncer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSentryGunAngleBouncer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::NewProp_BounceFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGunAngleBouncer" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAngleBouncer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::NewProp_BounceFrequency = { "BounceFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSentryGunAngleBouncer, BounceFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::NewProp_BounceFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::NewProp_BounceFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::NewProp_BounceStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGunAngleBouncer" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAngleBouncer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::NewProp_BounceStrength = { "BounceStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSentryGunAngleBouncer, BounceStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::NewProp_BounceStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::NewProp_BounceStrength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::NewProp_BounceFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::NewProp_BounceStrength,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSentryGunAngleBouncer",
		sizeof(FSBZSentryGunAngleBouncer),
		alignof(FSBZSentryGunAngleBouncer),
		Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSentryGunAngleBouncer"), sizeof(FSBZSentryGunAngleBouncer), Get_Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSentryGunAngleBouncer_Hash() { return 2742552846U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
