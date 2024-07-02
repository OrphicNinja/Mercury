// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAsyncLoadingProgress.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAsyncLoadingProgress() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAsyncLoadingProgress>() == std::is_polymorphic<FSBZGameEventStructBase>(), "USTRUCT FSBZAsyncLoadingProgress cannot be polymorphic unless super FSBZGameEventStructBase is polymorphic");

class UScriptStruct* FSBZAsyncLoadingProgress::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAsyncLoadingProgress"), sizeof(FSBZAsyncLoadingProgress), Get_Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAsyncLoadingProgress>()
{
	return FSBZAsyncLoadingProgress::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAsyncLoadingProgress(FSBZAsyncLoadingProgress::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAsyncLoadingProgress"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAsyncLoadingProgress
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAsyncLoadingProgress()
	{
		UScriptStruct::DeferCppStructOps<FSBZAsyncLoadingProgress>(FName(TEXT("SBZAsyncLoadingProgress")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAsyncLoadingProgress;
	struct Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAsyncLoadingProgress.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAsyncLoadingProgress>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::NewProp_Progress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAsyncLoadingProgress" },
		{ "ModuleRelativePath", "Public/SBZAsyncLoadingProgress.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAsyncLoadingProgress, Progress), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::NewProp_Progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::NewProp_Progress,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZGameEventStructBase,
		&NewStructOps,
		"SBZAsyncLoadingProgress",
		sizeof(FSBZAsyncLoadingProgress),
		alignof(FSBZAsyncLoadingProgress),
		Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAsyncLoadingProgress"), sizeof(FSBZAsyncLoadingProgress), Get_Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress_Hash() { return 1143722959U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
