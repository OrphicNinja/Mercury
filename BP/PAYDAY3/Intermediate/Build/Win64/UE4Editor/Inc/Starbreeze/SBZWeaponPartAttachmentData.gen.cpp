// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPartAttachmentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPartAttachmentData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment();
// End Cross Module References
class UScriptStruct* FSBZWeaponPartAttachmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponPartAttachmentData"), sizeof(FSBZWeaponPartAttachmentData), Get_Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponPartAttachmentData>()
{
	return FSBZWeaponPartAttachmentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponPartAttachmentData(FSBZWeaponPartAttachmentData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponPartAttachmentData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPartAttachmentData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPartAttachmentData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponPartAttachmentData>(FName(TEXT("SBZWeaponPartAttachmentData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPartAttachmentData;
	struct Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PurchasedWeaponPartAttachmentArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchasedWeaponPartAttachmentArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PurchasedWeaponPartAttachmentArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartAttachmentData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponPartAttachmentData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::NewProp_PurchasedWeaponPartAttachmentArray_Inner = { "PurchasedWeaponPartAttachmentArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::NewProp_PurchasedWeaponPartAttachmentArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartAttachmentData" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::NewProp_PurchasedWeaponPartAttachmentArray = { "PurchasedWeaponPartAttachmentArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartAttachmentData, PurchasedWeaponPartAttachmentArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::NewProp_PurchasedWeaponPartAttachmentArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::NewProp_PurchasedWeaponPartAttachmentArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::NewProp_PurchasedWeaponPartAttachmentArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::NewProp_PurchasedWeaponPartAttachmentArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponPartAttachmentData",
		sizeof(FSBZWeaponPartAttachmentData),
		alignof(FSBZWeaponPartAttachmentData),
		Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponPartAttachmentData"), sizeof(FSBZWeaponPartAttachmentData), Get_Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData_Hash() { return 3538037821U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
