// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayEffectContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayEffectContext() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayEffectContext();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FSBZGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");

class UScriptStruct* FSBZGameplayEffectContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGameplayEffectContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGameplayEffectContext, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGameplayEffectContext"), sizeof(FSBZGameplayEffectContext), Get_Z_Construct_UScriptStruct_FSBZGameplayEffectContext_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGameplayEffectContext>()
{
	return FSBZGameplayEffectContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGameplayEffectContext(FSBZGameplayEffectContext::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGameplayEffectContext"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameplayEffectContext
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameplayEffectContext()
	{
		UScriptStruct::DeferCppStructOps<FSBZGameplayEffectContext>(FName(TEXT("SBZGameplayEffectContext")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameplayEffectContext;
	struct Z_Construct_UScriptStruct_FSBZGameplayEffectContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameplayEffectContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayEffectContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGameplayEffectContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGameplayEffectContext>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGameplayEffectContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FGameplayEffectContext,
		&NewStructOps,
		"SBZGameplayEffectContext",
		sizeof(FSBZGameplayEffectContext),
		alignof(FSBZGameplayEffectContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameplayEffectContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayEffectContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayEffectContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGameplayEffectContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGameplayEffectContext"), sizeof(FSBZGameplayEffectContext), Get_Z_Construct_UScriptStruct_FSBZGameplayEffectContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGameplayEffectContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGameplayEffectContext_Hash() { return 182850848U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
