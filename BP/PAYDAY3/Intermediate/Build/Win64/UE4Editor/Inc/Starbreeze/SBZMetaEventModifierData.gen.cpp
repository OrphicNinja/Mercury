// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMetaEventModifierData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMetaEventModifierData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMetaEventModifierData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaEventModifierType();
// End Cross Module References
class UScriptStruct* FSBZMetaEventModifierData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMetaEventModifierData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMetaEventModifierData"), sizeof(FSBZMetaEventModifierData), Get_Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMetaEventModifierData>()
{
	return FSBZMetaEventModifierData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMetaEventModifierData(FSBZMetaEventModifierData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMetaEventModifierData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMetaEventModifierData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMetaEventModifierData()
	{
		UScriptStruct::DeferCppStructOps<FSBZMetaEventModifierData>(FName(TEXT("SBZMetaEventModifierData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMetaEventModifierData;
	struct Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifierType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMetaEventModifierData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMetaEventModifierData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::NewProp_ModifierType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::NewProp_ModifierType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMetaEventModifierData" },
		{ "ModuleRelativePath", "Public/SBZMetaEventModifierData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::NewProp_ModifierType = { "ModifierType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMetaEventModifierData, ModifierType), Z_Construct_UEnum_Starbreeze_ESBZMetaEventModifierType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::NewProp_ModifierType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::NewProp_ModifierType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::NewProp_Multiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMetaEventModifierData" },
		{ "ModuleRelativePath", "Public/SBZMetaEventModifierData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMetaEventModifierData, Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::NewProp_Multiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::NewProp_ModifierType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::NewProp_ModifierType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::NewProp_Multiplier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMetaEventModifierData",
		sizeof(FSBZMetaEventModifierData),
		alignof(FSBZMetaEventModifierData),
		Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMetaEventModifierData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMetaEventModifierData"), sizeof(FSBZMetaEventModifierData), Get_Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMetaEventModifierData_Hash() { return 3705646590U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
