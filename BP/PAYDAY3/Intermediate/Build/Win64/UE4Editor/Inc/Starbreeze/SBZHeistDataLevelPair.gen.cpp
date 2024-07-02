// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHeistDataLevelPair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHeistDataLevelPair() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHeistDataLevelPair();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HeistDataAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FSBZHeistDataLevelPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHeistDataLevelPair, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHeistDataLevelPair"), sizeof(FSBZHeistDataLevelPair), Get_Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHeistDataLevelPair>()
{
	return FSBZHeistDataLevelPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHeistDataLevelPair(FSBZHeistDataLevelPair::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHeistDataLevelPair"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeistDataLevelPair
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeistDataLevelPair()
	{
		UScriptStruct::DeferCppStructOps<FSBZHeistDataLevelPair>(FName(TEXT("SBZHeistDataLevelPair")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeistDataLevelPair;
	struct Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHeistDataLevelPair.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHeistDataLevelPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::NewProp_HeistData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeistDataLevelPair" },
		{ "ModuleRelativePath", "Public/SBZHeistDataLevelPair.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::NewProp_HeistData = { "HeistData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHeistDataLevelPair, HeistData), Z_Construct_UClass_UPD3HeistDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::NewProp_HeistData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::NewProp_HeistData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::NewProp_LevelPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeistDataLevelPair" },
		{ "ModuleRelativePath", "Public/SBZHeistDataLevelPair.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::NewProp_LevelPath = { "LevelPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHeistDataLevelPair, LevelPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::NewProp_LevelPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::NewProp_LevelPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::NewProp_HeistData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::NewProp_LevelPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHeistDataLevelPair",
		sizeof(FSBZHeistDataLevelPair),
		alignof(FSBZHeistDataLevelPair),
		Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHeistDataLevelPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHeistDataLevelPair"), sizeof(FSBZHeistDataLevelPair), Get_Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHeistDataLevelPair_Hash() { return 41698529U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
