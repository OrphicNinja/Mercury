// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPlayerLeveledPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPlayerLeveledPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGameStandardEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsPlayerLeveledPayload>() == std::is_polymorphic<FAccelByteModelsGameStandardEvent>(), "USTRUCT FAccelByteModelsPlayerLeveledPayload cannot be polymorphic unless super FAccelByteModelsGameStandardEvent is polymorphic");

class UScriptStruct* FAccelByteModelsPlayerLeveledPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPlayerLeveledPayload"), sizeof(FAccelByteModelsPlayerLeveledPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPlayerLeveledPayload>()
{
	return FAccelByteModelsPlayerLeveledPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload(FAccelByteModelsPlayerLeveledPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPlayerLeveledPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlayerLeveledPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlayerLeveledPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPlayerLeveledPayload>(FName(TEXT("AccelByteModelsPlayerLeveledPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlayerLeveledPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelDifficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSubject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelSubject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayerLeveledPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPlayerLeveledPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlayerLeveledPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayerLeveledPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelStatus = { "LevelStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlayerLeveledPayload, LevelStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlayerLeveledPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayerLeveledPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelID = { "LevelID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlayerLeveledPayload, LevelID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlayerLeveledPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayerLeveledPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlayerLeveledPayload, LevelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelDifficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlayerLeveledPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayerLeveledPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelDifficulty = { "LevelDifficulty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlayerLeveledPayload, LevelDifficulty), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelDifficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelSubject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlayerLeveledPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayerLeveledPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelSubject = { "LevelSubject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlayerLeveledPayload, LevelSubject), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelSubject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::NewProp_LevelSubject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsGameStandardEvent,
		&NewStructOps,
		"AccelByteModelsPlayerLeveledPayload",
		sizeof(FAccelByteModelsPlayerLeveledPayload),
		alignof(FAccelByteModelsPlayerLeveledPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPlayerLeveledPayload"), sizeof(FAccelByteModelsPlayerLeveledPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerLeveledPayload_Hash() { return 4082374792U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
