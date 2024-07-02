// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsChatV2GroupTopicCreatedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsChatV2GroupTopicCreatedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsChatV2GroupTopicCreatedPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsChatV2GroupTopicCreatedPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsChatV2GroupTopicCreatedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsChatV2GroupTopicCreatedPayload"), sizeof(FAccelByteModelsChatV2GroupTopicCreatedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsChatV2GroupTopicCreatedPayload>()
{
	return FAccelByteModelsChatV2GroupTopicCreatedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload(FAccelByteModelsChatV2GroupTopicCreatedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsChatV2GroupTopicCreatedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatV2GroupTopicCreatedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatV2GroupTopicCreatedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsChatV2GroupTopicCreatedPayload>(FName(TEXT("AccelByteModelsChatV2GroupTopicCreatedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatV2GroupTopicCreatedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Members_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Members;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Admins_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Admins_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Admins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsJoinable_MetaData[];
#endif
		static void NewProp_IsJoinable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsJoinable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatV2GroupTopicCreatedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsChatV2GroupTopicCreatedPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatV2GroupTopicCreatedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatV2GroupTopicCreatedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatV2GroupTopicCreatedPayload, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatV2GroupTopicCreatedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatV2GroupTopicCreatedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatV2GroupTopicCreatedPayload, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Members_ElementProp = { "Members", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Members_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatV2GroupTopicCreatedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatV2GroupTopicCreatedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatV2GroupTopicCreatedPayload, Members), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Members_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Admins_ElementProp = { "Admins", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Admins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatV2GroupTopicCreatedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatV2GroupTopicCreatedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Admins = { "Admins", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatV2GroupTopicCreatedPayload, Admins), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Admins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Admins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_IsJoinable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatV2GroupTopicCreatedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatV2GroupTopicCreatedPayload.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_IsJoinable_SetBit(void* Obj)
	{
		((FAccelByteModelsChatV2GroupTopicCreatedPayload*)Obj)->IsJoinable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_IsJoinable = { "IsJoinable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsChatV2GroupTopicCreatedPayload), &Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_IsJoinable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_IsJoinable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_IsJoinable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Members_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Admins_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_Admins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::NewProp_IsJoinable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsChatV2GroupTopicCreatedPayload",
		sizeof(FAccelByteModelsChatV2GroupTopicCreatedPayload),
		alignof(FAccelByteModelsChatV2GroupTopicCreatedPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsChatV2GroupTopicCreatedPayload"), sizeof(FAccelByteModelsChatV2GroupTopicCreatedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupTopicCreatedPayload_Hash() { return 2208902200U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
