// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippablePartUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippablePartUIData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippablePartUIData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponModificationUIData();
// End Cross Module References
class UScriptStruct* FSBZEquippablePartUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEquippablePartUIData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEquippablePartUIData"), sizeof(FSBZEquippablePartUIData), Get_Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEquippablePartUIData>()
{
	return FSBZEquippablePartUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEquippablePartUIData(FSBZEquippablePartUIData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEquippablePartUIData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippablePartUIData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippablePartUIData()
	{
		UScriptStruct::DeferCppStructOps<FSBZEquippablePartUIData>(FName(TEXT("SBZEquippablePartUIData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippablePartUIData;
	struct Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositiveModifications_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositiveModifications_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PositiveModifications;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NegativeModifications_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativeModifications_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NegativeModifications;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEquippablePartUIData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_PositiveModifications_Inner = { "PositiveModifications", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeaponModificationUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_PositiveModifications_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippablePartUIData" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_PositiveModifications = { "PositiveModifications", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippablePartUIData, PositiveModifications), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_PositiveModifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_PositiveModifications_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_NegativeModifications_Inner = { "NegativeModifications", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeaponModificationUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_NegativeModifications_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippablePartUIData" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_NegativeModifications = { "NegativeModifications", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippablePartUIData, NegativeModifications), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_NegativeModifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_NegativeModifications_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_PositiveModifications_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_PositiveModifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_NegativeModifications_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::NewProp_NegativeModifications,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEquippablePartUIData",
		sizeof(FSBZEquippablePartUIData),
		alignof(FSBZEquippablePartUIData),
		Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippablePartUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEquippablePartUIData"), sizeof(FSBZEquippablePartUIData), Get_Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEquippablePartUIData_Hash() { return 3494336396U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
