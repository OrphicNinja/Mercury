// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPartProgressionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPartProgressionData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZWeaponPartProgressionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponPartProgressionData"), sizeof(FSBZWeaponPartProgressionData), Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponPartProgressionData>()
{
	return FSBZWeaponPartProgressionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponPartProgressionData(FSBZWeaponPartProgressionData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponPartProgressionData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPartProgressionData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPartProgressionData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponPartProgressionData>(FName(TEXT("SBZWeaponPartProgressionData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPartProgressionData;
	struct Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttachmentItemSku;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponPartProgressionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::NewProp_WeaponPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionData" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::NewProp_WeaponPart = { "WeaponPart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionData, WeaponPart), Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::NewProp_WeaponPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::NewProp_WeaponPart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::NewProp_AttachmentItemSku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPartProgressionData" },
		{ "ModuleRelativePath", "Public/SBZWeaponPartProgressionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::NewProp_AttachmentItemSku = { "AttachmentItemSku", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPartProgressionData, AttachmentItemSku), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::NewProp_AttachmentItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::NewProp_AttachmentItemSku_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::NewProp_WeaponPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::NewProp_AttachmentItemSku,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponPartProgressionData",
		sizeof(FSBZWeaponPartProgressionData),
		alignof(FSBZWeaponPartProgressionData),
		Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponPartProgressionData"), sizeof(FSBZWeaponPartProgressionData), Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPartProgressionData_Hash() { return 1737200955U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
