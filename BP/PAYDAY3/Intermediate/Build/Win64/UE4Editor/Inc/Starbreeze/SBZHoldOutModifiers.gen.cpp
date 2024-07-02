// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutModifiers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutModifiers() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutModifiers();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FSBZHoldOutModifiers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHoldOutModifiers, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHoldOutModifiers"), sizeof(FSBZHoldOutModifiers), Get_Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHoldOutModifiers>()
{
	return FSBZHoldOutModifiers::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHoldOutModifiers(FSBZHoldOutModifiers::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHoldOutModifiers"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutModifiers
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutModifiers()
	{
		UScriptStruct::DeferCppStructOps<FSBZHoldOutModifiers>(FName(TEXT("SBZHoldOutModifiers")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutModifiers;
	struct Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModifierCounts_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifierCounts_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierCounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ModifierCounts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutModifiers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHoldOutModifiers>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::NewProp_ModifierCounts_ValueProp = { "ModifierCounts", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::NewProp_ModifierCounts_Key_KeyProp = { "ModifierCounts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::NewProp_ModifierCounts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutModifiers" },
		{ "ModuleRelativePath", "Public/SBZHoldOutModifiers.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::NewProp_ModifierCounts = { "ModifierCounts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHoldOutModifiers, ModifierCounts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::NewProp_ModifierCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::NewProp_ModifierCounts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::NewProp_ModifierCounts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::NewProp_ModifierCounts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::NewProp_ModifierCounts,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHoldOutModifiers",
		sizeof(FSBZHoldOutModifiers),
		alignof(FSBZHoldOutModifiers),
		Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutModifiers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHoldOutModifiers"), sizeof(FSBZHoldOutModifiers), Get_Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutModifiers_Hash() { return 1980670371U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
