// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentStateBase() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentStateBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentStateVariables();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAgentStateBase>() == std::is_polymorphic<FSBZAgentStateVariables>(), "USTRUCT FSBZAgentStateBase cannot be polymorphic unless super FSBZAgentStateVariables is polymorphic");

class UScriptStruct* FSBZAgentStateBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgentStateBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgentStateBase, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgentStateBase"), sizeof(FSBZAgentStateBase), Get_Z_Construct_UScriptStruct_FSBZAgentStateBase_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgentStateBase>()
{
	return FSBZAgentStateBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgentStateBase(FSBZAgentStateBase::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgentStateBase"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentStateBase
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentStateBase()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgentStateBase>(FName(TEXT("SBZAgentStateBase")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentStateBase;
	struct Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentStateBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgentStateBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateBase" },
		{ "ModuleRelativePath", "Public/SBZAgentStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateBase, Id), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZAgentStateVariables,
		&NewStructOps,
		"SBZAgentStateBase",
		sizeof(FSBZAgentStateBase),
		alignof(FSBZAgentStateBase),
		Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentStateBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgentStateBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgentStateBase"), sizeof(FSBZAgentStateBase), Get_Z_Construct_UScriptStruct_FSBZAgentStateBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgentStateBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgentStateBase_Hash() { return 2659394914U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
