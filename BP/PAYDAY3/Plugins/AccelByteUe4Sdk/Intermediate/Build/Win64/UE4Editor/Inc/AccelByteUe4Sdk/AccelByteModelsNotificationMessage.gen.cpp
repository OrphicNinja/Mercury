// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsNotificationMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsNotificationMessage() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsNotificationMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsNotificationMessage"), sizeof(FAccelByteModelsNotificationMessage), Get_Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsNotificationMessage>()
{
	return FAccelByteModelsNotificationMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsNotificationMessage(FAccelByteModelsNotificationMessage::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsNotificationMessage"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsNotificationMessage
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsNotificationMessage()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsNotificationMessage>(FName(TEXT("AccelByteModelsNotificationMessage")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsNotificationMessage;
	struct Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Topic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Topic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Payload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SentAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsNotificationMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsNotificationMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsNotificationMessage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsNotificationMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsNotificationMessage, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_From_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsNotificationMessage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsNotificationMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsNotificationMessage, From), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_From_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_To_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsNotificationMessage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsNotificationMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsNotificationMessage, To), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_To_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Topic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsNotificationMessage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsNotificationMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsNotificationMessage, Topic), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Topic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Topic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Payload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsNotificationMessage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsNotificationMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsNotificationMessage, Payload), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Payload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_SentAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsNotificationMessage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsNotificationMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_SentAt = { "SentAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsNotificationMessage, SentAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_SentAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_SentAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_Payload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::NewProp_SentAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsNotificationMessage",
		sizeof(FAccelByteModelsNotificationMessage),
		alignof(FAccelByteModelsNotificationMessage),
		Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsNotificationMessage"), sizeof(FAccelByteModelsNotificationMessage), Get_Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsNotificationMessage_Hash() { return 971789876U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
