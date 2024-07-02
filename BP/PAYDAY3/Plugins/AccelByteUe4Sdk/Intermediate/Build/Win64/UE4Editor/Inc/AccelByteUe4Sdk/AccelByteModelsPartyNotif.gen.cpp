// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPartyNotif.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPartyNotif() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsPartyNotif::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPartyNotif"), sizeof(FAccelByteModelsPartyNotif), Get_Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPartyNotif>()
{
	return FAccelByteModelsPartyNotif::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPartyNotif(FAccelByteModelsPartyNotif::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPartyNotif"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPartyNotif
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPartyNotif()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPartyNotif>(FName(TEXT("AccelByteModelsPartyNotif")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPartyNotif;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Sender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Topic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Topic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPartyNotif.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPartyNotif>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Sender_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPartyNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPartyNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPartyNotif, Sender), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Sender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Sender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Topic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPartyNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPartyNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPartyNotif, Topic), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Topic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Topic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Payload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPartyNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPartyNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPartyNotif, Payload), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Sender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::NewProp_Payload,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsPartyNotif",
		sizeof(FAccelByteModelsPartyNotif),
		alignof(FAccelByteModelsPartyNotif),
		Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPartyNotif"), sizeof(FAccelByteModelsPartyNotif), Get_Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPartyNotif_Hash() { return 937626634U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
