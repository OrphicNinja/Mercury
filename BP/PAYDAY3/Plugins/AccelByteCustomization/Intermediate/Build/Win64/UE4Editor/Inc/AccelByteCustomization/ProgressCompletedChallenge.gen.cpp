// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ProgressCompletedChallenge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressCompletedChallenge() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FProgressCompletedChallenge();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References
class UScriptStruct* FProgressCompletedChallenge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FProgressCompletedChallenge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressCompletedChallenge, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ProgressCompletedChallenge"), sizeof(FProgressCompletedChallenge), Get_Z_Construct_UScriptStruct_FProgressCompletedChallenge_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FProgressCompletedChallenge>()
{
	return FProgressCompletedChallenge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProgressCompletedChallenge(FProgressCompletedChallenge::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("ProgressCompletedChallenge"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFProgressCompletedChallenge
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFProgressCompletedChallenge()
	{
		UScriptStruct::DeferCppStructOps<FProgressCompletedChallenge>(FName(TEXT("ProgressCompletedChallenge")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFProgressCompletedChallenge;
	struct Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChallengeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCompleted_MetaData[];
#endif
		static void NewProp_IsCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProgressCompletedChallenge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressCompletedChallenge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_ChallengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProgressCompletedChallenge" },
		{ "ModuleRelativePath", "Public/ProgressCompletedChallenge.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_ChallengeId = { "ChallengeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProgressCompletedChallenge, ChallengeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_ChallengeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_ChallengeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_IsCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProgressCompletedChallenge" },
		{ "ModuleRelativePath", "Public/ProgressCompletedChallenge.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_IsCompleted_SetBit(void* Obj)
	{
		((FProgressCompletedChallenge*)Obj)->IsCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_IsCompleted = { "IsCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProgressCompletedChallenge), &Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_IsCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_IsCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_IsCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_ChallengeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_IsCompleted,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"ProgressCompletedChallenge",
		sizeof(FProgressCompletedChallenge),
		alignof(FProgressCompletedChallenge),
		Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProgressCompletedChallenge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProgressCompletedChallenge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProgressCompletedChallenge"), sizeof(FProgressCompletedChallenge), Get_Z_Construct_UScriptStruct_FProgressCompletedChallenge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProgressCompletedChallenge_Hash() { return 2187791601U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
