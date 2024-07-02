// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponModificationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponModificationData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponModificationData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIWeaponStatsAsset_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponAttribute();
// End Cross Module References
class UScriptStruct* FSBZWeaponModificationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponModificationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponModificationData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponModificationData"), sizeof(FSBZWeaponModificationData), Get_Z_Construct_UScriptStruct_FSBZWeaponModificationData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponModificationData>()
{
	return FSBZWeaponModificationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponModificationData(FSBZWeaponModificationData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponModificationData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponModificationData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponModificationData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponModificationData>(FName(TEXT("SBZWeaponModificationData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponModificationData;
	struct Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponStatsAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_WeaponStatsAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressorDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SuppressorDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MagazineDisplayName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeIdentifierMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttributeIdentifierMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttributeIdentifierMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeIdentifierMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AttributeIdentifierMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponModificationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponModificationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_WeaponStatsAssetPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponModificationData" },
		{ "ModuleRelativePath", "Public/SBZWeaponModificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_WeaponStatsAssetPath = { "WeaponStatsAssetPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponModificationData, WeaponStatsAssetPath), Z_Construct_UClass_USBZUIWeaponStatsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_WeaponStatsAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_WeaponStatsAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_SuppressorDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponModificationData" },
		{ "ModuleRelativePath", "Public/SBZWeaponModificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_SuppressorDisplayName = { "SuppressorDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponModificationData, SuppressorDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_SuppressorDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_SuppressorDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_MagazineDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponModificationData" },
		{ "ModuleRelativePath", "Public/SBZWeaponModificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_MagazineDisplayName = { "MagazineDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponModificationData, MagazineDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_MagazineDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_MagazineDisplayName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_AttributeIdentifierMap_ValueProp = { "AttributeIdentifierMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_AttributeIdentifierMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_AttributeIdentifierMap_Key_KeyProp = { "AttributeIdentifierMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZWeaponAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_AttributeIdentifierMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponModificationData" },
		{ "ModuleRelativePath", "Public/SBZWeaponModificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_AttributeIdentifierMap = { "AttributeIdentifierMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponModificationData, AttributeIdentifierMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_AttributeIdentifierMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_AttributeIdentifierMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_WeaponStatsAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_SuppressorDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_MagazineDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_AttributeIdentifierMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_AttributeIdentifierMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_AttributeIdentifierMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::NewProp_AttributeIdentifierMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponModificationData",
		sizeof(FSBZWeaponModificationData),
		alignof(FSBZWeaponModificationData),
		Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponModificationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponModificationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponModificationData"), sizeof(FSBZWeaponModificationData), Get_Z_Construct_UScriptStruct_FSBZWeaponModificationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponModificationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponModificationData_Hash() { return 4067111828U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
