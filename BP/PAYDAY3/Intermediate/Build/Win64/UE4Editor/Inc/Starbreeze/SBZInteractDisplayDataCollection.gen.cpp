// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractDisplayDataCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractDisplayDataCollection() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractDisplayData();
// End Cross Module References
class UScriptStruct* FSBZInteractDisplayDataCollection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInteractDisplayDataCollection"), sizeof(FSBZInteractDisplayDataCollection), Get_Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInteractDisplayDataCollection>()
{
	return FSBZInteractDisplayDataCollection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInteractDisplayDataCollection(FSBZInteractDisplayDataCollection::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInteractDisplayDataCollection"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractDisplayDataCollection
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractDisplayDataCollection()
	{
		UScriptStruct::DeferCppStructOps<FSBZInteractDisplayDataCollection>(FName(TEXT("SBZInteractDisplayDataCollection")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractDisplayDataCollection;
	struct Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrontData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelfData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractDisplayDataCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInteractDisplayDataCollection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::NewProp_FrontData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractDisplayDataCollection" },
		{ "ModuleRelativePath", "Public/SBZInteractDisplayDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::NewProp_FrontData = { "FrontData", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractDisplayDataCollection, FrontData), Z_Construct_UScriptStruct_FSBZInteractDisplayData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::NewProp_FrontData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::NewProp_FrontData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::NewProp_SelfData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractDisplayDataCollection" },
		{ "ModuleRelativePath", "Public/SBZInteractDisplayDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::NewProp_SelfData = { "SelfData", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractDisplayDataCollection, SelfData), Z_Construct_UScriptStruct_FSBZInteractDisplayData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::NewProp_SelfData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::NewProp_SelfData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::NewProp_FrontData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::NewProp_SelfData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInteractDisplayDataCollection",
		sizeof(FSBZInteractDisplayDataCollection),
		alignof(FSBZInteractDisplayDataCollection),
		Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInteractDisplayDataCollection"), sizeof(FSBZInteractDisplayDataCollection), Get_Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection_Hash() { return 2939512322U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
