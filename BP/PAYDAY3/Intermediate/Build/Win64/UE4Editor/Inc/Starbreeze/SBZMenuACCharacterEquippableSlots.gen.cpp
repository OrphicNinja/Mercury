// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuACCharacterEquippableSlots.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuACCharacterEquippableSlots() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMenuACSlots();
// End Cross Module References
class UScriptStruct* FSBZMenuACCharacterEquippableSlots::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMenuACCharacterEquippableSlots"), sizeof(FSBZMenuACCharacterEquippableSlots), Get_Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMenuACCharacterEquippableSlots>()
{
	return FSBZMenuACCharacterEquippableSlots::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMenuACCharacterEquippableSlots(FSBZMenuACCharacterEquippableSlots::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMenuACCharacterEquippableSlots"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMenuACCharacterEquippableSlots
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMenuACCharacterEquippableSlots()
	{
		UScriptStruct::DeferCppStructOps<FSBZMenuACCharacterEquippableSlots>(FName(TEXT("SBZMenuACCharacterEquippableSlots")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMenuACCharacterEquippableSlots;
	struct Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippableSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuACCharacterEquippableSlots.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMenuACCharacterEquippableSlots>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::NewProp_CharacterSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuACCharacterEquippableSlots" },
		{ "ModuleRelativePath", "Public/SBZMenuACCharacterEquippableSlots.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::NewProp_CharacterSlots = { "CharacterSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMenuACCharacterEquippableSlots, CharacterSlots), Z_Construct_UScriptStruct_FSBZMenuACSlots, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::NewProp_CharacterSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::NewProp_CharacterSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::NewProp_EquippableSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuACCharacterEquippableSlots" },
		{ "ModuleRelativePath", "Public/SBZMenuACCharacterEquippableSlots.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::NewProp_EquippableSlots = { "EquippableSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMenuACCharacterEquippableSlots, EquippableSlots), Z_Construct_UScriptStruct_FSBZMenuACSlots, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::NewProp_EquippableSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::NewProp_EquippableSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::NewProp_CharacterSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::NewProp_EquippableSlots,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMenuACCharacterEquippableSlots",
		sizeof(FSBZMenuACCharacterEquippableSlots),
		alignof(FSBZMenuACCharacterEquippableSlots),
		Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMenuACCharacterEquippableSlots"), sizeof(FSBZMenuACCharacterEquippableSlots), Get_Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMenuACCharacterEquippableSlots_Hash() { return 1076062069U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
