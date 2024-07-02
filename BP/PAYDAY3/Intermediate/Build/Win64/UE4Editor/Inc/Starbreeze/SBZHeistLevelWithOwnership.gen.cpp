// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHeistLevelWithOwnership.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHeistLevelWithOwnership() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FSBZHeistLevelWithOwnership::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHeistLevelWithOwnership"), sizeof(FSBZHeistLevelWithOwnership), Get_Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHeistLevelWithOwnership>()
{
	return FSBZHeistLevelWithOwnership::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHeistLevelWithOwnership(FSBZHeistLevelWithOwnership::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHeistLevelWithOwnership"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeistLevelWithOwnership
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeistLevelWithOwnership()
	{
		UScriptStruct::DeferCppStructOps<FSBZHeistLevelWithOwnership>(FName(TEXT("SBZHeistLevelWithOwnership")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeistLevelWithOwnership;
	struct Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOwned_MetaData[];
#endif
		static void NewProp_bIsOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOwned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHeistLevelWithOwnership.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHeistLevelWithOwnership>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::NewProp_LevelPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeistLevelWithOwnership" },
		{ "ModuleRelativePath", "Public/SBZHeistLevelWithOwnership.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::NewProp_LevelPath = { "LevelPath", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHeistLevelWithOwnership, LevelPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::NewProp_LevelPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::NewProp_LevelPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::NewProp_bIsOwned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeistLevelWithOwnership" },
		{ "ModuleRelativePath", "Public/SBZHeistLevelWithOwnership.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::NewProp_bIsOwned_SetBit(void* Obj)
	{
		((FSBZHeistLevelWithOwnership*)Obj)->bIsOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::NewProp_bIsOwned = { "bIsOwned", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZHeistLevelWithOwnership), &Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::NewProp_bIsOwned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::NewProp_bIsOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::NewProp_bIsOwned_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::NewProp_LevelPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::NewProp_bIsOwned,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHeistLevelWithOwnership",
		sizeof(FSBZHeistLevelWithOwnership),
		alignof(FSBZHeistLevelWithOwnership),
		Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHeistLevelWithOwnership"), sizeof(FSBZHeistLevelWithOwnership), Get_Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership_Hash() { return 4046844042U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
