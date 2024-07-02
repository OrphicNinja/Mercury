// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ItemDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDetails() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FItemDetails();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References
class UScriptStruct* FItemDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FItemDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemDetails, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ItemDetails"), sizeof(FItemDetails), Get_Z_Construct_UScriptStruct_FItemDetails_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FItemDetails>()
{
	return FItemDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemDetails(FItemDetails::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("ItemDetails"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFItemDetails
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFItemDetails()
	{
		UScriptStruct::DeferCppStructOps<FItemDetails>(FName(TEXT("ItemDetails")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFItemDetails;
	struct Z_Construct_UScriptStruct_FItemDetails_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemDetails" },
		{ "ModuleRelativePath", "Public/ItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDetails, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemDetails" },
		{ "ModuleRelativePath", "Public/ItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDetails, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Quantity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Quantity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"ItemDetails",
		sizeof(FItemDetails),
		alignof(FItemDetails),
		Z_Construct_UScriptStruct_FItemDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemDetails"), sizeof(FItemDetails), Get_Z_Construct_UScriptStruct_FItemDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemDetails_Hash() { return 2796164450U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
