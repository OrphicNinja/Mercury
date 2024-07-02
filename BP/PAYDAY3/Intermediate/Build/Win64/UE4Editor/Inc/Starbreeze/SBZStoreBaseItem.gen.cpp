// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStoreBaseItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStoreBaseItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZStoreItemPlatform();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemLockReason();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemCurrencyType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVendorData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemRarity();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreItemUICategory();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemCategory();
// End Cross Module References
class UScriptStruct* FSBZStoreBaseItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZStoreBaseItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZStoreBaseItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZStoreBaseItem"), sizeof(FSBZStoreBaseItem), Get_Z_Construct_UScriptStruct_FSBZStoreBaseItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZStoreBaseItem>()
{
	return FSBZStoreBaseItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZStoreBaseItem(FSBZStoreBaseItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZStoreBaseItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStoreBaseItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStoreBaseItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZStoreBaseItem>(FName(TEXT("SBZStoreBaseItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZStoreBaseItem;
	struct Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyCode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealMoneyCurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RealMoneyCurrencyCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableAtInfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AvailableAtInfamyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableToBuy_MetaData[];
#endif
		static void NewProp_AvailableToBuy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AvailableToBuy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemLockReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemLockReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemLockReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCountPerUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCountPerUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PriceProgression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceProgressionGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PriceProgressionGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscountPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscountAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountedPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscountedPrice;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PurchaseAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpireAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpireAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountPurchaseAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiscountPurchaseAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountExpireAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiscountExpireAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VendorData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemRarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemRarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemRarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPremiumItem_MetaData[];
#endif
		static void NewProp_bIsPremiumItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPremiumItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInexhaustibleItem_MetaData[];
#endif
		static void NewProp_bIsInexhaustibleItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInexhaustibleItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreItemUICategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoreItemUICategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMaskOfTheWeek_MetaData[];
#endif
		static void NewProp_bIsMaskOfTheWeek_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMaskOfTheWeek;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZStoreBaseItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_Price_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, Price), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_Price_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, CurrencyCode), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyCode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, Platform), Z_Construct_UEnum_Starbreeze_ESBZStoreItemPlatform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_RealMoneyCurrencyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_RealMoneyCurrencyCode = { "RealMoneyCurrencyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, RealMoneyCurrencyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_RealMoneyCurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_RealMoneyCurrencyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_AvailableAtInfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_AvailableAtInfamyLevel = { "AvailableAtInfamyLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, AvailableAtInfamyLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_AvailableAtInfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_AvailableAtInfamyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_AvailableToBuy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_AvailableToBuy_SetBit(void* Obj)
	{
		((FSBZStoreBaseItem*)Obj)->AvailableToBuy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_AvailableToBuy = { "AvailableToBuy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZStoreBaseItem), &Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_AvailableToBuy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_AvailableToBuy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_AvailableToBuy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemLockReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemLockReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemLockReason = { "ItemLockReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, ItemLockReason), Z_Construct_UEnum_Starbreeze_ESBZItemLockReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemLockReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemLockReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_MaxCountPerUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_MaxCountPerUser = { "MaxCountPerUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, MaxCountPerUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_MaxCountPerUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_MaxCountPerUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PriceProgression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PriceProgression = { "PriceProgression", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, PriceProgression), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PriceProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PriceProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PriceProgressionGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PriceProgressionGroup = { "PriceProgressionGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, PriceProgressionGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PriceProgressionGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PriceProgressionGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountPercentage = { "DiscountPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, DiscountPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountAmount = { "DiscountAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, DiscountAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountedPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountedPrice = { "DiscountedPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, DiscountedPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountedPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountedPrice_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, CurrencyType), Z_Construct_UEnum_Starbreeze_ESBZItemCurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PurchaseAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PurchaseAt = { "PurchaseAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, PurchaseAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PurchaseAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PurchaseAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ExpireAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ExpireAt = { "ExpireAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, ExpireAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ExpireAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ExpireAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountPurchaseAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountPurchaseAt = { "DiscountPurchaseAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, DiscountPurchaseAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountPurchaseAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountPurchaseAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountExpireAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountExpireAt = { "DiscountExpireAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, DiscountExpireAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountExpireAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountExpireAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_VendorData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_VendorData = { "VendorData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, VendorData), Z_Construct_UClass_USBZVendorData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_VendorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_VendorData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemRarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemRarity = { "ItemRarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, ItemRarity), Z_Construct_UEnum_Starbreeze_ESBZItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemRarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsPremiumItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsPremiumItem_SetBit(void* Obj)
	{
		((FSBZStoreBaseItem*)Obj)->bIsPremiumItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsPremiumItem = { "bIsPremiumItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZStoreBaseItem), &Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsPremiumItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsPremiumItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsPremiumItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsInexhaustibleItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsInexhaustibleItem_SetBit(void* Obj)
	{
		((FSBZStoreBaseItem*)Obj)->bIsInexhaustibleItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsInexhaustibleItem = { "bIsInexhaustibleItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZStoreBaseItem), &Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsInexhaustibleItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsInexhaustibleItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsInexhaustibleItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_StoreItemUICategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_StoreItemUICategory = { "StoreItemUICategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, StoreItemUICategory), Z_Construct_UScriptStruct_FSBZStoreItemUICategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_StoreItemUICategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_StoreItemUICategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemCategory = { "ItemCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreBaseItem, ItemCategory), Z_Construct_UEnum_Starbreeze_ESBZItemCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsMaskOfTheWeek_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreBaseItem" },
		{ "ModuleRelativePath", "Public/SBZStoreBaseItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsMaskOfTheWeek_SetBit(void* Obj)
	{
		((FSBZStoreBaseItem*)Obj)->bIsMaskOfTheWeek = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsMaskOfTheWeek = { "bIsMaskOfTheWeek", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZStoreBaseItem), &Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsMaskOfTheWeek_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsMaskOfTheWeek_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsMaskOfTheWeek_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyCode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_RealMoneyCurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_AvailableAtInfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_AvailableToBuy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemLockReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemLockReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_MaxCountPerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PriceProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PriceProgressionGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountedPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_PurchaseAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ExpireAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountPurchaseAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_DiscountExpireAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_VendorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemRarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsPremiumItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsInexhaustibleItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_StoreItemUICategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_ItemCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::NewProp_bIsMaskOfTheWeek,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZStoreBaseItem",
		sizeof(FSBZStoreBaseItem),
		alignof(FSBZStoreBaseItem),
		Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZStoreBaseItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZStoreBaseItem"), sizeof(FSBZStoreBaseItem), Get_Z_Construct_UScriptStruct_FSBZStoreBaseItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZStoreBaseItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZStoreBaseItem_Hash() { return 866439407U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
