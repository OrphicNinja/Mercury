// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/SystemMessageNotifMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSystemMessageNotifMessage() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSystemMessageNotifMessage();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FSystemMessageNotifMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSystemMessageNotifMessage, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("SystemMessageNotifMessage"), sizeof(FSystemMessageNotifMessage), Get_Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FSystemMessageNotifMessage>()
{
	return FSystemMessageNotifMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSystemMessageNotifMessage(FSystemMessageNotifMessage::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("SystemMessageNotifMessage"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFSystemMessageNotifMessage
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFSystemMessageNotifMessage()
	{
		UScriptStruct::DeferCppStructOps<FSystemMessageNotifMessage>(FName(TEXT("SystemMessageNotifMessage")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFSystemMessageNotifMessage;
	struct Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpiredAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpiredAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReadAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gift_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gift;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SystemMessageNotifMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSystemMessageNotifMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_MessageId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SystemMessageNotifMessage" },
		{ "ModuleRelativePath", "Public/SystemMessageNotifMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_MessageId = { "MessageId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSystemMessageNotifMessage, MessageId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_MessageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_MessageId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SystemMessageNotifMessage" },
		{ "ModuleRelativePath", "Public/SystemMessageNotifMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSystemMessageNotifMessage, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_ExpiredAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SystemMessageNotifMessage" },
		{ "ModuleRelativePath", "Public/SystemMessageNotifMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_ExpiredAt = { "ExpiredAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSystemMessageNotifMessage, ExpiredAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_ExpiredAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_ExpiredAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SystemMessageNotifMessage" },
		{ "ModuleRelativePath", "Public/SystemMessageNotifMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSystemMessageNotifMessage, UpdatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_UpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_UpdatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_ReadAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SystemMessageNotifMessage" },
		{ "ModuleRelativePath", "Public/SystemMessageNotifMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_ReadAt = { "ReadAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSystemMessageNotifMessage, ReadAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_ReadAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_ReadAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SystemMessageNotifMessage" },
		{ "ModuleRelativePath", "Public/SystemMessageNotifMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSystemMessageNotifMessage, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Body_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SystemMessageNotifMessage" },
		{ "ModuleRelativePath", "Public/SystemMessageNotifMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSystemMessageNotifMessage, Body), METADATA_PARAMS(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Gift_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SystemMessageNotifMessage" },
		{ "ModuleRelativePath", "Public/SystemMessageNotifMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Gift = { "Gift", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSystemMessageNotifMessage, Gift), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Gift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Gift_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_MessageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_ExpiredAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_UpdatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_ReadAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::NewProp_Gift,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"SystemMessageNotifMessage",
		sizeof(FSystemMessageNotifMessage),
		alignof(FSystemMessageNotifMessage),
		Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSystemMessageNotifMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SystemMessageNotifMessage"), sizeof(FSystemMessageNotifMessage), Get_Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSystemMessageNotifMessage_Hash() { return 3277407558U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
