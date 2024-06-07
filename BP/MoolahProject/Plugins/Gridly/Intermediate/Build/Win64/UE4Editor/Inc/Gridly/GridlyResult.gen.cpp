// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gridly/Public/GridlyResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridlyResult() {}
// Cross Module References
	GRIDLY_API UScriptStruct* Z_Construct_UScriptStruct_FGridlyResult();
	UPackage* Z_Construct_UPackage__Script_Gridly();
// End Cross Module References
class UScriptStruct* FGridlyResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GRIDLY_API uint32 Get_Z_Construct_UScriptStruct_FGridlyResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridlyResult, Z_Construct_UPackage__Script_Gridly(), TEXT("GridlyResult"), sizeof(FGridlyResult), Get_Z_Construct_UScriptStruct_FGridlyResult_Hash());
	}
	return Singleton;
}
template<> GRIDLY_API UScriptStruct* StaticStruct<FGridlyResult>()
{
	return FGridlyResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGridlyResult(FGridlyResult::StaticStruct, TEXT("/Script/Gridly"), TEXT("GridlyResult"), false, nullptr, nullptr);
static struct FScriptStruct_Gridly_StaticRegisterNativesFGridlyResult
{
	FScriptStruct_Gridly_StaticRegisterNativesFGridlyResult()
	{
		UScriptStruct::DeferCppStructOps<FGridlyResult>(FName(TEXT("GridlyResult")));
	}
} ScriptStruct_Gridly_StaticRegisterNativesFGridlyResult;
	struct Z_Construct_UScriptStruct_FGridlyResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridlyResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GridlyResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridlyResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridlyResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridlyResult_Statics::NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GridlyResult" },
		{ "ModuleRelativePath", "Public/GridlyResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGridlyResult_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridlyResult, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridlyResult_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyResult_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridlyResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridlyResult_Statics::NewProp_Message,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridlyResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Gridly,
		nullptr,
		&NewStructOps,
		"GridlyResult",
		sizeof(FGridlyResult),
		alignof(FGridlyResult),
		Z_Construct_UScriptStruct_FGridlyResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridlyResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridlyResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGridlyResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Gridly();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GridlyResult"), sizeof(FGridlyResult), Get_Z_Construct_UScriptStruct_FGridlyResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGridlyResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGridlyResult_Hash() { return 1010019391U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
