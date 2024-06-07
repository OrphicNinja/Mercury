// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUserAgreementNotAcceptedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUserAgreementNotAcceptedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementAcceptedPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsUserAgreementNotAcceptedPayload>() == std::is_polymorphic<FAccelByteModelsUserAgreementAcceptedPayload>(), "USTRUCT FAccelByteModelsUserAgreementNotAcceptedPayload cannot be polymorphic unless super FAccelByteModelsUserAgreementAcceptedPayload is polymorphic");

class UScriptStruct* FAccelByteModelsUserAgreementNotAcceptedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUserAgreementNotAcceptedPayload"), sizeof(FAccelByteModelsUserAgreementNotAcceptedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUserAgreementNotAcceptedPayload>()
{
	return FAccelByteModelsUserAgreementNotAcceptedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload(FAccelByteModelsUserAgreementNotAcceptedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUserAgreementNotAcceptedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserAgreementNotAcceptedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserAgreementNotAcceptedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUserAgreementNotAcceptedPayload>(FName(TEXT("AccelByteModelsUserAgreementNotAcceptedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserAgreementNotAcceptedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserAgreementNotAcceptedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUserAgreementNotAcceptedPayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementAcceptedPayload,
		&NewStructOps,
		"AccelByteModelsUserAgreementNotAcceptedPayload",
		sizeof(FAccelByteModelsUserAgreementNotAcceptedPayload),
		alignof(FAccelByteModelsUserAgreementNotAcceptedPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUserAgreementNotAcceptedPayload"), sizeof(FAccelByteModelsUserAgreementNotAcceptedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserAgreementNotAcceptedPayload_Hash() { return 1515888619U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
