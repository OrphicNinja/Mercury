// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHeistCollectionWithOwnership.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHeistCollectionWithOwnership() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership();
// End Cross Module References
class UScriptStruct* FSBZHeistCollectionWithOwnership::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHeistCollectionWithOwnership"), sizeof(FSBZHeistCollectionWithOwnership), Get_Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHeistCollectionWithOwnership>()
{
	return FSBZHeistCollectionWithOwnership::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHeistCollectionWithOwnership(FSBZHeistCollectionWithOwnership::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHeistCollectionWithOwnership"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeistCollectionWithOwnership
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeistCollectionWithOwnership()
	{
		UScriptStruct::DeferCppStructOps<FSBZHeistCollectionWithOwnership>(FName(TEXT("SBZHeistCollectionWithOwnership")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeistCollectionWithOwnership;
	struct Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistCollectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeistCollectionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContainsStoryModeContent_MetaData[];
#endif
		static void NewProp_bContainsStoryModeContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContainsStoryModeContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHeistCollectionWithOwnership.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHeistCollectionWithOwnership>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_HeistCollectionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeistCollectionWithOwnership" },
		{ "ModuleRelativePath", "Public/SBZHeistCollectionWithOwnership.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_HeistCollectionName = { "HeistCollectionName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHeistCollectionWithOwnership, HeistCollectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_HeistCollectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_HeistCollectionName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_LevelArray_Inner = { "LevelArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHeistLevelWithOwnership, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_LevelArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeistCollectionWithOwnership" },
		{ "ModuleRelativePath", "Public/SBZHeistCollectionWithOwnership.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_LevelArray = { "LevelArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHeistCollectionWithOwnership, LevelArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_LevelArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_LevelArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_bContainsStoryModeContent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeistCollectionWithOwnership" },
		{ "ModuleRelativePath", "Public/SBZHeistCollectionWithOwnership.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_bContainsStoryModeContent_SetBit(void* Obj)
	{
		((FSBZHeistCollectionWithOwnership*)Obj)->bContainsStoryModeContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_bContainsStoryModeContent = { "bContainsStoryModeContent", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZHeistCollectionWithOwnership), &Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_bContainsStoryModeContent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_bContainsStoryModeContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_bContainsStoryModeContent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_HeistCollectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_LevelArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_LevelArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::NewProp_bContainsStoryModeContent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHeistCollectionWithOwnership",
		sizeof(FSBZHeistCollectionWithOwnership),
		alignof(FSBZHeistCollectionWithOwnership),
		Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHeistCollectionWithOwnership"), sizeof(FSBZHeistCollectionWithOwnership), Get_Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHeistCollectionWithOwnership_Hash() { return 124216649U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
