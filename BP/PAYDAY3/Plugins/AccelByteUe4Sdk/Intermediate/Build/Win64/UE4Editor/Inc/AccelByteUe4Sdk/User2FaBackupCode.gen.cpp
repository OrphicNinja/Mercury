// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/User2FaBackupCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUser2FaBackupCode() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUser2FaBackupCode();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FUser2FaBackupCode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FUser2FaBackupCode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUser2FaBackupCode, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("User2FaBackupCode"), sizeof(FUser2FaBackupCode), Get_Z_Construct_UScriptStruct_FUser2FaBackupCode_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FUser2FaBackupCode>()
{
	return FUser2FaBackupCode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUser2FaBackupCode(FUser2FaBackupCode::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("User2FaBackupCode"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUser2FaBackupCode
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUser2FaBackupCode()
	{
		UScriptStruct::DeferCppStructOps<FUser2FaBackupCode>(FName(TEXT("User2FaBackupCode")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUser2FaBackupCode;
	struct Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_GeneratedAt;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InvalidCodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidCodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InvalidCodes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValidCodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidCodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidCodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User2FaBackupCode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUser2FaBackupCode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_GeneratedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User2FaBackupCode" },
		{ "ModuleRelativePath", "Public/User2FaBackupCode.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_GeneratedAt = { "GeneratedAt", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUser2FaBackupCode, GeneratedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_GeneratedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_GeneratedAt_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_InvalidCodes_Inner = { "InvalidCodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_InvalidCodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User2FaBackupCode" },
		{ "ModuleRelativePath", "Public/User2FaBackupCode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_InvalidCodes = { "InvalidCodes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUser2FaBackupCode, InvalidCodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_InvalidCodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_InvalidCodes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_ValidCodes_Inner = { "ValidCodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_ValidCodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User2FaBackupCode" },
		{ "ModuleRelativePath", "Public/User2FaBackupCode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_ValidCodes = { "ValidCodes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUser2FaBackupCode, ValidCodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_ValidCodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_ValidCodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_GeneratedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_InvalidCodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_InvalidCodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_ValidCodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::NewProp_ValidCodes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"User2FaBackupCode",
		sizeof(FUser2FaBackupCode),
		alignof(FUser2FaBackupCode),
		Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUser2FaBackupCode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUser2FaBackupCode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("User2FaBackupCode"), sizeof(FUser2FaBackupCode), Get_Z_Construct_UScriptStruct_FUser2FaBackupCode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUser2FaBackupCode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUser2FaBackupCode_Hash() { return 4142416958U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
