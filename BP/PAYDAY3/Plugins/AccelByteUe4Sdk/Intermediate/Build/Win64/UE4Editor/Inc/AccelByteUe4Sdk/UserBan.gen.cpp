// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/UserBan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserBan() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUserBan();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EBanReason();
// End Cross Module References
class UScriptStruct* FUserBan::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FUserBan_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserBan, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("UserBan"), sizeof(FUserBan), Get_Z_Construct_UScriptStruct_FUserBan_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FUserBan>()
{
	return FUserBan::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserBan(FUserBan::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UserBan"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUserBan
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUserBan()
	{
		UScriptStruct::DeferCppStructOps<FUserBan>(FName(TEXT("UserBan")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUserBan;
	struct Z_Construct_UScriptStruct_FUserBan_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserBan_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserBan.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserBan_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserBan>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_Reason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserBan" },
		{ "ModuleRelativePath", "Public/UserBan.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserBan, Reason), Z_Construct_UEnum_AccelByteUe4Sdk_EBanReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_Reason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_EndDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserBan" },
		{ "ModuleRelativePath", "Public/UserBan.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserBan, EndDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_Comment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserBan" },
		{ "ModuleRelativePath", "Public/UserBan.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserBan, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_Comment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserBan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserBan_Statics::NewProp_Comment,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserBan_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"UserBan",
		sizeof(FUserBan),
		alignof(FUserBan),
		Z_Construct_UScriptStruct_FUserBan_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserBan_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserBan_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserBan_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserBan()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserBan_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserBan"), sizeof(FUserBan), Get_Z_Construct_UScriptStruct_FUserBan_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserBan_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserBan_Hash() { return 1453351253U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
