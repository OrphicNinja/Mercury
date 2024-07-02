// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTagReactionActivation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTagReactionActivation() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTagReactionActivation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZTagReactionActivation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTagReactionActivation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTagReactionActivation, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTagReactionActivation"), sizeof(FSBZTagReactionActivation), Get_Z_Construct_UScriptStruct_FSBZTagReactionActivation_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTagReactionActivation>()
{
	return FSBZTagReactionActivation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTagReactionActivation(FSBZTagReactionActivation::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTagReactionActivation"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTagReactionActivation
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTagReactionActivation()
	{
		UScriptStruct::DeferCppStructOps<FSBZTagReactionActivation>(FName(TEXT("SBZTagReactionActivation")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTagReactionActivation;
	struct Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MontageArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTagReactionActivation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTagReactionActivation>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::NewProp_MontageArray_Inner = { "MontageArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::NewProp_MontageArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReactionActivation" },
		{ "ModuleRelativePath", "Public/SBZTagReactionActivation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::NewProp_MontageArray = { "MontageArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReactionActivation, MontageArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::NewProp_MontageArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::NewProp_MontageArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::NewProp_RandomOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReactionActivation" },
		{ "ModuleRelativePath", "Public/SBZTagReactionActivation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::NewProp_RandomOffset = { "RandomOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReactionActivation, RandomOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::NewProp_RandomOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::NewProp_RandomOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::NewProp_MontageArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::NewProp_MontageArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::NewProp_RandomOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTagReactionActivation",
		sizeof(FSBZTagReactionActivation),
		alignof(FSBZTagReactionActivation),
		Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTagReactionActivation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTagReactionActivation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTagReactionActivation"), sizeof(FSBZTagReactionActivation), Get_Z_Construct_UScriptStruct_FSBZTagReactionActivation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTagReactionActivation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTagReactionActivation_Hash() { return 2470448002U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
