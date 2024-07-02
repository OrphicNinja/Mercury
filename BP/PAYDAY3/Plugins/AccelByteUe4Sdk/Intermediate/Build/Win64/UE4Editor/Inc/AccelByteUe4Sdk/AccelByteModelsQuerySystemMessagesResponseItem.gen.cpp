// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsQuerySystemMessagesResponseItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsQuerySystemMessagesResponseItem() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsQuerySystemMessagesResponseItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsQuerySystemMessagesResponseItem"), sizeof(FAccelByteModelsQuerySystemMessagesResponseItem), Get_Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsQuerySystemMessagesResponseItem>()
{
	return FAccelByteModelsQuerySystemMessagesResponseItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem(FAccelByteModelsQuerySystemMessagesResponseItem::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsQuerySystemMessagesResponseItem"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsQuerySystemMessagesResponseItem
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsQuerySystemMessagesResponseItem()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsQuerySystemMessagesResponseItem>(FName(TEXT("AccelByteModelsQuerySystemMessagesResponseItem")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsQuerySystemMessagesResponseItem;
	struct Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpiredAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpiredAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReadAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuerySystemMessagesResponseItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsQuerySystemMessagesResponseItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsQuerySystemMessagesResponseItem" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuerySystemMessagesResponseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsQuerySystemMessagesResponseItem, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsQuerySystemMessagesResponseItem" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuerySystemMessagesResponseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsQuerySystemMessagesResponseItem, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsQuerySystemMessagesResponseItem" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuerySystemMessagesResponseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsQuerySystemMessagesResponseItem, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsQuerySystemMessagesResponseItem" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuerySystemMessagesResponseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsQuerySystemMessagesResponseItem, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsQuerySystemMessagesResponseItem" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuerySystemMessagesResponseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsQuerySystemMessagesResponseItem, UpdatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_UpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_UpdatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_ExpiredAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsQuerySystemMessagesResponseItem" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuerySystemMessagesResponseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_ExpiredAt = { "ExpiredAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsQuerySystemMessagesResponseItem, ExpiredAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_ExpiredAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_ExpiredAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_ReadAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsQuerySystemMessagesResponseItem" },
		{ "ModuleRelativePath", "Public/AccelByteModelsQuerySystemMessagesResponseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_ReadAt = { "ReadAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsQuerySystemMessagesResponseItem, ReadAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_ReadAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_ReadAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_UpdatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_ExpiredAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::NewProp_ReadAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsQuerySystemMessagesResponseItem",
		sizeof(FAccelByteModelsQuerySystemMessagesResponseItem),
		alignof(FAccelByteModelsQuerySystemMessagesResponseItem),
		Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsQuerySystemMessagesResponseItem"), sizeof(FAccelByteModelsQuerySystemMessagesResponseItem), Get_Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsQuerySystemMessagesResponseItem_Hash() { return 3801653422U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
