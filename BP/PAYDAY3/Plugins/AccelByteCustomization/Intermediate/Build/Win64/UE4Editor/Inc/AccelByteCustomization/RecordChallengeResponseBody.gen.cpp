// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/RecordChallengeResponseBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecordChallengeResponseBody() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FRecordChallengeResponseBody();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeObjectives();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengePrerequisites();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeReward();
// End Cross Module References
class UScriptStruct* FRecordChallengeResponseBody::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordChallengeResponseBody, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("RecordChallengeResponseBody"), sizeof(FRecordChallengeResponseBody), Get_Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FRecordChallengeResponseBody>()
{
	return FRecordChallengeResponseBody::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecordChallengeResponseBody(FRecordChallengeResponseBody::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("RecordChallengeResponseBody"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFRecordChallengeResponseBody
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFRecordChallengeResponseBody()
	{
		UScriptStruct::DeferCppStructOps<FRecordChallengeResponseBody>(FName(TEXT("RecordChallengeResponseBody")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFRecordChallengeResponseBody;
	struct Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChallengeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objective_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Objective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OrderNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prerequisite_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Prerequisite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reward_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reward;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpdatedAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordChallengeResponseBody>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_ChallengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_ChallengeId = { "ChallengeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, ChallengeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_ChallengeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_ChallengeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, CreatedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_IsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((FRecordChallengeResponseBody*)Obj)->IsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRecordChallengeResponseBody), &Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_IsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_IsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Objective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Objective), Z_Construct_UScriptStruct_FChallengeObjectives, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Objective_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Objective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_OrderNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_OrderNo = { "OrderNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, OrderNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_OrderNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_OrderNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Prerequisite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Prerequisite = { "Prerequisite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Prerequisite), Z_Construct_UScriptStruct_FChallengePrerequisites, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Prerequisite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Prerequisite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Reward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Reward = { "Reward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Reward), Z_Construct_UScriptStruct_FChallengeReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Reward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Reward_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, UpdatedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_UpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_UpdatedAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_ChallengeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_IsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_OrderNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Prerequisite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Reward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_UpdatedAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"RecordChallengeResponseBody",
		sizeof(FRecordChallengeResponseBody),
		alignof(FRecordChallengeResponseBody),
		Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecordChallengeResponseBody()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecordChallengeResponseBody"), sizeof(FRecordChallengeResponseBody), Get_Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Hash() { return 2156683692U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
