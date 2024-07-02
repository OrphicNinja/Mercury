// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/AsyncLoadLevelParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncLoadLevelParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncLoadLevelParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FAsyncLoadLevelParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FAsyncLoadLevelParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAsyncLoadLevelParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("AsyncLoadLevelParams"), sizeof(FAsyncLoadLevelParams), Get_Z_Construct_UScriptStruct_FAsyncLoadLevelParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FAsyncLoadLevelParams>()
{
	return FAsyncLoadLevelParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAsyncLoadLevelParams(FAsyncLoadLevelParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("AsyncLoadLevelParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFAsyncLoadLevelParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFAsyncLoadLevelParams()
	{
		UScriptStruct::DeferCppStructOps<FAsyncLoadLevelParams>(FName(TEXT("AsyncLoadLevelParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFAsyncLoadLevelParams;
	struct Z_Construct_UScriptStruct_FAsyncLoadLevelParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAsyncLoadLevelParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AsyncLoadLevelParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAsyncLoadLevelParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAsyncLoadLevelParams>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAsyncLoadLevelParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"AsyncLoadLevelParams",
		sizeof(FAsyncLoadLevelParams),
		alignof(FAsyncLoadLevelParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAsyncLoadLevelParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncLoadLevelParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAsyncLoadLevelParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAsyncLoadLevelParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AsyncLoadLevelParams"), sizeof(FAsyncLoadLevelParams), Get_Z_Construct_UScriptStruct_FAsyncLoadLevelParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAsyncLoadLevelParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAsyncLoadLevelParams_Hash() { return 3051222755U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
