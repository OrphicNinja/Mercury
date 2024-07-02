// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRemoteEventWithActorsArrayParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRemoteEventWithActorsArrayParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZRemoteEventWithActorsArrayParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRemoteEventWithActorsArrayParams"), sizeof(FSBZRemoteEventWithActorsArrayParams), Get_Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRemoteEventWithActorsArrayParams>()
{
	return FSBZRemoteEventWithActorsArrayParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams(FSBZRemoteEventWithActorsArrayParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRemoteEventWithActorsArrayParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRemoteEventWithActorsArrayParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRemoteEventWithActorsArrayParams()
	{
		UScriptStruct::DeferCppStructOps<FSBZRemoteEventWithActorsArrayParams>(FName(TEXT("SBZRemoteEventWithActorsArrayParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRemoteEventWithActorsArrayParams;
	struct Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRemoteEventWithActorsArrayParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRemoteEventWithActorsArrayParams>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::NewProp_Actor_Inner = { "Actor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::NewProp_Actor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRemoteEventWithActorsArrayParams" },
		{ "ModuleRelativePath", "Public/SBZRemoteEventWithActorsArrayParams.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRemoteEventWithActorsArrayParams, Actor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::NewProp_Actor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::NewProp_Actor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRemoteEventWithActorsArrayParams",
		sizeof(FSBZRemoteEventWithActorsArrayParams),
		alignof(FSBZRemoteEventWithActorsArrayParams),
		Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRemoteEventWithActorsArrayParams"), sizeof(FSBZRemoteEventWithActorsArrayParams), Get_Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRemoteEventWithActorsArrayParams_Hash() { return 181778170U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
