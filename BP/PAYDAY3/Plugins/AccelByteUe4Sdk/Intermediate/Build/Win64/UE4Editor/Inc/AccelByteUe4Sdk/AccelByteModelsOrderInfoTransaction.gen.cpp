// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsOrderInfoTransaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsOrderInfoTransaction() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary();
// End Cross Module References
class UScriptStruct* FAccelByteModelsOrderInfoTransaction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsOrderInfoTransaction"), sizeof(FAccelByteModelsOrderInfoTransaction), Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsOrderInfoTransaction>()
{
	return FAccelByteModelsOrderInfoTransaction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsOrderInfoTransaction(FAccelByteModelsOrderInfoTransaction::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsOrderInfoTransaction"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsOrderInfoTransaction
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsOrderInfoTransaction()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsOrderInfoTransaction>(FName(TEXT("AccelByteModelsOrderInfoTransaction")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsOrderInfoTransaction;
	struct Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vat_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SalesTax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SalesTax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Provider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaymentProviderFee_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PaymentProviderFee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaymentMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PaymentMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaymentMethodFee_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PaymentMethodFee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MerchantId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MerchantId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalTransactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalTransactionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalStatusCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalStatusCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionEndTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsOrderInfoTransaction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, TransactionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Amount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Vat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Vat = { "Vat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, Vat), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Vat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Vat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_SalesTax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_SalesTax = { "SalesTax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, SalesTax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_SalesTax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_SalesTax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Currency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, Currency), Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Currency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Provider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, Provider), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Provider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentProviderFee_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentProviderFee = { "PaymentProviderFee", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, PaymentProviderFee), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentProviderFee_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentProviderFee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentMethod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentMethod = { "PaymentMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, PaymentMethod), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentMethodFee_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentMethodFee = { "PaymentMethodFee", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, PaymentMethodFee), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentMethodFee_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentMethodFee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_MerchantId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_MerchantId = { "MerchantId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, MerchantId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_MerchantId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_MerchantId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalTransactionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalTransactionId = { "ExternalTransactionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, ExternalTransactionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalTransactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalTransactionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalStatusCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalStatusCode = { "ExternalStatusCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, ExternalStatusCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalStatusCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalStatusCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalMessage = { "ExternalMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, ExternalMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionStartTime = { "TransactionStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, TransactionStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionEndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoTransaction" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoTransaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionEndTime = { "TransactionEndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoTransaction, TransactionEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionEndTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Vat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_SalesTax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_Provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentProviderFee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_PaymentMethodFee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_MerchantId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalTransactionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalStatusCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_ExternalMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::NewProp_TransactionEndTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsOrderInfoTransaction",
		sizeof(FAccelByteModelsOrderInfoTransaction),
		alignof(FAccelByteModelsOrderInfoTransaction),
		Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsOrderInfoTransaction"), sizeof(FAccelByteModelsOrderInfoTransaction), Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoTransaction_Hash() { return 1751549540U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
