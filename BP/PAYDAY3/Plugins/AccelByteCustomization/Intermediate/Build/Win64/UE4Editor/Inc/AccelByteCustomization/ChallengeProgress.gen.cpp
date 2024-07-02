// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeProgress.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeProgress() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgress();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressPrerequisite();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressObjective();
// End Cross Module References
class UScriptStruct* FChallengeProgress::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FChallengeProgress_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeProgress, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeProgress"), sizeof(FChallengeProgress), Get_Z_Construct_UScriptStruct_FChallengeProgress_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeProgress>()
{
	return FChallengeProgress::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeProgress(FChallengeProgress::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("ChallengeProgress"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeProgress
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeProgress()
	{
		UScriptStruct::DeferCppStructOps<FChallengeProgress>(FName(TEXT("ChallengeProgress")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeProgress;
	struct Z_Construct_UScriptStruct_FChallengeProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prerequisite_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Prerequisite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objective_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgress_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeProgress.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeProgress>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Prerequisite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgress" },
		{ "ModuleRelativePath", "Public/ChallengeProgress.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Prerequisite = { "Prerequisite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgress, Prerequisite), Z_Construct_UScriptStruct_FChallengeProgressPrerequisite, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Prerequisite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Prerequisite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Objective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgress" },
		{ "ModuleRelativePath", "Public/ChallengeProgress.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgress, Objective), Z_Construct_UScriptStruct_FChallengeProgressObjective, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Objective_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Objective_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Prerequisite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Objective,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeProgress_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"ChallengeProgress",
		sizeof(FChallengeProgress),
		alignof(FChallengeProgress),
		Z_Construct_UScriptStruct_FChallengeProgress_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgress_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgress_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgress_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgress()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeProgress_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeProgress"), sizeof(FChallengeProgress), Get_Z_Construct_UScriptStruct_FChallengeProgress_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeProgress_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeProgress_Hash() { return 2661343900U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
