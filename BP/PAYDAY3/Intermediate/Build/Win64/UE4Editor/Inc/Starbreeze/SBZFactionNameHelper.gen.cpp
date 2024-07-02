// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFactionNameHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFactionNameHelper() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFactionNameHelper();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZFactionNameHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZFactionNameHelper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZFactionNameHelper, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZFactionNameHelper"), sizeof(FSBZFactionNameHelper), Get_Z_Construct_UScriptStruct_FSBZFactionNameHelper_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZFactionNameHelper>()
{
	return FSBZFactionNameHelper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZFactionNameHelper(FSBZFactionNameHelper::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZFactionNameHelper"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFactionNameHelper
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFactionNameHelper()
	{
		UScriptStruct::DeferCppStructOps<FSBZFactionNameHelper>(FName(TEXT("SBZFactionNameHelper")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZFactionNameHelper;
	struct Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FactionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZFactionNameHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZFactionNameHelper>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::NewProp_FactionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFactionNameHelper" },
		{ "ModuleRelativePath", "Public/SBZFactionNameHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::NewProp_FactionName = { "FactionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFactionNameHelper, FactionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::NewProp_FactionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::NewProp_FactionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::NewProp_FactionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZFactionNameHelper",
		sizeof(FSBZFactionNameHelper),
		alignof(FSBZFactionNameHelper),
		Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZFactionNameHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZFactionNameHelper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZFactionNameHelper"), sizeof(FSBZFactionNameHelper), Get_Z_Construct_UScriptStruct_FSBZFactionNameHelper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZFactionNameHelper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZFactionNameHelper_Hash() { return 2464458402U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
