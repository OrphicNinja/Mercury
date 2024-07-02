// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSurfaceImpactLod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSurfaceImpactLod() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSurfaceImpactLod();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZSurfaceImpactLod::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSurfaceImpactLod, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSurfaceImpactLod"), sizeof(FSBZSurfaceImpactLod), Get_Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSurfaceImpactLod>()
{
	return FSBZSurfaceImpactLod::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSurfaceImpactLod(FSBZSurfaceImpactLod::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSurfaceImpactLod"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSurfaceImpactLod
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSurfaceImpactLod()
	{
		UScriptStruct::DeferCppStructOps<FSBZSurfaceImpactLod>(FName(TEXT("SBZSurfaceImpactLod")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSurfaceImpactLod;
	struct Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FarRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSurfaceImpactLod.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSurfaceImpactLod>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::NewProp_Distance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceImpactLod" },
		{ "ModuleRelativePath", "Public/SBZSurfaceImpactLod.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceImpactLod, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::NewProp_FarRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceImpactLod" },
		{ "ModuleRelativePath", "Public/SBZSurfaceImpactLod.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::NewProp_FarRange = { "FarRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceImpactLod, FarRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::NewProp_FarRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::NewProp_FarRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::NewProp_FarRange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSurfaceImpactLod",
		sizeof(FSBZSurfaceImpactLod),
		alignof(FSBZSurfaceImpactLod),
		Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSurfaceImpactLod()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSurfaceImpactLod"), sizeof(FSBZSurfaceImpactLod), Get_Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSurfaceImpactLod_Hash() { return 3873356805U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
