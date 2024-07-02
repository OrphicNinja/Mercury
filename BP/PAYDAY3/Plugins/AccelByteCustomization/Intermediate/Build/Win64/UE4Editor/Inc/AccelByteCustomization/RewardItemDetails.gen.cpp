// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/RewardItemDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewardItemDetails() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FRewardItemDetails();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References
class UScriptStruct* FRewardItemDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FRewardItemDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRewardItemDetails, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("RewardItemDetails"), sizeof(FRewardItemDetails), Get_Z_Construct_UScriptStruct_FRewardItemDetails_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FRewardItemDetails>()
{
	return FRewardItemDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRewardItemDetails(FRewardItemDetails::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("RewardItemDetails"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFRewardItemDetails
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFRewardItemDetails()
	{
		UScriptStruct::DeferCppStructOps<FRewardItemDetails>(FName(TEXT("RewardItemDetails")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFRewardItemDetails;
	struct Z_Construct_UScriptStruct_FRewardItemDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardItemDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RewardItemDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRewardItemDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardItemDetails" },
		{ "ModuleRelativePath", "Public/RewardItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardItemDetails, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardItemDetails" },
		{ "ModuleRelativePath", "Public/RewardItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardItemDetails, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_IsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardItemDetails" },
		{ "ModuleRelativePath", "Public/RewardItemDetails.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((FRewardItemDetails*)Obj)->IsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRewardItemDetails), &Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_IsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_IsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRewardItemDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_IsActive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRewardItemDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"RewardItemDetails",
		sizeof(FRewardItemDetails),
		alignof(FRewardItemDetails),
		Z_Construct_UScriptStruct_FRewardItemDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardItemDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardItemDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardItemDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRewardItemDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRewardItemDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RewardItemDetails"), sizeof(FRewardItemDetails), Get_Z_Construct_UScriptStruct_FRewardItemDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRewardItemDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRewardItemDetails_Hash() { return 1775515966U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
