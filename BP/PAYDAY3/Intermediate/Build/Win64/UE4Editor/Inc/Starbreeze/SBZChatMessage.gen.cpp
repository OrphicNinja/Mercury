// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChatMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChatMessage() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChatMessage();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZChatType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
class UScriptStruct* FSBZChatMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZChatMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZChatMessage, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZChatMessage"), sizeof(FSBZChatMessage), Get_Z_Construct_UScriptStruct_FSBZChatMessage_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZChatMessage>()
{
	return FSBZChatMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZChatMessage(FSBZChatMessage::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZChatMessage"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChatMessage
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChatMessage()
	{
		UScriptStruct::DeferCppStructOps<FSBZChatMessage>(FName(TEXT("SBZChatMessage")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZChatMessage;
	struct Z_Construct_UScriptStruct_FSBZChatMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FromString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FromId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChatMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZChatMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZChatMessage>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatMessage" },
		{ "ModuleRelativePath", "Public/SBZChatMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChatMessage, Type), Z_Construct_UEnum_Starbreeze_ESBZChatType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_FromString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatMessage" },
		{ "ModuleRelativePath", "Public/SBZChatMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_FromString = { "FromString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChatMessage, FromString), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_FromString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_FromString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_ToString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatMessage" },
		{ "ModuleRelativePath", "Public/SBZChatMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_ToString = { "ToString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChatMessage, ToString), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_ToString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_ToString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_FromId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatMessage" },
		{ "ModuleRelativePath", "Public/SBZChatMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_FromId = { "FromId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChatMessage, FromId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_FromId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_FromId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_ToId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatMessage" },
		{ "ModuleRelativePath", "Public/SBZChatMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_ToId = { "ToId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChatMessage, ToId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_ToId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_ToId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatMessage" },
		{ "ModuleRelativePath", "Public/SBZChatMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChatMessage, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_From_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatMessage" },
		{ "ModuleRelativePath", "Public/SBZChatMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChatMessage, From), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_From_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_To_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatMessage" },
		{ "ModuleRelativePath", "Public/SBZChatMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChatMessage, To), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_To_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_FromString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_ToString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_FromId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_ToId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChatMessage_Statics::NewProp_To,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZChatMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZChatMessage",
		sizeof(FSBZChatMessage),
		alignof(FSBZChatMessage),
		Z_Construct_UScriptStruct_FSBZChatMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChatMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZChatMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZChatMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZChatMessage"), sizeof(FSBZChatMessage), Get_Z_Construct_UScriptStruct_FSBZChatMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZChatMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZChatMessage_Hash() { return 3198524513U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
