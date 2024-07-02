// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPurchasedWeaponPartAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPurchasedWeaponPartAttachment() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FSBZPurchasedWeaponPartAttachment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPurchasedWeaponPartAttachment"), sizeof(FSBZPurchasedWeaponPartAttachment), Get_Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPurchasedWeaponPartAttachment>()
{
	return FSBZPurchasedWeaponPartAttachment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPurchasedWeaponPartAttachment(FSBZPurchasedWeaponPartAttachment::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPurchasedWeaponPartAttachment"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPurchasedWeaponPartAttachment
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPurchasedWeaponPartAttachment()
	{
		UScriptStruct::DeferCppStructOps<FSBZPurchasedWeaponPartAttachment>(FName(TEXT("SBZPurchasedWeaponPartAttachment")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPurchasedWeaponPartAttachment;
	struct Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartAttachmentSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponPartAttachmentSku;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseWeaponEntitlementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseWeaponEntitlementId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPurchasedWeaponPartAttachment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPurchasedWeaponPartAttachment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::NewProp_WeaponPartAttachmentSku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPurchasedWeaponPartAttachment" },
		{ "ModuleRelativePath", "Public/SBZPurchasedWeaponPartAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::NewProp_WeaponPartAttachmentSku = { "WeaponPartAttachmentSku", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPurchasedWeaponPartAttachment, WeaponPartAttachmentSku), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::NewProp_WeaponPartAttachmentSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::NewProp_WeaponPartAttachmentSku_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::NewProp_BaseWeaponEntitlementId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPurchasedWeaponPartAttachment" },
		{ "ModuleRelativePath", "Public/SBZPurchasedWeaponPartAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::NewProp_BaseWeaponEntitlementId = { "BaseWeaponEntitlementId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPurchasedWeaponPartAttachment, BaseWeaponEntitlementId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::NewProp_BaseWeaponEntitlementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::NewProp_BaseWeaponEntitlementId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::NewProp_WeaponPartAttachmentSku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::NewProp_BaseWeaponEntitlementId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPurchasedWeaponPartAttachment",
		sizeof(FSBZPurchasedWeaponPartAttachment),
		alignof(FSBZPurchasedWeaponPartAttachment),
		Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPurchasedWeaponPartAttachment"), sizeof(FSBZPurchasedWeaponPartAttachment), Get_Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPurchasedWeaponPartAttachment_Hash() { return 1393032292U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
