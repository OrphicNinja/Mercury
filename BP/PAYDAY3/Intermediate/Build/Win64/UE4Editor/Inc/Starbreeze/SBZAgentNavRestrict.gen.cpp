// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentNavRestrict.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentNavRestrict() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentNavRestrict();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZAgentNavRestrict::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgentNavRestrict, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgentNavRestrict"), sizeof(FSBZAgentNavRestrict), Get_Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgentNavRestrict>()
{
	return FSBZAgentNavRestrict::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgentNavRestrict(FSBZAgentNavRestrict::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgentNavRestrict"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentNavRestrict
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentNavRestrict()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgentNavRestrict>(FName(TEXT("SBZAgentNavRestrict")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentNavRestrict;
	struct Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCorridorValid_MetaData[];
#endif
		static void NewProp_bIsCorridorValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCorridorValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRecomputingPath_MetaData[];
#endif
		static void NewProp_bIsRecomputingPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRecomputingPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentNavRestrict.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgentNavRestrict>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsCorridorValid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentNavRestrict" },
		{ "ModuleRelativePath", "Public/SBZAgentNavRestrict.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsCorridorValid_SetBit(void* Obj)
	{
		((FSBZAgentNavRestrict*)Obj)->bIsCorridorValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsCorridorValid = { "bIsCorridorValid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZAgentNavRestrict), &Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsCorridorValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsCorridorValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsCorridorValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsRecomputingPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentNavRestrict" },
		{ "ModuleRelativePath", "Public/SBZAgentNavRestrict.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsRecomputingPath_SetBit(void* Obj)
	{
		((FSBZAgentNavRestrict*)Obj)->bIsRecomputingPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsRecomputingPath = { "bIsRecomputingPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZAgentNavRestrict), &Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsRecomputingPath_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsRecomputingPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsRecomputingPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsCorridorValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::NewProp_bIsRecomputingPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgentNavRestrict",
		sizeof(FSBZAgentNavRestrict),
		alignof(FSBZAgentNavRestrict),
		Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentNavRestrict()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgentNavRestrict"), sizeof(FSBZAgentNavRestrict), Get_Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgentNavRestrict_Hash() { return 3586160570U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
