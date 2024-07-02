// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineSearchResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineSearchResult() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineSearchResult();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineSessionParams();
// End Cross Module References
class UScriptStruct* FSBZOnlineSearchResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZOnlineSearchResult, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZOnlineSearchResult"), sizeof(FSBZOnlineSearchResult), Get_Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZOnlineSearchResult>()
{
	return FSBZOnlineSearchResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZOnlineSearchResult(FSBZOnlineSearchResult::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZOnlineSearchResult"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZOnlineSearchResult
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZOnlineSearchResult()
	{
		UScriptStruct::DeferCppStructOps<FSBZOnlineSearchResult>(FName(TEXT("SBZOnlineSearchResult")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZOnlineSearchResult;
	struct Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineSearchResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZOnlineSearchResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSearchResult" },
		{ "ModuleRelativePath", "Public/SBZOnlineSearchResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSearchResult, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_SessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSearchResult" },
		{ "ModuleRelativePath", "Public/SBZOnlineSearchResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSearchResult, SessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_Parameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSearchResult" },
		{ "ModuleRelativePath", "Public/SBZOnlineSearchResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSearchResult, Parameters), Z_Construct_UScriptStruct_FSBZOnlineSessionParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_Parameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::NewProp_Parameters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZOnlineSearchResult",
		sizeof(FSBZOnlineSearchResult),
		alignof(FSBZOnlineSearchResult),
		Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineSearchResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZOnlineSearchResult"), sizeof(FSBZOnlineSearchResult), Get_Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZOnlineSearchResult_Hash() { return 4136061201U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
