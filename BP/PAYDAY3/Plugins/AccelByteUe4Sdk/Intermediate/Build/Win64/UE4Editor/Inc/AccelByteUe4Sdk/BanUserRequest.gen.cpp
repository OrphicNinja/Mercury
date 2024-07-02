// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/BanUserRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanUserRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FBanUserRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EBanType();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EBanReason();
// End Cross Module References
class UScriptStruct* FBanUserRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FBanUserRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBanUserRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("BanUserRequest"), sizeof(FBanUserRequest), Get_Z_Construct_UScriptStruct_FBanUserRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FBanUserRequest>()
{
	return FBanUserRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBanUserRequest(FBanUserRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("BanUserRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBanUserRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBanUserRequest()
	{
		UScriptStruct::DeferCppStructOps<FBanUserRequest>(FName(TEXT("BanUserRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBanUserRequest;
	struct Z_Construct_UScriptStruct_FBanUserRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ban_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ban_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Ban;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndDate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipNotif_MetaData[];
#endif
		static void NewProp_SkipNotif_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BanUserRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBanUserRequest>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Ban_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Ban_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserRequest" },
		{ "ModuleRelativePath", "Public/BanUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Ban = { "Ban", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserRequest, Ban), Z_Construct_UEnum_AccelByteUe4Sdk_EBanType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Ban_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Ban_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Comment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserRequest" },
		{ "ModuleRelativePath", "Public/BanUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserRequest, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_EndDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserRequest" },
		{ "ModuleRelativePath", "Public/BanUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserRequest, EndDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_EndDate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Reason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserRequest" },
		{ "ModuleRelativePath", "Public/BanUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserRequest, Reason), Z_Construct_UEnum_AccelByteUe4Sdk_EBanReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Reason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_SkipNotif_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserRequest" },
		{ "ModuleRelativePath", "Public/BanUserRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_SkipNotif_SetBit(void* Obj)
	{
		((FBanUserRequest*)Obj)->SkipNotif = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_SkipNotif = { "SkipNotif", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBanUserRequest), &Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_SkipNotif_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_SkipNotif_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_SkipNotif_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBanUserRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Ban_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Ban,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Comment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserRequest_Statics::NewProp_SkipNotif,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBanUserRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"BanUserRequest",
		sizeof(FBanUserRequest),
		alignof(FBanUserRequest),
		Z_Construct_UScriptStruct_FBanUserRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBanUserRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBanUserRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BanUserRequest"), sizeof(FBanUserRequest), Get_Z_Construct_UScriptStruct_FBanUserRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBanUserRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBanUserRequest_Hash() { return 4273568670U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
