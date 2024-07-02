// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsEntitlementOwnershipDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsEntitlementOwnershipDetails() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail();
// End Cross Module References
class UScriptStruct* FAccelByteModelsEntitlementOwnershipDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsEntitlementOwnershipDetails"), sizeof(FAccelByteModelsEntitlementOwnershipDetails), Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsEntitlementOwnershipDetails>()
{
	return FAccelByteModelsEntitlementOwnershipDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails(FAccelByteModelsEntitlementOwnershipDetails::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsEntitlementOwnershipDetails"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsEntitlementOwnershipDetails
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsEntitlementOwnershipDetails()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsEntitlementOwnershipDetails>(FName(TEXT("AccelByteModelsEntitlementOwnershipDetails")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsEntitlementOwnershipDetails;
	struct Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entitlements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entitlements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entitlements;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementOwnershipDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsEntitlementOwnershipDetails>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::NewProp_Entitlements_Inner = { "Entitlements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::NewProp_Entitlements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsEntitlementOwnershipDetails" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementOwnershipDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::NewProp_Entitlements = { "Entitlements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsEntitlementOwnershipDetails, Entitlements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::NewProp_Entitlements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::NewProp_Entitlements_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::NewProp_Entitlements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::NewProp_Entitlements,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsEntitlementOwnershipDetails",
		sizeof(FAccelByteModelsEntitlementOwnershipDetails),
		alignof(FAccelByteModelsEntitlementOwnershipDetails),
		Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsEntitlementOwnershipDetails"), sizeof(FAccelByteModelsEntitlementOwnershipDetails), Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetails_Hash() { return 3620308515U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
