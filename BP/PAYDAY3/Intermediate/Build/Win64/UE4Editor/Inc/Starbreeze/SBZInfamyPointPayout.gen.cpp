// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInfamyPointPayout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInfamyPointPayout() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamyPointPayout();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZInfamyPointPayout::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInfamyPointPayout, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInfamyPointPayout"), sizeof(FSBZInfamyPointPayout), Get_Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInfamyPointPayout>()
{
	return FSBZInfamyPointPayout::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInfamyPointPayout(FSBZInfamyPointPayout::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInfamyPointPayout"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyPointPayout
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyPointPayout()
	{
		UScriptStruct::DeferCppStructOps<FSBZInfamyPointPayout>(FName(TEXT("SBZInfamyPointPayout")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyPointPayout;
	struct Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Completion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StealthBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllBagsBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllBagsBonus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInfamyPointPayout.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInfamyPointPayout>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_Completion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyPointPayout" },
		{ "ModuleRelativePath", "Public/SBZInfamyPointPayout.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_Completion = { "Completion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyPointPayout, Completion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_Completion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_Completion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_StealthBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyPointPayout" },
		{ "ModuleRelativePath", "Public/SBZInfamyPointPayout.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_StealthBonus = { "StealthBonus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyPointPayout, StealthBonus), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_StealthBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_StealthBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_AllBagsBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyPointPayout" },
		{ "ModuleRelativePath", "Public/SBZInfamyPointPayout.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_AllBagsBonus = { "AllBagsBonus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyPointPayout, AllBagsBonus), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_AllBagsBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_AllBagsBonus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_Completion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_StealthBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::NewProp_AllBagsBonus,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInfamyPointPayout",
		sizeof(FSBZInfamyPointPayout),
		alignof(FSBZInfamyPointPayout),
		Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamyPointPayout()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInfamyPointPayout"), sizeof(FSBZInfamyPointPayout), Get_Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyPointPayout_Hash() { return 2002163548U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
