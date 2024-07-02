// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsChatV2GroupChatModeratorMutedUserPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsChatV2GroupChatModeratorMutedUserPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsChatV2GroupChatModeratorMutedUserPayload"), sizeof(FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload>()
{
	return FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload(FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsChatV2GroupChatModeratorMutedUserPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatV2GroupChatModeratorMutedUserPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatV2GroupChatModeratorMutedUserPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload>(FName(TEXT("AccelByteModelsChatV2GroupChatModeratorMutedUserPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatV2GroupChatModeratorMutedUserPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModeratorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModeratorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MutedUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MutedUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatV2GroupChatModeratorMutedUserPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_GroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatV2GroupChatModeratorMutedUserPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatV2GroupChatModeratorMutedUserPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload, GroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_GroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_ModeratorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatV2GroupChatModeratorMutedUserPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatV2GroupChatModeratorMutedUserPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_ModeratorId = { "ModeratorId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload, ModeratorId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_ModeratorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_ModeratorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_MutedUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatV2GroupChatModeratorMutedUserPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatV2GroupChatModeratorMutedUserPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_MutedUserId = { "MutedUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload, MutedUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_MutedUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_MutedUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_GroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_ModeratorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::NewProp_MutedUserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsChatV2GroupChatModeratorMutedUserPayload",
		sizeof(FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload),
		alignof(FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsChatV2GroupChatModeratorMutedUserPayload"), sizeof(FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2GroupChatModeratorMutedUserPayload_Hash() { return 244539630U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
