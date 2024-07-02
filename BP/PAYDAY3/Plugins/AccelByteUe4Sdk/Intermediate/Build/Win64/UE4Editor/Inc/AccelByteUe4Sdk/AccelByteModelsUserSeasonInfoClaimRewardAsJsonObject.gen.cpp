// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSeason();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject"), sizeof(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject>()
{
	return FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject>(FName(TEXT("AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeasonId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SeasonId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnrolledAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnrolledAt;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnrolledPasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnrolledPasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnrolledPasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTierIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTierIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTierIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastTierIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequiredExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cleared_MetaData[];
#endif
		static void NewProp_Cleared_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Cleared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Season_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Season;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToClaimRewards_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ToClaimRewards_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToClaimRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ToClaimRewards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClaimingRewards_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClaimingRewards_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaimingRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ClaimingRewards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_SeasonId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_SeasonId = { "SeasonId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, SeasonId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_SeasonId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_SeasonId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_EnrolledAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_EnrolledAt = { "EnrolledAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, EnrolledAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_EnrolledAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_EnrolledAt_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_EnrolledPasses_Inner = { "EnrolledPasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_EnrolledPasses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_EnrolledPasses = { "EnrolledPasses", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, EnrolledPasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_EnrolledPasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_EnrolledPasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CurrentTierIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CurrentTierIndex = { "CurrentTierIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, CurrentTierIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CurrentTierIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CurrentTierIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_LastTierIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_LastTierIndex = { "LastTierIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, LastTierIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_LastTierIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_LastTierIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_RequiredExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_RequiredExp = { "RequiredExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, RequiredExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_RequiredExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_RequiredExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CurrentExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CurrentExp = { "CurrentExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, CurrentExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CurrentExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CurrentExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Cleared_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Cleared_SetBit(void* Obj)
	{
		((FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject*)Obj)->Cleared = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Cleared = { "Cleared", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject), &Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Cleared_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Cleared_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Cleared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Season_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, Season), Z_Construct_UScriptStruct_FAccelByteModelsSeason, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Season_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Season_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ToClaimRewards_ValueProp = { "ToClaimRewards", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ToClaimRewards_Key_KeyProp = { "ToClaimRewards_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ToClaimRewards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ToClaimRewards = { "ToClaimRewards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, ToClaimRewards), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ToClaimRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ToClaimRewards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ClaimingRewards_ValueProp = { "ClaimingRewards", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ClaimingRewards_Key_KeyProp = { "ClaimingRewards_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ClaimingRewards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ClaimingRewards = { "ClaimingRewards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, ClaimingRewards), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ClaimingRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ClaimingRewards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject, UpdatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_UpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_UpdatedAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_SeasonId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_EnrolledAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_EnrolledPasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_EnrolledPasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CurrentTierIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_LastTierIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_RequiredExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CurrentExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Cleared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ToClaimRewards_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ToClaimRewards_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ToClaimRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ClaimingRewards_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ClaimingRewards_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_ClaimingRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::NewProp_UpdatedAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject",
		sizeof(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject),
		alignof(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject),
		Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUserSeasonInfoClaimRewardAsJsonObject"), sizeof(FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserSeasonInfoClaimRewardAsJsonObject_Hash() { return 2606536408U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
