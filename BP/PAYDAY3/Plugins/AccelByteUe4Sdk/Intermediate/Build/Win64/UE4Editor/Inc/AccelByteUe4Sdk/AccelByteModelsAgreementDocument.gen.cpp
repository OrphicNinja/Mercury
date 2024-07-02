// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsAgreementDocument.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsAgreementDocument() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsAgreementDocument::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsAgreementDocument"), sizeof(FAccelByteModelsAgreementDocument), Get_Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsAgreementDocument>()
{
	return FAccelByteModelsAgreementDocument::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsAgreementDocument(FAccelByteModelsAgreementDocument::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsAgreementDocument"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsAgreementDocument
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsAgreementDocument()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsAgreementDocument>(FName(TEXT("AccelByteModelsAgreementDocument")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsAgreementDocument;
	struct Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAgreementDocument.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsAgreementDocument>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_LocalizedPolicyVersionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAgreementDocument" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAgreementDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_LocalizedPolicyVersionId = { "LocalizedPolicyVersionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsAgreementDocument, LocalizedPolicyVersionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_LocalizedPolicyVersionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_LocalizedPolicyVersionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_PolicyVersionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAgreementDocument" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAgreementDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_PolicyVersionId = { "PolicyVersionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsAgreementDocument, PolicyVersionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_PolicyVersionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_PolicyVersionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_PolicyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAgreementDocument" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAgreementDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_PolicyId = { "PolicyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsAgreementDocument, PolicyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_PolicyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_PolicyId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_LocalizedPolicyVersionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_PolicyVersionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::NewProp_PolicyId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsAgreementDocument",
		sizeof(FAccelByteModelsAgreementDocument),
		alignof(FAccelByteModelsAgreementDocument),
		Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsAgreementDocument"), sizeof(FAccelByteModelsAgreementDocument), Get_Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsAgreementDocument_Hash() { return 3555580203U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
