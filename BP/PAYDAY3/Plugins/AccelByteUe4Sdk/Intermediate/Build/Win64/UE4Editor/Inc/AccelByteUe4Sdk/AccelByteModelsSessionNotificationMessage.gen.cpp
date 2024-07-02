// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSessionNotificationMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSessionNotificationMessage() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsSessionNotificationMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSessionNotificationMessage"), sizeof(FAccelByteModelsSessionNotificationMessage), Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSessionNotificationMessage>()
{
	return FAccelByteModelsSessionNotificationMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSessionNotificationMessage(FAccelByteModelsSessionNotificationMessage::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSessionNotificationMessage"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionNotificationMessage
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionNotificationMessage()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSessionNotificationMessage>(FName(TEXT("AccelByteModelsSessionNotificationMessage")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionNotificationMessage;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionNotificationMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSessionNotificationMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionNotificationMessage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionNotificationMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionNotificationMessage, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Topic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionNotificationMessage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionNotificationMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionNotificationMessage, Topic), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Topic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Topic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Payload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionNotificationMessage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionNotificationMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionNotificationMessage, Payload), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Payload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_SentAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionNotificationMessage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionNotificationMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_SentAt = { "SentAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionNotificationMessage, SentAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_SentAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_SentAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_Payload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::NewProp_SentAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsSessionNotificationMessage",
		sizeof(FAccelByteModelsSessionNotificationMessage),
		alignof(FAccelByteModelsSessionNotificationMessage),
		Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSessionNotificationMessage"), sizeof(FAccelByteModelsSessionNotificationMessage), Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionNotificationMessage_Hash() { return 844858791U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
