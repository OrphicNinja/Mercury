// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZItemProvidedBySkill.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZItemProvidedBySkill() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZItemProvidedBySkill();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillLine_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZItemProvidedBySkill::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZItemProvidedBySkill, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZItemProvidedBySkill"), sizeof(FSBZItemProvidedBySkill), Get_Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZItemProvidedBySkill>()
{
	return FSBZItemProvidedBySkill::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZItemProvidedBySkill(FSBZItemProvidedBySkill::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZItemProvidedBySkill"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemProvidedBySkill
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemProvidedBySkill()
	{
		UScriptStruct::DeferCppStructOps<FSBZItemProvidedBySkill>(FName(TEXT("SBZItemProvidedBySkill")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemProvidedBySkill;
	struct Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAvailable_MetaData[];
#endif
		static void NewProp_bIsAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAvailable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLineToUnlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillLineToUnlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryBaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryBaseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZItemProvidedBySkill.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZItemProvidedBySkill>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_bIsAvailable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemProvidedBySkill" },
		{ "ModuleRelativePath", "Public/SBZItemProvidedBySkill.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_bIsAvailable_SetBit(void* Obj)
	{
		((FSBZItemProvidedBySkill*)Obj)->bIsAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_bIsAvailable = { "bIsAvailable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZItemProvidedBySkill), &Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_bIsAvailable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_bIsAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_bIsAvailable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_SkillLineToUnlock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemProvidedBySkill" },
		{ "ModuleRelativePath", "Public/SBZItemProvidedBySkill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_SkillLineToUnlock = { "SkillLineToUnlock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZItemProvidedBySkill, SkillLineToUnlock), Z_Construct_UClass_USBZSkillLine_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_SkillLineToUnlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_SkillLineToUnlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_InventoryBaseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemProvidedBySkill" },
		{ "ModuleRelativePath", "Public/SBZItemProvidedBySkill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_InventoryBaseData = { "InventoryBaseData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZItemProvidedBySkill, InventoryBaseData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_InventoryBaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_InventoryBaseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_bIsAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_SkillLineToUnlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::NewProp_InventoryBaseData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZItemProvidedBySkill",
		sizeof(FSBZItemProvidedBySkill),
		alignof(FSBZItemProvidedBySkill),
		Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZItemProvidedBySkill()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZItemProvidedBySkill"), sizeof(FSBZItemProvidedBySkill), Get_Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZItemProvidedBySkill_Hash() { return 826459459U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
