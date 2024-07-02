// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/HeadlessAccount.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadlessAccount() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FHeadlessAccount();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FHeadlessAccount::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FHeadlessAccount_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeadlessAccount, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("HeadlessAccount"), sizeof(FHeadlessAccount), Get_Z_Construct_UScriptStruct_FHeadlessAccount_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FHeadlessAccount>()
{
	return FHeadlessAccount::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHeadlessAccount(FHeadlessAccount::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("HeadlessAccount"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFHeadlessAccount
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFHeadlessAccount()
	{
		UScriptStruct::DeferCppStructOps<FHeadlessAccount>(FName(TEXT("HeadlessAccount")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFHeadlessAccount;
	struct Z_Construct_UScriptStruct_FHeadlessAccount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LinkedGames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedGames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinkedGames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeadlessAccount_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HeadlessAccount.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeadlessAccount>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HeadlessAccount" },
		{ "ModuleRelativePath", "Public/HeadlessAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeadlessAccount, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_Email_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HeadlessAccount" },
		{ "ModuleRelativePath", "Public/HeadlessAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeadlessAccount, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_LinkedGames_Inner = { "LinkedGames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_LinkedGames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HeadlessAccount" },
		{ "ModuleRelativePath", "Public/HeadlessAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_LinkedGames = { "LinkedGames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeadlessAccount, LinkedGames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_LinkedGames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_LinkedGames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_UserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HeadlessAccount" },
		{ "ModuleRelativePath", "Public/HeadlessAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeadlessAccount, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_UserName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeadlessAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_LinkedGames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_LinkedGames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeadlessAccount_Statics::NewProp_UserName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeadlessAccount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"HeadlessAccount",
		sizeof(FHeadlessAccount),
		alignof(FHeadlessAccount),
		Z_Construct_UScriptStruct_FHeadlessAccount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeadlessAccount_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeadlessAccount_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeadlessAccount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeadlessAccount()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHeadlessAccount_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HeadlessAccount"), sizeof(FHeadlessAccount), Get_Z_Construct_UScriptStruct_FHeadlessAccount_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHeadlessAccount_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHeadlessAccount_Hash() { return 3382802414U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
