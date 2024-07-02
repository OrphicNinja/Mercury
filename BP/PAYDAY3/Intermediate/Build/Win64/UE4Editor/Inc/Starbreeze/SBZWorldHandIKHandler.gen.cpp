// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWorldHandIKHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWorldHandIKHandler() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWorldHandIKHandler();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZWorldHandIKHandler::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWorldHandIKHandler_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWorldHandIKHandler, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWorldHandIKHandler"), sizeof(FSBZWorldHandIKHandler), Get_Z_Construct_UScriptStruct_FSBZWorldHandIKHandler_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWorldHandIKHandler>()
{
	return FSBZWorldHandIKHandler::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWorldHandIKHandler(FSBZWorldHandIKHandler::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWorldHandIKHandler"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWorldHandIKHandler
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWorldHandIKHandler()
	{
		UScriptStruct::DeferCppStructOps<FSBZWorldHandIKHandler>(FName(TEXT("SBZWorldHandIKHandler")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWorldHandIKHandler;
	struct Z_Construct_UScriptStruct_FSBZWorldHandIKHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWorldHandIKHandler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldHandIKHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWorldHandIKHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWorldHandIKHandler>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWorldHandIKHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWorldHandIKHandler",
		sizeof(FSBZWorldHandIKHandler),
		alignof(FSBZWorldHandIKHandler),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWorldHandIKHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWorldHandIKHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWorldHandIKHandler()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWorldHandIKHandler_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWorldHandIKHandler"), sizeof(FSBZWorldHandIKHandler), Get_Z_Construct_UScriptStruct_FSBZWorldHandIKHandler_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWorldHandIKHandler_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWorldHandIKHandler_Hash() { return 2436217894U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
