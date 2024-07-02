// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimatedInteractionTagPerDuration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimatedInteractionTagPerDuration() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
class UScriptStruct* FSBZAnimatedInteractionTagPerDuration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimatedInteractionTagPerDuration"), sizeof(FSBZAnimatedInteractionTagPerDuration), Get_Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimatedInteractionTagPerDuration>()
{
	return FSBZAnimatedInteractionTagPerDuration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration(FSBZAnimatedInteractionTagPerDuration::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimatedInteractionTagPerDuration"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimatedInteractionTagPerDuration
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimatedInteractionTagPerDuration()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimatedInteractionTagPerDuration>(FName(TEXT("SBZAnimatedInteractionTagPerDuration")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimatedInteractionTagPerDuration;
	struct Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DurationInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimatedInteractionTagPerDuration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimatedInteractionTagPerDuration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::NewProp_AnimationTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimatedInteractionTagPerDuration" },
		{ "ModuleRelativePath", "Public/SBZAnimatedInteractionTagPerDuration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::NewProp_AnimationTag = { "AnimationTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimatedInteractionTagPerDuration, AnimationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::NewProp_AnimationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::NewProp_AnimationTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::NewProp_DurationInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimatedInteractionTagPerDuration" },
		{ "ModuleRelativePath", "Public/SBZAnimatedInteractionTagPerDuration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::NewProp_DurationInterval = { "DurationInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimatedInteractionTagPerDuration, DurationInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::NewProp_DurationInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::NewProp_DurationInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::NewProp_AnimationTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::NewProp_DurationInterval,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAnimatedInteractionTagPerDuration",
		sizeof(FSBZAnimatedInteractionTagPerDuration),
		alignof(FSBZAnimatedInteractionTagPerDuration),
		Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimatedInteractionTagPerDuration"), sizeof(FSBZAnimatedInteractionTagPerDuration), Get_Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration_Hash() { return 1250828452U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
