// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SingleUserStatRequests.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleUserStatRequests() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSingleUserStatRequests();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSingleUserStatRequests::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSingleUserStatRequests_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingleUserStatRequests, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SingleUserStatRequests"), sizeof(FSingleUserStatRequests), Get_Z_Construct_UScriptStruct_FSingleUserStatRequests_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSingleUserStatRequests>()
{
	return FSingleUserStatRequests::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSingleUserStatRequests(FSingleUserStatRequests::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SingleUserStatRequests"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSingleUserStatRequests
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSingleUserStatRequests()
	{
		UScriptStruct::DeferCppStructOps<FSingleUserStatRequests>(FName(TEXT("SingleUserStatRequests")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSingleUserStatRequests;
	struct Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stats_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Stats_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Stats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SingleUserStatRequests.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingleUserStatRequests>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SingleUserStatRequests" },
		{ "ModuleRelativePath", "Public/SingleUserStatRequests.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleUserStatRequests, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_Stats_ValueProp = { "Stats", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_Stats_Key_KeyProp = { "Stats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_Stats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SingleUserStatRequests" },
		{ "ModuleRelativePath", "Public/SingleUserStatRequests.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleUserStatRequests, Stats), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_Stats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_Stats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_Stats_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_Stats_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::NewProp_Stats,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SingleUserStatRequests",
		sizeof(FSingleUserStatRequests),
		alignof(FSingleUserStatRequests),
		Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSingleUserStatRequests()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSingleUserStatRequests_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SingleUserStatRequests"), sizeof(FSingleUserStatRequests), Get_Z_Construct_UScriptStruct_FSingleUserStatRequests_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSingleUserStatRequests_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSingleUserStatRequests_Hash() { return 2626361776U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
