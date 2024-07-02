// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActorMultiHitResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActorMultiHitResult() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActorMultiHitResult();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZActorMultiHitResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZActorMultiHitResult, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZActorMultiHitResult"), sizeof(FSBZActorMultiHitResult), Get_Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZActorMultiHitResult>()
{
	return FSBZActorMultiHitResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZActorMultiHitResult(FSBZActorMultiHitResult::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZActorMultiHitResult"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActorMultiHitResult
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActorMultiHitResult()
	{
		UScriptStruct::DeferCppStructOps<FSBZActorMultiHitResult>(FName(TEXT("SBZActorMultiHitResult")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZActorMultiHitResult;
	struct Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ActorPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZActorMultiHitResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZActorMultiHitResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::NewProp_ActorPtr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorMultiHitResult" },
		{ "ModuleRelativePath", "Public/SBZActorMultiHitResult.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::NewProp_ActorPtr = { "ActorPtr", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActorMultiHitResult, ActorPtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::NewProp_ActorPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::NewProp_ActorPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::NewProp_ActorPtr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZActorMultiHitResult",
		sizeof(FSBZActorMultiHitResult),
		alignof(FSBZActorMultiHitResult),
		Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZActorMultiHitResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZActorMultiHitResult"), sizeof(FSBZActorMultiHitResult), Get_Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZActorMultiHitResult_Hash() { return 3356702227U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
