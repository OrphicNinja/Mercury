// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPresetConfigInventorySlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPresetConfigInventorySlot() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPresetConfigData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZWeaponPresetConfigInventorySlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponPresetConfigInventorySlot"), sizeof(FSBZWeaponPresetConfigInventorySlot), Get_Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponPresetConfigInventorySlot>()
{
	return FSBZWeaponPresetConfigInventorySlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot(FSBZWeaponPresetConfigInventorySlot::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponPresetConfigInventorySlot"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPresetConfigInventorySlot
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPresetConfigInventorySlot()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponPresetConfigInventorySlot>(FName(TEXT("SBZWeaponPresetConfigInventorySlot")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPresetConfigInventorySlot;
	struct Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPresetConfigData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPresetConfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPresetConfigInventorySlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponPresetConfigInventorySlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::NewProp_WeaponPresetConfigData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPresetConfigInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZWeaponPresetConfigInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::NewProp_WeaponPresetConfigData = { "WeaponPresetConfigData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPresetConfigInventorySlot, WeaponPresetConfigData), Z_Construct_UClass_USBZWeaponPresetConfigData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::NewProp_WeaponPresetConfigData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::NewProp_WeaponPresetConfigData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::NewProp_WeaponPresetConfigData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponPresetConfigInventorySlot",
		sizeof(FSBZWeaponPresetConfigInventorySlot),
		alignof(FSBZWeaponPresetConfigInventorySlot),
		Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponPresetConfigInventorySlot"), sizeof(FSBZWeaponPresetConfigInventorySlot), Get_Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot_Hash() { return 3081890531U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
