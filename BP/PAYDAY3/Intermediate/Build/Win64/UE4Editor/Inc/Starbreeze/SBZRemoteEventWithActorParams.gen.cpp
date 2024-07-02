// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRemoteEventWithActorParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRemoteEventWithActorParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZRemoteEventWithActorParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRemoteEventWithActorParams"), sizeof(FSBZRemoteEventWithActorParams), Get_Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRemoteEventWithActorParams>()
{
	return FSBZRemoteEventWithActorParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRemoteEventWithActorParams(FSBZRemoteEventWithActorParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRemoteEventWithActorParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRemoteEventWithActorParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRemoteEventWithActorParams()
	{
		UScriptStruct::DeferCppStructOps<FSBZRemoteEventWithActorParams>(FName(TEXT("SBZRemoteEventWithActorParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRemoteEventWithActorParams;
	struct Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRemoteEventWithActorParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRemoteEventWithActorParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::NewProp_Actor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRemoteEventWithActorParams" },
		{ "ModuleRelativePath", "Public/SBZRemoteEventWithActorParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRemoteEventWithActorParams, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::NewProp_Actor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRemoteEventWithActorParams",
		sizeof(FSBZRemoteEventWithActorParams),
		alignof(FSBZRemoteEventWithActorParams),
		Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRemoteEventWithActorParams"), sizeof(FSBZRemoteEventWithActorParams), Get_Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRemoteEventWithActorParams_Hash() { return 1499934536U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
