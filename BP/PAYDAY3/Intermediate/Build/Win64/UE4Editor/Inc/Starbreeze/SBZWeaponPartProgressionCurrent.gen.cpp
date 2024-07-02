// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPartProgressionCurrent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPartProgressionCurrent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponPartApplyStatus();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponPartLockReason();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemCurrencyType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FSBZWeaponPartProgressionCurrent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponPartProgressionCurrent"), sizeof(FSBZWeaponPartProgressionCurrent), Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponPartProgressionCurrent>()
{
	return FSBZWeaponPartProgressionCurrent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponPartProgressionCurrent(FSBZWeaponPartProgressionCurrent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponPartProgressionCurrent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPartProgressionCurrent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPartProgressionCurrent()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponPartProgressionCurrent>(FName(TEXT("SBZWeaponPartProgressionCurrent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPartProgressionCurrent;
	struct Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProgressionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPart;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponPartApplyStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartApplyStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeaponPartApplyStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponPartLockReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartLockReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeaponPartLockReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyCode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscountAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscountPercentage;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponPartProgressionCurrent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_ProgressionLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_ProgressionLevel = { "ProgressionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, ProgressionLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_ProgressionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_ProgressionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPart = { "WeaponPart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, WeaponPart), Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPart_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartApplyStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartApplyStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartApplyStatus = { "WeaponPartApplyStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, WeaponPartApplyStatus), Z_Construct_UEnum_Starbreeze_ESBZWeaponPartApplyStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartApplyStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartApplyStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartLockReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartLockReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartLockReason = { "WeaponPartLockReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, WeaponPartLockReason), Z_Construct_UEnum_Starbreeze_ESBZWeaponPartLockReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartLockReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartLockReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_Price_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, Price), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_Price_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, CurrencyCode), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountAmount = { "DiscountAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, DiscountAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountPercentage = { "DiscountPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, DiscountPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountedPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountedPrice = { "DiscountedPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, DiscountedPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountedPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountedPrice_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, CurrencyType), Z_Construct_UEnum_Starbreeze_ESBZItemCurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_PurchaseAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_PurchaseAt = { "PurchaseAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, PurchaseAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_PurchaseAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_PurchaseAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_ExpireAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_ExpireAt = { "ExpireAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, ExpireAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_ExpireAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_ExpireAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountPurchaseAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountPurchaseAt = { "DiscountPurchaseAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, DiscountPurchaseAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountPurchaseAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountPurchaseAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountExpireAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionCurrent" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountExpireAt = { "DiscountExpireAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionCurrent, DiscountExpireAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountExpireAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountExpireAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_ProgressionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartApplyStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartApplyStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartLockReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_WeaponPartLockReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyCode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountedPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_PurchaseAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_ExpireAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountPurchaseAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::NewProp_DiscountExpireAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponPartProgressionCurrent",
		sizeof(FSBZWeaponPartProgressionCurrent),
		alignof(FSBZWeaponPartProgressionCurrent),
		Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponPartProgressionCurrent"), sizeof(FSBZWeaponPartProgressionCurrent), Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent_Hash() { return 258416040U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
