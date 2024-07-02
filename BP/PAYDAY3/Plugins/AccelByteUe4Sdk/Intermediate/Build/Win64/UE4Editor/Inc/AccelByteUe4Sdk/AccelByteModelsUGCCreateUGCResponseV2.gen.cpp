// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUGCCreateUGCResponseV2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUGCCreateUGCResponseV2() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCPayloadUrl();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FAccelByteModelsUGCCreateUGCResponseV2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUGCCreateUGCResponseV2"), sizeof(FAccelByteModelsUGCCreateUGCResponseV2), Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUGCCreateUGCResponseV2>()
{
	return FAccelByteModelsUGCCreateUGCResponseV2::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2(FAccelByteModelsUGCCreateUGCResponseV2::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUGCCreateUGCResponseV2"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCCreateUGCResponseV2
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCCreateUGCResponseV2()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUGCCreateUGCResponseV2>(FName(TEXT("AccelByteModelsUGCCreateUGCResponseV2")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCCreateUGCResponseV2;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChannelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHidden_MetaData[];
#endif
		static void NewProp_IsHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOfficial_MetaData[];
#endif
		static void NewProp_IsOfficial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOfficial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNamespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParentNamespace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PayloadUrl_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PayloadUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PayloadUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShareCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShareCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomAttributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUGCCreateUGCResponseV2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ChannelId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, ChannelId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ChannelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ContentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, ContentType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ContentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_CreatedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_CreatedTime = { "CreatedTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, CreatedTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_CreatedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_CreatedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_FileExtension_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_FileExtension = { "FileExtension", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, FileExtension), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_FileExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_FileExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_FileLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_FileLocation = { "FileLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, FileLocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_FileLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_FileLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsHidden_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsHidden_SetBit(void* Obj)
	{
		((FAccelByteModelsUGCCreateUGCResponseV2*)Obj)->IsHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsHidden = { "IsHidden", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsUGCCreateUGCResponseV2), &Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsHidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsOfficial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsOfficial_SetBit(void* Obj)
	{
		((FAccelByteModelsUGCCreateUGCResponseV2*)Obj)->IsOfficial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsOfficial = { "IsOfficial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsUGCCreateUGCResponseV2), &Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsOfficial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsOfficial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsOfficial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ParentNamespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ParentNamespace = { "ParentNamespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, ParentNamespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ParentNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ParentNamespace_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_PayloadUrl_Inner = { "PayloadUrl", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsUGCPayloadUrl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_PayloadUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_PayloadUrl = { "PayloadUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, PayloadUrl), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_PayloadUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_PayloadUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ShareCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ShareCode = { "ShareCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, ShareCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ShareCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ShareCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_SubType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_SubType = { "SubType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, SubType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_SubType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_SubType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_UpdatedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_UpdatedTime = { "UpdatedTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, UpdatedTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_UpdatedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_UpdatedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_CustomAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCCreateUGCResponseV2" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCCreateUGCResponseV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_CustomAttributes = { "CustomAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCCreateUGCResponseV2, CustomAttributes), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_CustomAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_CustomAttributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ContentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_CreatedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_FileExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_FileLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_IsOfficial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ParentNamespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_PayloadUrl_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_PayloadUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_ShareCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_SubType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_UpdatedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::NewProp_CustomAttributes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsUGCCreateUGCResponseV2",
		sizeof(FAccelByteModelsUGCCreateUGCResponseV2),
		alignof(FAccelByteModelsUGCCreateUGCResponseV2),
		Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUGCCreateUGCResponseV2"), sizeof(FAccelByteModelsUGCCreateUGCResponseV2), Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCCreateUGCResponseV2_Hash() { return 3060896963U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
