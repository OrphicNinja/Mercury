// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHeistCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHeistCollection() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHeistCollection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FSBZHeistCollection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHeistCollection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHeistCollection, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHeistCollection"), sizeof(FSBZHeistCollection), Get_Z_Construct_UScriptStruct_FSBZHeistCollection_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHeistCollection>()
{
	return FSBZHeistCollection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHeistCollection(FSBZHeistCollection::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHeistCollection"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeistCollection
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeistCollection()
	{
		UScriptStruct::DeferCppStructOps<FSBZHeistCollection>(FName(TEXT("SBZHeistCollection")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeistCollection;
	struct Z_Construct_UScriptStruct_FSBZHeistCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistCollectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeistCollectionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContainsStoryModeContent_MetaData[];
#endif
		static void NewProp_bContainsStoryModeContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContainsStoryModeContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHeistCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHeistCollection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_HeistCollectionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeistCollection" },
		{ "ModuleRelativePath", "Public/SBZHeistCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_HeistCollectionName = { "HeistCollectionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHeistCollection, HeistCollectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_HeistCollectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_HeistCollectionName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_LevelPaths_Inner = { "LevelPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_LevelPaths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeistCollection" },
		{ "ModuleRelativePath", "Public/SBZHeistCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_LevelPaths = { "LevelPaths", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHeistCollection, LevelPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_LevelPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_LevelPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_bContainsStoryModeContent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeistCollection" },
		{ "ModuleRelativePath", "Public/SBZHeistCollection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_bContainsStoryModeContent_SetBit(void* Obj)
	{
		((FSBZHeistCollection*)Obj)->bContainsStoryModeContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_bContainsStoryModeContent = { "bContainsStoryModeContent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZHeistCollection), &Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_bContainsStoryModeContent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_bContainsStoryModeContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_bContainsStoryModeContent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_HeistCollectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_LevelPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_LevelPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::NewProp_bContainsStoryModeContent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHeistCollection",
		sizeof(FSBZHeistCollection),
		alignof(FSBZHeistCollection),
		Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHeistCollection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHeistCollection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHeistCollection"), sizeof(FSBZHeistCollection), Get_Z_Construct_UScriptStruct_FSBZHeistCollection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHeistCollection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHeistCollection_Hash() { return 2723897829U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
