// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPersonalMessageNotice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPersonalMessageNotice() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsPersonalMessageNotice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPersonalMessageNotice"), sizeof(FAccelByteModelsPersonalMessageNotice), Get_Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPersonalMessageNotice>()
{
	return FAccelByteModelsPersonalMessageNotice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPersonalMessageNotice(FAccelByteModelsPersonalMessageNotice::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPersonalMessageNotice"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPersonalMessageNotice
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPersonalMessageNotice()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPersonalMessageNotice>(FName(TEXT("AccelByteModelsPersonalMessageNotice")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPersonalMessageNotice;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_From;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_To;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Payload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceivedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceivedAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPersonalMessageNotice.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPersonalMessageNotice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPersonalMessageNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPersonalMessageNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPersonalMessageNotice, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_From_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPersonalMessageNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPersonalMessageNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPersonalMessageNotice, From), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_From_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_To_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPersonalMessageNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPersonalMessageNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPersonalMessageNotice, To), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_To_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_Payload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPersonalMessageNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPersonalMessageNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPersonalMessageNotice, Payload), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_Payload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_ReceivedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPersonalMessageNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPersonalMessageNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_ReceivedAt = { "ReceivedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPersonalMessageNotice, ReceivedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_ReceivedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_ReceivedAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_Payload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::NewProp_ReceivedAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsPersonalMessageNotice",
		sizeof(FAccelByteModelsPersonalMessageNotice),
		alignof(FAccelByteModelsPersonalMessageNotice),
		Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPersonalMessageNotice"), sizeof(FAccelByteModelsPersonalMessageNotice), Get_Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPersonalMessageNotice_Hash() { return 332356836U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
