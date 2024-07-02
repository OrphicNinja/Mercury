// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDailyChallenge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDailyChallenge() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDailyChallenge();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZDailyChallenge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDailyChallenge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDailyChallenge, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDailyChallenge"), sizeof(FSBZDailyChallenge), Get_Z_Construct_UScriptStruct_FSBZDailyChallenge_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDailyChallenge>()
{
	return FSBZDailyChallenge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDailyChallenge(FSBZDailyChallenge::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDailyChallenge"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDailyChallenge
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDailyChallenge()
	{
		UScriptStruct::DeferCppStructOps<FSBZDailyChallenge>(FName(TEXT("SBZDailyChallenge")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDailyChallenge;
	struct Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChallengeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeCompletion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChallengeCompletion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeCompleted_MetaData[];
#endif
		static void NewProp_ChallengeCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ChallengeCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDailyChallenge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDailyChallenge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDailyChallenge" },
		{ "ModuleRelativePath", "Public/SBZDailyChallenge.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeId = { "ChallengeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDailyChallenge, ChallengeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeCompletion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDailyChallenge" },
		{ "ModuleRelativePath", "Public/SBZDailyChallenge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeCompletion = { "ChallengeCompletion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDailyChallenge, ChallengeCompletion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeCompletion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDailyChallenge" },
		{ "ModuleRelativePath", "Public/SBZDailyChallenge.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeCompleted_SetBit(void* Obj)
	{
		((FSBZDailyChallenge*)Obj)->ChallengeCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeCompleted = { "ChallengeCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZDailyChallenge), &Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeCompletion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::NewProp_ChallengeCompleted,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDailyChallenge",
		sizeof(FSBZDailyChallenge),
		alignof(FSBZDailyChallenge),
		Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDailyChallenge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDailyChallenge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDailyChallenge"), sizeof(FSBZDailyChallenge), Get_Z_Construct_UScriptStruct_FSBZDailyChallenge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDailyChallenge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDailyChallenge_Hash() { return 604982145U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
