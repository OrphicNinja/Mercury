// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZQuat_NetQuantizeNormal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZQuat_NetQuantizeNormal() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZQuat_NetQuantizeNormal>() == std::is_polymorphic<FQuat>(), "USTRUCT FSBZQuat_NetQuantizeNormal cannot be polymorphic unless super FQuat is polymorphic");

class UScriptStruct* FSBZQuat_NetQuantizeNormal::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZQuat_NetQuantizeNormal"), sizeof(FSBZQuat_NetQuantizeNormal), Get_Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZQuat_NetQuantizeNormal>()
{
	return FSBZQuat_NetQuantizeNormal::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZQuat_NetQuantizeNormal(FSBZQuat_NetQuantizeNormal::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZQuat_NetQuantizeNormal"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZQuat_NetQuantizeNormal
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZQuat_NetQuantizeNormal()
	{
		UScriptStruct::DeferCppStructOps<FSBZQuat_NetQuantizeNormal>(FName(TEXT("SBZQuat_NetQuantizeNormal")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZQuat_NetQuantizeNormal;
	struct Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZQuat_NetQuantizeNormal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZQuat_NetQuantizeNormal>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FQuat,
		&NewStructOps,
		"SBZQuat_NetQuantizeNormal",
		sizeof(FSBZQuat_NetQuantizeNormal),
		alignof(FSBZQuat_NetQuantizeNormal),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZQuat_NetQuantizeNormal"), sizeof(FSBZQuat_NetQuantizeNormal), Get_Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal_Hash() { return 541209256U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
