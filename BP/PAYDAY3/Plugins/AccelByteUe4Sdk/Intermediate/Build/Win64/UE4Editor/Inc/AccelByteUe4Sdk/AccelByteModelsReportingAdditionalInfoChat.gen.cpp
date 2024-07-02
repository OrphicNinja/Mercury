// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsReportingAdditionalInfoChat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsReportingAdditionalInfoChat() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsReportingAdditionalInfoChat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsReportingAdditionalInfoChat"), sizeof(FAccelByteModelsReportingAdditionalInfoChat), Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsReportingAdditionalInfoChat>()
{
	return FAccelByteModelsReportingAdditionalInfoChat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat(FAccelByteModelsReportingAdditionalInfoChat::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsReportingAdditionalInfoChat"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsReportingAdditionalInfoChat
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsReportingAdditionalInfoChat()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsReportingAdditionalInfoChat>(FName(TEXT("AccelByteModelsReportingAdditionalInfoChat")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsReportingAdditionalInfoChat;
	struct Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatCreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChatCreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopicId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TopicId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsReportingAdditionalInfoChat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsReportingAdditionalInfoChat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::NewProp_ChatCreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsReportingAdditionalInfoChat" },
		{ "ModuleRelativePath", "Public/AccelByteModelsReportingAdditionalInfoChat.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::NewProp_ChatCreatedAt = { "ChatCreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsReportingAdditionalInfoChat, ChatCreatedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::NewProp_ChatCreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::NewProp_ChatCreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::NewProp_TopicId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsReportingAdditionalInfoChat" },
		{ "ModuleRelativePath", "Public/AccelByteModelsReportingAdditionalInfoChat.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::NewProp_TopicId = { "TopicId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsReportingAdditionalInfoChat, TopicId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::NewProp_TopicId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::NewProp_TopicId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::NewProp_ChatCreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::NewProp_TopicId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsReportingAdditionalInfoChat",
		sizeof(FAccelByteModelsReportingAdditionalInfoChat),
		alignof(FAccelByteModelsReportingAdditionalInfoChat),
		Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsReportingAdditionalInfoChat"), sizeof(FAccelByteModelsReportingAdditionalInfoChat), Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat_Hash() { return 2747027286U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
