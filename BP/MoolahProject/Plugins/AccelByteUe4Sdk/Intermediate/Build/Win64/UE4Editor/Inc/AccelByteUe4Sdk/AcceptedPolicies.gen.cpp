// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AcceptedPolicies.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAcceptedPolicies() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAcceptedPolicies();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAcceptedPolicies::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAcceptedPolicies_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAcceptedPolicies, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AcceptedPolicies"), sizeof(FAcceptedPolicies), Get_Z_Construct_UScriptStruct_FAcceptedPolicies_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAcceptedPolicies>()
{
	return FAcceptedPolicies::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAcceptedPolicies(FAcceptedPolicies::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AcceptedPolicies"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAcceptedPolicies
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAcceptedPolicies()
	{
		UScriptStruct::DeferCppStructOps<FAcceptedPolicies>(FName(TEXT("AcceptedPolicies")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAcceptedPolicies;
	struct Z_Construct_UScriptStruct_FAcceptedPolicies_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAccepted_MetaData[];
#endif
		static void NewProp_IsAccepted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAccepted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedPolicyVersionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedPolicyVersionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolicyVersionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PolicyVersionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolicyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PolicyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AcceptedPolicies.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAcceptedPolicies>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_IsAccepted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AcceptedPolicies" },
		{ "ModuleRelativePath", "Public/AcceptedPolicies.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_IsAccepted_SetBit(void* Obj)
	{
		((FAcceptedPolicies*)Obj)->IsAccepted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_IsAccepted = { "IsAccepted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAcceptedPolicies), &Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_IsAccepted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_IsAccepted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_IsAccepted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_LocalizedPolicyVersionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AcceptedPolicies" },
		{ "ModuleRelativePath", "Public/AcceptedPolicies.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_LocalizedPolicyVersionId = { "LocalizedPolicyVersionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAcceptedPolicies, LocalizedPolicyVersionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_LocalizedPolicyVersionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_LocalizedPolicyVersionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_PolicyVersionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AcceptedPolicies" },
		{ "ModuleRelativePath", "Public/AcceptedPolicies.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_PolicyVersionId = { "PolicyVersionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAcceptedPolicies, PolicyVersionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_PolicyVersionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_PolicyVersionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_PolicyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AcceptedPolicies" },
		{ "ModuleRelativePath", "Public/AcceptedPolicies.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_PolicyId = { "PolicyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAcceptedPolicies, PolicyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_PolicyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_PolicyId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_IsAccepted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_LocalizedPolicyVersionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_PolicyVersionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::NewProp_PolicyId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AcceptedPolicies",
		sizeof(FAcceptedPolicies),
		alignof(FAcceptedPolicies),
		Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAcceptedPolicies()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAcceptedPolicies_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AcceptedPolicies"), sizeof(FAcceptedPolicies), Get_Z_Construct_UScriptStruct_FAcceptedPolicies_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAcceptedPolicies_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAcceptedPolicies_Hash() { return 948129257U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
