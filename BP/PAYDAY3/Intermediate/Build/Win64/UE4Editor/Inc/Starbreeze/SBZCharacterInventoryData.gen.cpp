// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterInventoryData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterInventoryData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterInventoryData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterLockReason();
// End Cross Module References
class UScriptStruct* FSBZCharacterInventoryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCharacterInventoryData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCharacterInventoryData"), sizeof(FSBZCharacterInventoryData), Get_Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCharacterInventoryData>()
{
	return FSBZCharacterInventoryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCharacterInventoryData(FSBZCharacterInventoryData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCharacterInventoryData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterInventoryData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterInventoryData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCharacterInventoryData>(FName(TEXT("SBZCharacterInventoryData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterInventoryData;
	struct Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCharacterLocked_MetaData[];
#endif
		static void NewProp_bCharacterLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCharacterLocked;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterLockReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLockReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterLockReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterInventoryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCharacterInventoryData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_CharacterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterInventoryData" },
		{ "ModuleRelativePath", "Public/SBZCharacterInventoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterInventoryData, CharacterData), Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_CharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_CharacterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_bCharacterLocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterInventoryData" },
		{ "ModuleRelativePath", "Public/SBZCharacterInventoryData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_bCharacterLocked_SetBit(void* Obj)
	{
		((FSBZCharacterInventoryData*)Obj)->bCharacterLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_bCharacterLocked = { "bCharacterLocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCharacterInventoryData), &Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_bCharacterLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_bCharacterLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_bCharacterLocked_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_CharacterLockReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_CharacterLockReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterInventoryData" },
		{ "ModuleRelativePath", "Public/SBZCharacterInventoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_CharacterLockReason = { "CharacterLockReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterInventoryData, CharacterLockReason), Z_Construct_UEnum_Starbreeze_ESBZCharacterLockReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_CharacterLockReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_CharacterLockReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_SelectedIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterInventoryData" },
		{ "ModuleRelativePath", "Public/SBZCharacterInventoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_SelectedIndex = { "SelectedIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterInventoryData, SelectedIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_SelectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_SelectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_CharacterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_bCharacterLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_CharacterLockReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_CharacterLockReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::NewProp_SelectedIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCharacterInventoryData",
		sizeof(FSBZCharacterInventoryData),
		alignof(FSBZCharacterInventoryData),
		Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterInventoryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCharacterInventoryData"), sizeof(FSBZCharacterInventoryData), Get_Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterInventoryData_Hash() { return 1286173166U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
