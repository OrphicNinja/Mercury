// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsLeavePartyNotice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsLeavePartyNotice() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsLeavePartyNotice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsLeavePartyNotice"), sizeof(FAccelByteModelsLeavePartyNotice), Get_Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsLeavePartyNotice>()
{
	return FAccelByteModelsLeavePartyNotice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsLeavePartyNotice(FAccelByteModelsLeavePartyNotice::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsLeavePartyNotice"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLeavePartyNotice
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLeavePartyNotice()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsLeavePartyNotice>(FName(TEXT("AccelByteModelsLeavePartyNotice")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLeavePartyNotice;
	struct Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leader_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Leader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeavePartyNotice.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsLeavePartyNotice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_UserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeavePartyNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeavePartyNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLeavePartyNotice, UserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_UserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_UserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_LeaderID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeavePartyNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeavePartyNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_LeaderID = { "LeaderID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLeavePartyNotice, LeaderID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_LeaderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_LeaderID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_Leader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeavePartyNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeavePartyNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_Leader = { "Leader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLeavePartyNotice, Leader), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_Leader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_Leader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_PartyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLeavePartyNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLeavePartyNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_PartyId = { "PartyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLeavePartyNotice, PartyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_PartyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_PartyId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_UserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_LeaderID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_Leader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::NewProp_PartyId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsLeavePartyNotice",
		sizeof(FAccelByteModelsLeavePartyNotice),
		alignof(FAccelByteModelsLeavePartyNotice),
		Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsLeavePartyNotice"), sizeof(FAccelByteModelsLeavePartyNotice), Get_Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLeavePartyNotice_Hash() { return 2493686931U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
