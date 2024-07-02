// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZButtonControlReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZButtonControlReference() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlReference();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBaseControlReference();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZButtonControlReference>() == std::is_polymorphic<FSBZBaseControlReference>(), "USTRUCT FSBZButtonControlReference cannot be polymorphic unless super FSBZBaseControlReference is polymorphic");

class UScriptStruct* FSBZButtonControlReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZButtonControlReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZButtonControlReference, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZButtonControlReference"), sizeof(FSBZButtonControlReference), Get_Z_Construct_UScriptStruct_FSBZButtonControlReference_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZButtonControlReference>()
{
	return FSBZButtonControlReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZButtonControlReference(FSBZButtonControlReference::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZButtonControlReference"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZButtonControlReference
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZButtonControlReference()
	{
		UScriptStruct::DeferCppStructOps<FSBZButtonControlReference>(FName(TEXT("SBZButtonControlReference")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZButtonControlReference;
	struct Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ButtonAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZButtonControlReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZButtonControlReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::NewProp_ButtonAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZButtonControlReference" },
		{ "ModuleRelativePath", "Public/SBZButtonControlReference.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::NewProp_ButtonAction = { "ButtonAction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZButtonControlReference, ButtonAction), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::NewProp_ButtonAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::NewProp_ButtonAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::NewProp_ButtonAction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZBaseControlReference,
		&NewStructOps,
		"SBZButtonControlReference",
		sizeof(FSBZButtonControlReference),
		alignof(FSBZButtonControlReference),
		Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZButtonControlReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZButtonControlReference"), sizeof(FSBZButtonControlReference), Get_Z_Construct_UScriptStruct_FSBZButtonControlReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZButtonControlReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZButtonControlReference_Hash() { return 2855830541U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
