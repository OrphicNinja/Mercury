// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFactionIdHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFactionIdHelper() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFactionIdHelper();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZFactionIdHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZFactionIdHelper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZFactionIdHelper, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZFactionIdHelper"), sizeof(FSBZFactionIdHelper), Get_Z_Construct_UScriptStruct_FSBZFactionIdHelper_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZFactionIdHelper>()
{
	return FSBZFactionIdHelper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZFactionIdHelper(FSBZFactionIdHelper::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZFactionIdHelper"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFactionIdHelper
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFactionIdHelper()
	{
		UScriptStruct::DeferCppStructOps<FSBZFactionIdHelper>(FName(TEXT("SBZFactionIdHelper")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZFactionIdHelper;
	struct Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FactionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZFactionIdHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZFactionIdHelper>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::NewProp_FactionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFactionIdHelper" },
		{ "ModuleRelativePath", "Public/SBZFactionIdHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::NewProp_FactionId = { "FactionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFactionIdHelper, FactionId), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::NewProp_FactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::NewProp_FactionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::NewProp_FactionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZFactionIdHelper",
		sizeof(FSBZFactionIdHelper),
		alignof(FSBZFactionIdHelper),
		Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZFactionIdHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZFactionIdHelper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZFactionIdHelper"), sizeof(FSBZFactionIdHelper), Get_Z_Construct_UScriptStruct_FSBZFactionIdHelper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZFactionIdHelper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZFactionIdHelper_Hash() { return 1770985926U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
