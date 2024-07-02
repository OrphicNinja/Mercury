// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDamageMultiplierDistance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDamageMultiplierDistance() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZDamageMultiplierDistance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDamageMultiplierDistance"), sizeof(FSBZDamageMultiplierDistance), Get_Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDamageMultiplierDistance>()
{
	return FSBZDamageMultiplierDistance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDamageMultiplierDistance(FSBZDamageMultiplierDistance::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDamageMultiplierDistance"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDamageMultiplierDistance
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDamageMultiplierDistance()
	{
		UScriptStruct::DeferCppStructOps<FSBZDamageMultiplierDistance>(FName(TEXT("SBZDamageMultiplierDistance")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDamageMultiplierDistance;
	struct Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDamageMultiplierDistance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDamageMultiplierDistance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::NewProp_Multiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageMultiplierDistance" },
		{ "ModuleRelativePath", "Public/SBZDamageMultiplierDistance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageMultiplierDistance, Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::NewProp_Distance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageMultiplierDistance" },
		{ "ModuleRelativePath", "Public/SBZDamageMultiplierDistance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDamageMultiplierDistance, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::NewProp_Distance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::NewProp_Multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::NewProp_Distance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDamageMultiplierDistance",
		sizeof(FSBZDamageMultiplierDistance),
		alignof(FSBZDamageMultiplierDistance),
		Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDamageMultiplierDistance"), sizeof(FSBZDamageMultiplierDistance), Get_Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance_Hash() { return 2079796888U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
