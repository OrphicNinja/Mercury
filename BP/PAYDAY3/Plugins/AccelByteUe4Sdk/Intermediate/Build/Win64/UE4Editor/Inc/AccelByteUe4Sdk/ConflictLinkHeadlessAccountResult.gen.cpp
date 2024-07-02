// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ConflictLinkHeadlessAccountResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConflictLinkHeadlessAccountResult() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FHeadlessAccount();
// End Cross Module References
class UScriptStruct* FConflictLinkHeadlessAccountResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("ConflictLinkHeadlessAccountResult"), sizeof(FConflictLinkHeadlessAccountResult), Get_Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FConflictLinkHeadlessAccountResult>()
{
	return FConflictLinkHeadlessAccountResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConflictLinkHeadlessAccountResult(FConflictLinkHeadlessAccountResult::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("ConflictLinkHeadlessAccountResult"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFConflictLinkHeadlessAccountResult
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFConflictLinkHeadlessAccountResult()
	{
		UScriptStruct::DeferCppStructOps<FConflictLinkHeadlessAccountResult>(FName(TEXT("ConflictLinkHeadlessAccountResult")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFConflictLinkHeadlessAccountResult;
	struct Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAccount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentAccount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadlessAccount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadlessAccount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlatformAlreadyLinked_MetaData[];
#endif
		static void NewProp_bPlatformAlreadyLinked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlatformAlreadyLinked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlatformLinkConflict_MetaData[];
#endif
		static void NewProp_bPlatformLinkConflict_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlatformLinkConflict;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConflictLinkHeadlessAccountResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConflictLinkHeadlessAccountResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_CurrentAccount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConflictLinkHeadlessAccountResult" },
		{ "ModuleRelativePath", "Public/ConflictLinkHeadlessAccountResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_CurrentAccount = { "CurrentAccount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConflictLinkHeadlessAccountResult, CurrentAccount), Z_Construct_UScriptStruct_FHeadlessAccount, METADATA_PARAMS(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_CurrentAccount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_CurrentAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_HeadlessAccount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConflictLinkHeadlessAccountResult" },
		{ "ModuleRelativePath", "Public/ConflictLinkHeadlessAccountResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_HeadlessAccount = { "HeadlessAccount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConflictLinkHeadlessAccountResult, HeadlessAccount), Z_Construct_UScriptStruct_FHeadlessAccount, METADATA_PARAMS(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_HeadlessAccount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_HeadlessAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformAlreadyLinked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConflictLinkHeadlessAccountResult" },
		{ "ModuleRelativePath", "Public/ConflictLinkHeadlessAccountResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformAlreadyLinked_SetBit(void* Obj)
	{
		((FConflictLinkHeadlessAccountResult*)Obj)->bPlatformAlreadyLinked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformAlreadyLinked = { "bPlatformAlreadyLinked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConflictLinkHeadlessAccountResult), &Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformAlreadyLinked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformAlreadyLinked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformAlreadyLinked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_PlatformId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConflictLinkHeadlessAccountResult" },
		{ "ModuleRelativePath", "Public/ConflictLinkHeadlessAccountResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConflictLinkHeadlessAccountResult, PlatformId), METADATA_PARAMS(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_PlatformId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformLinkConflict_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConflictLinkHeadlessAccountResult" },
		{ "ModuleRelativePath", "Public/ConflictLinkHeadlessAccountResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformLinkConflict_SetBit(void* Obj)
	{
		((FConflictLinkHeadlessAccountResult*)Obj)->bPlatformLinkConflict = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformLinkConflict = { "bPlatformLinkConflict", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConflictLinkHeadlessAccountResult), &Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformLinkConflict_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformLinkConflict_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformLinkConflict_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_CurrentAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_HeadlessAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformAlreadyLinked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_PlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::NewProp_bPlatformLinkConflict,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"ConflictLinkHeadlessAccountResult",
		sizeof(FConflictLinkHeadlessAccountResult),
		alignof(FConflictLinkHeadlessAccountResult),
		Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConflictLinkHeadlessAccountResult"), sizeof(FConflictLinkHeadlessAccountResult), Get_Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConflictLinkHeadlessAccountResult_Hash() { return 1387807725U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
