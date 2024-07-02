// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PlayerWaitingForReady.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerWaitingForReady() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerWaitingForReady();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
class UScriptStruct* FPlayerWaitingForReady::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPlayerWaitingForReady_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerWaitingForReady, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PlayerWaitingForReady"), sizeof(FPlayerWaitingForReady), Get_Z_Construct_UScriptStruct_FPlayerWaitingForReady_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPlayerWaitingForReady>()
{
	return FPlayerWaitingForReady::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerWaitingForReady(FPlayerWaitingForReady::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PlayerWaitingForReady"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPlayerWaitingForReady
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPlayerWaitingForReady()
	{
		UScriptStruct::DeferCppStructOps<FPlayerWaitingForReady>(FName(TEXT("PlayerWaitingForReady")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPlayerWaitingForReady;
	struct Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoReadyTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoReadyTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerWaitingForReady.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerWaitingForReady>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::NewProp_AutoReadyTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerWaitingForReady" },
		{ "ModuleRelativePath", "Public/PlayerWaitingForReady.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::NewProp_AutoReadyTimer = { "AutoReadyTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerWaitingForReady, AutoReadyTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::NewProp_AutoReadyTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::NewProp_AutoReadyTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::NewProp_PlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerWaitingForReady" },
		{ "ModuleRelativePath", "Public/PlayerWaitingForReady.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerWaitingForReady, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::NewProp_AutoReadyTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::NewProp_PlayerId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PlayerWaitingForReady",
		sizeof(FPlayerWaitingForReady),
		alignof(FPlayerWaitingForReady),
		Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerWaitingForReady()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerWaitingForReady_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerWaitingForReady"), sizeof(FPlayerWaitingForReady), Get_Z_Construct_UScriptStruct_FPlayerWaitingForReady_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerWaitingForReady_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerWaitingForReady_Hash() { return 1797158502U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
