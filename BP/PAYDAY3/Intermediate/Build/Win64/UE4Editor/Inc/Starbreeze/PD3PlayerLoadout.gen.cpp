// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3PlayerLoadout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3PlayerLoadout() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3PlayerLoadout();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZThrowableConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGloveData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskConfig();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZArmorData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAbilityData_NoRegister();
// End Cross Module References
class UScriptStruct* FPD3PlayerLoadout::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3PlayerLoadout_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3PlayerLoadout, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3PlayerLoadout"), sizeof(FPD3PlayerLoadout), Get_Z_Construct_UScriptStruct_FPD3PlayerLoadout_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3PlayerLoadout>()
{
	return FPD3PlayerLoadout::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3PlayerLoadout(FPD3PlayerLoadout::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3PlayerLoadout"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3PlayerLoadout
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3PlayerLoadout()
	{
		UScriptStruct::DeferCppStructOps<FPD3PlayerLoadout>(FName(TEXT("PD3PlayerLoadout")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3PlayerLoadout;
	struct Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreferredCharacterDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredCharacterDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreferredCharacterDataArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippableConfigArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableConfigArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquippableConfigArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillWeaponConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverkillWeaponConfig;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrowableConfigArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableConfigArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ThrowableConfigArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GloveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmorData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkillArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiableLoadoutDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifiableLoadoutDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiableLoadoutDataArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingValidationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_PendingValidationCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSkillArrayValidated_MetaData[];
#endif
		static void NewProp_bIsSkillArrayValidated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSkillArrayValidated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3PlayerLoadout>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_PreferredCharacterDataArray_Inner = { "PreferredCharacterDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_PreferredCharacterDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_PreferredCharacterDataArray = { "PreferredCharacterDataArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, PreferredCharacterDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_PreferredCharacterDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_PreferredCharacterDataArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_EquippableConfigArray_Inner = { "EquippableConfigArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_EquippableConfigArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_EquippableConfigArray = { "EquippableConfigArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, EquippableConfigArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_EquippableConfigArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_EquippableConfigArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_OverkillWeaponConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_OverkillWeaponConfig = { "OverkillWeaponConfig", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, OverkillWeaponConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_OverkillWeaponConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_OverkillWeaponConfig_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ThrowableConfigArray_Inner = { "ThrowableConfigArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZThrowableConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ThrowableConfigArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ThrowableConfigArray = { "ThrowableConfigArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, ThrowableConfigArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ThrowableConfigArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ThrowableConfigArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_MaskData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_MaskData = { "MaskData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, MaskData), Z_Construct_UClass_USBZMaskData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_MaskData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_MaskData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SuitData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SuitData = { "SuitData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, SuitData), Z_Construct_UClass_USBZSuitData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SuitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SuitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_GloveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_GloveData = { "GloveData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, GloveData), Z_Construct_UClass_USBZGloveData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_GloveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_GloveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_MaskConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_MaskConfig = { "MaskConfig", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, MaskConfig), Z_Construct_UScriptStruct_FSBZMaskConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_MaskConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_MaskConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SuitConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SuitConfig = { "SuitConfig", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, SuitConfig), Z_Construct_UScriptStruct_FSBZSuitConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SuitConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SuitConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ArmorData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ArmorData = { "ArmorData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, ArmorData), Z_Construct_UClass_USBZArmorData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ArmorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ArmorData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SkillArray_Inner = { "SkillArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SkillArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SkillArray = { "SkillArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, SkillArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SkillArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SkillArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ModifiableLoadoutDataArray_Inner = { "ModifiableLoadoutDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPD3ModifiableLoadoutData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ModifiableLoadoutDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ModifiableLoadoutDataArray = { "ModifiableLoadoutDataArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, ModifiableLoadoutDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ModifiableLoadoutDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ModifiableLoadoutDataArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_PendingValidationCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_PendingValidationCount = { "PendingValidationCount", nullptr, (EPropertyFlags)0x00c0000080002001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, PendingValidationCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_PendingValidationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_PendingValidationCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_bIsSkillArrayValidated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_bIsSkillArrayValidated_SetBit(void* Obj)
	{
		((FPD3PlayerLoadout*)Obj)->bIsSkillArrayValidated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_bIsSkillArrayValidated = { "bIsSkillArrayValidated", nullptr, (EPropertyFlags)0x00c0000080002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPD3PlayerLoadout), &Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_bIsSkillArrayValidated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_bIsSkillArrayValidated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_bIsSkillArrayValidated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_AbilityData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PlayerLoadout" },
		{ "ModuleRelativePath", "Public/PD3PlayerLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_AbilityData = { "AbilityData", nullptr, (EPropertyFlags)0x00c0000080002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PlayerLoadout, AbilityData), Z_Construct_UClass_USBZPlayerAbilityData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_AbilityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_AbilityData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_PreferredCharacterDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_PreferredCharacterDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_EquippableConfigArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_EquippableConfigArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_OverkillWeaponConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ThrowableConfigArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ThrowableConfigArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_MaskData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SuitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_GloveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_MaskConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SuitConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ArmorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SkillArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_SkillArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ModifiableLoadoutDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_ModifiableLoadoutDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_PendingValidationCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_bIsSkillArrayValidated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::NewProp_AbilityData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3PlayerLoadout",
		sizeof(FPD3PlayerLoadout),
		alignof(FPD3PlayerLoadout),
		Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3PlayerLoadout()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3PlayerLoadout_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3PlayerLoadout"), sizeof(FPD3PlayerLoadout), Get_Z_Construct_UScriptStruct_FPD3PlayerLoadout_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3PlayerLoadout_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3PlayerLoadout_Hash() { return 2633187683U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
