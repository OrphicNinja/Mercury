// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHumanShieldSlotParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHumanShieldSlotParameters() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHumanShieldEnterType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSBZHumanShieldSlotParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHumanShieldSlotParameters"), sizeof(FSBZHumanShieldSlotParameters), Get_Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHumanShieldSlotParameters>()
{
	return FSBZHumanShieldSlotParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHumanShieldSlotParameters(FSBZHumanShieldSlotParameters::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHumanShieldSlotParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHumanShieldSlotParameters
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHumanShieldSlotParameters()
	{
		UScriptStruct::DeferCppStructOps<FSBZHumanShieldSlotParameters>(FName(TEXT("SBZHumanShieldSlotParameters")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHumanShieldSlotParameters;
	struct Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HumanShieldEnterType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanShieldEnterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HumanShieldEnterType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHumanShieldSlotParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHumanShieldSlotParameters>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::NewProp_HumanShieldEnterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::NewProp_HumanShieldEnterType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHumanShieldSlotParameters" },
		{ "ModuleRelativePath", "Public/SBZHumanShieldSlotParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::NewProp_HumanShieldEnterType = { "HumanShieldEnterType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHumanShieldSlotParameters, HumanShieldEnterType), Z_Construct_UEnum_Starbreeze_ESBZHumanShieldEnterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::NewProp_HumanShieldEnterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::NewProp_HumanShieldEnterType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHumanShieldSlotParameters" },
		{ "ModuleRelativePath", "Public/SBZHumanShieldSlotParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHumanShieldSlotParameters, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::NewProp_Offset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::NewProp_HumanShieldEnterType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::NewProp_HumanShieldEnterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::NewProp_Offset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHumanShieldSlotParameters",
		sizeof(FSBZHumanShieldSlotParameters),
		alignof(FSBZHumanShieldSlotParameters),
		Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHumanShieldSlotParameters"), sizeof(FSBZHumanShieldSlotParameters), Get_Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHumanShieldSlotParameters_Hash() { return 343555342U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
