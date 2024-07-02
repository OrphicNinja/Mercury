// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGamepadBindingsPreset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGamepadBindingsPreset() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGamepadBinding();
// End Cross Module References
class UScriptStruct* FSBZGamepadBindingsPreset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGamepadBindingsPreset"), sizeof(FSBZGamepadBindingsPreset), Get_Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGamepadBindingsPreset>()
{
	return FSBZGamepadBindingsPreset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGamepadBindingsPreset(FSBZGamepadBindingsPreset::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGamepadBindingsPreset"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGamepadBindingsPreset
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGamepadBindingsPreset()
	{
		UScriptStruct::DeferCppStructOps<FSBZGamepadBindingsPreset>(FName(TEXT("SBZGamepadBindingsPreset")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGamepadBindingsPreset;
	struct Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameLocalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NameLocalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGamepadBindingsPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGamepadBindingsPreset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_NameLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGamepadBindingsPreset" },
		{ "ModuleRelativePath", "Public/SBZGamepadBindingsPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_NameLocalized = { "NameLocalized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGamepadBindingsPreset, NameLocalized), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_NameLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_NameLocalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGamepadBindingsPreset" },
		{ "ModuleRelativePath", "Public/SBZGamepadBindingsPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGamepadBindingsPreset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGamepadBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_Bindings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGamepadBindingsPreset" },
		{ "ModuleRelativePath", "Public/SBZGamepadBindingsPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGamepadBindingsPreset, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_Bindings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_NameLocalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_Bindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::NewProp_Bindings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGamepadBindingsPreset",
		sizeof(FSBZGamepadBindingsPreset),
		alignof(FSBZGamepadBindingsPreset),
		Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGamepadBindingsPreset"), sizeof(FSBZGamepadBindingsPreset), Get_Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset_Hash() { return 3906755069U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
