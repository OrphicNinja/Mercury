// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuACSlots.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuACSlots() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMenuACSlots();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZMenuACSlots::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMenuACSlots_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMenuACSlots, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMenuACSlots"), sizeof(FSBZMenuACSlots), Get_Z_Construct_UScriptStruct_FSBZMenuACSlots_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMenuACSlots>()
{
	return FSBZMenuACSlots::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMenuACSlots(FSBZMenuACSlots::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMenuACSlots"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMenuACSlots
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMenuACSlots()
	{
		UScriptStruct::DeferCppStructOps<FSBZMenuACSlots>(FName(TEXT("SBZMenuACSlots")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMenuACSlots;
	struct Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Animations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Animations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuACSlots.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMenuACSlots>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_bOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuACSlots" },
		{ "ModuleRelativePath", "Public/SBZMenuACSlots.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FSBZMenuACSlots*)Obj)->bOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZMenuACSlots), &Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_bOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_bOverride_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_Animations_Inner = { "Animations", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_Animations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuACSlots" },
		{ "ModuleRelativePath", "Public/SBZMenuACSlots.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMenuACSlots, Animations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_Animations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_Animations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_bOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_Animations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::NewProp_Animations,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMenuACSlots",
		sizeof(FSBZMenuACSlots),
		alignof(FSBZMenuACSlots),
		Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMenuACSlots()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMenuACSlots_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMenuACSlots"), sizeof(FSBZMenuACSlots), Get_Z_Construct_UScriptStruct_FSBZMenuACSlots_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMenuACSlots_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMenuACSlots_Hash() { return 3779589659U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
