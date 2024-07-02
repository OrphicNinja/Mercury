// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsActionUpdateSystemMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsActionUpdateSystemMessage() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteOptionalBool();
// End Cross Module References
class UScriptStruct* FAccelByteModelsActionUpdateSystemMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsActionUpdateSystemMessage"), sizeof(FAccelByteModelsActionUpdateSystemMessage), Get_Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsActionUpdateSystemMessage>()
{
	return FAccelByteModelsActionUpdateSystemMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage(FAccelByteModelsActionUpdateSystemMessage::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsActionUpdateSystemMessage"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsActionUpdateSystemMessage
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsActionUpdateSystemMessage()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsActionUpdateSystemMessage>(FName(TEXT("AccelByteModelsActionUpdateSystemMessage")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsActionUpdateSystemMessage;
	struct Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Read_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Read_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Read;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Keep_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keep_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Keep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsActionUpdateSystemMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsActionUpdateSystemMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsActionUpdateSystemMessage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsActionUpdateSystemMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsActionUpdateSystemMessage, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Read_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Read_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsActionUpdateSystemMessage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsActionUpdateSystemMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Read = { "Read", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsActionUpdateSystemMessage, Read), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteOptionalBool, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Read_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Read_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Keep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Keep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsActionUpdateSystemMessage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsActionUpdateSystemMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Keep = { "Keep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsActionUpdateSystemMessage, Keep), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteOptionalBool, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Keep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Keep_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Read_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Read,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Keep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::NewProp_Keep,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsActionUpdateSystemMessage",
		sizeof(FAccelByteModelsActionUpdateSystemMessage),
		alignof(FAccelByteModelsActionUpdateSystemMessage),
		Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsActionUpdateSystemMessage"), sizeof(FAccelByteModelsActionUpdateSystemMessage), Get_Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsActionUpdateSystemMessage_Hash() { return 1015769391U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
