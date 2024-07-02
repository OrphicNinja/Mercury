// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsQuestEndedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsQuestEndedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGameStandardEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsQuestEndedPayload>() == std::is_polymorphic<FAccelByteModelsGameStandardEvent>(), "USTRUCT FAccelByteModelsQuestEndedPayload cannot be polymorphic unless super FAccelByteModelsGameStandardEvent is polymorphic");

class UScriptStruct* FAccelByteModelsQuestEndedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsQuestEndedPayload"), sizeof(FAccelByteModelsQuestEndedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsQuestEndedPayload>()
{
	return FAccelByteModelsQuestEndedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsQuestEndedPayload(FAccelByteModelsQuestEndedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsQuestEndedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsQuestEndedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsQuestEndedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsQuestEndedPayload>(FName(TEXT("AccelByteModelsQuestEndedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsQuestEndedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestOutcome_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestOutcome;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestDifficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuestEndedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsQuestEndedPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsQuestEndedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuestEndedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsQuestEndedPayload, QuestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsQuestEndedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuestEndedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsQuestEndedPayload, QuestID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsQuestEndedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuestEndedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestType = { "QuestType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsQuestEndedPayload, QuestType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestOutcome_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsQuestEndedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuestEndedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestOutcome = { "QuestOutcome", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsQuestEndedPayload, QuestOutcome), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestOutcome_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestOutcome_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestDifficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsQuestEndedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuestEndedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestDifficulty = { "QuestDifficulty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsQuestEndedPayload, QuestDifficulty), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestDifficulty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestOutcome,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::NewProp_QuestDifficulty,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsGameStandardEvent,
		&NewStructOps,
		"AccelByteModelsQuestEndedPayload",
		sizeof(FAccelByteModelsQuestEndedPayload),
		alignof(FAccelByteModelsQuestEndedPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsQuestEndedPayload"), sizeof(FAccelByteModelsQuestEndedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsQuestEndedPayload_Hash() { return 3861627877U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
