// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerLoadoutConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerLoadoutConfig() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZArmorData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZPlayerLoadoutConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerLoadoutConfig"), sizeof(FSBZPlayerLoadoutConfig), Get_Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerLoadoutConfig>()
{
	return FSBZPlayerLoadoutConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerLoadoutConfig(FSBZPlayerLoadoutConfig::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerLoadoutConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerLoadoutConfig
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerLoadoutConfig()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerLoadoutConfig>(FName(TEXT("SBZPlayerLoadoutConfig")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerLoadoutConfig;
	struct Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoadoutName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeaponConfigSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrimaryWeaponConfigSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeaponConfigSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondaryWeaponConfigSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverkillWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Throwable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Throwable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Placeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Placeable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skills_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skills_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Skills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Armor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerLoadoutConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerLoadoutConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_LoadoutName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLoadoutConfig" },
		{ "ModuleRelativePath", "Public/SBZPlayerLoadoutConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_LoadoutName = { "LoadoutName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerLoadoutConfig, LoadoutName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_LoadoutName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_LoadoutName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_PrimaryWeaponConfigSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLoadoutConfig" },
		{ "ModuleRelativePath", "Public/SBZPlayerLoadoutConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_PrimaryWeaponConfigSlotIndex = { "PrimaryWeaponConfigSlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerLoadoutConfig, PrimaryWeaponConfigSlotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_PrimaryWeaponConfigSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_PrimaryWeaponConfigSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_SecondaryWeaponConfigSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLoadoutConfig" },
		{ "ModuleRelativePath", "Public/SBZPlayerLoadoutConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_SecondaryWeaponConfigSlotIndex = { "SecondaryWeaponConfigSlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerLoadoutConfig, SecondaryWeaponConfigSlotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_SecondaryWeaponConfigSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_SecondaryWeaponConfigSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_OverkillWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLoadoutConfig" },
		{ "ModuleRelativePath", "Public/SBZPlayerLoadoutConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_OverkillWeapon = { "OverkillWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerLoadoutConfig, OverkillWeapon), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_OverkillWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_OverkillWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Throwable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLoadoutConfig" },
		{ "ModuleRelativePath", "Public/SBZPlayerLoadoutConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Throwable = { "Throwable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerLoadoutConfig, Throwable), Z_Construct_UClass_USBZThrowableData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Throwable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Throwable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Tool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLoadoutConfig" },
		{ "ModuleRelativePath", "Public/SBZPlayerLoadoutConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerLoadoutConfig, Tool), Z_Construct_UClass_USBZToolData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Tool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Tool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Placeable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLoadoutConfig" },
		{ "ModuleRelativePath", "Public/SBZPlayerLoadoutConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Placeable = { "Placeable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerLoadoutConfig, Placeable), Z_Construct_UClass_USBZPlaceableData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Placeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Placeable_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Skills_Inner = { "Skills", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Skills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLoadoutConfig" },
		{ "ModuleRelativePath", "Public/SBZPlayerLoadoutConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Skills = { "Skills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerLoadoutConfig, Skills), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Skills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Skills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Armor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLoadoutConfig" },
		{ "ModuleRelativePath", "Public/SBZPlayerLoadoutConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerLoadoutConfig, Armor), Z_Construct_UClass_USBZArmorData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Armor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_LoadoutName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_PrimaryWeaponConfigSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_SecondaryWeaponConfigSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_OverkillWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Throwable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Tool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Placeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Skills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Skills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::NewProp_Armor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPlayerLoadoutConfig",
		sizeof(FSBZPlayerLoadoutConfig),
		alignof(FSBZPlayerLoadoutConfig),
		Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerLoadoutConfig"), sizeof(FSBZPlayerLoadoutConfig), Get_Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig_Hash() { return 2840339143U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
