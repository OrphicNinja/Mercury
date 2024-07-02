// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteNetworkUtilities/Public/AccelByteSignalingMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteSignalingMessage() {}
// Cross Module References
	ACCELBYTENETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteSignalingMessage();
	UPackage* Z_Construct_UPackage__Script_AccelByteNetworkUtilities();
	ACCELBYTENETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer();
// End Cross Module References
class UScriptStruct* FAccelByteSignalingMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTENETWORKUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteSignalingMessage, Z_Construct_UPackage__Script_AccelByteNetworkUtilities(), TEXT("AccelByteSignalingMessage"), sizeof(FAccelByteSignalingMessage), Get_Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Hash());
	}
	return Singleton;
}
template<> ACCELBYTENETWORKUTILITIES_API UScriptStruct* StaticStruct<FAccelByteSignalingMessage>()
{
	return FAccelByteSignalingMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteSignalingMessage(FAccelByteSignalingMessage::StaticStruct, TEXT("/Script/AccelByteNetworkUtilities"), TEXT("AccelByteSignalingMessage"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteNetworkUtilities_StaticRegisterNativesFAccelByteSignalingMessage
{
	FScriptStruct_AccelByteNetworkUtilities_StaticRegisterNativesFAccelByteSignalingMessage()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteSignalingMessage>(FName(TEXT("AccelByteSignalingMessage")));
	}
} ScriptStruct_AccelByteNetworkUtilities_StaticRegisterNativesFAccelByteSignalingMessage;
	struct Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TurnServer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteSignalingMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingMessage" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteSignalingMessage, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Channel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingMessage" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteSignalingMessage, Channel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingMessage" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteSignalingMessage, Data), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_TurnServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingMessage" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_TurnServer = { "TurnServer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteSignalingMessage, TurnServer), Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_TurnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_TurnServer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_TurnServer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteNetworkUtilities,
		nullptr,
		&NewStructOps,
		"AccelByteSignalingMessage",
		sizeof(FAccelByteSignalingMessage),
		alignof(FAccelByteSignalingMessage),
		Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteSignalingMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteNetworkUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteSignalingMessage"), sizeof(FAccelByteSignalingMessage), Get_Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Hash() { return 3603356598U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
