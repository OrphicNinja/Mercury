// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAbilityBuffTypeActivation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAbilityBuffTypeActivation() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAbilityBuffTypeAction();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType();
// End Cross Module References
class UScriptStruct* FSBZAbilityBuffTypeActivation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAbilityBuffTypeActivation"), sizeof(FSBZAbilityBuffTypeActivation), Get_Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAbilityBuffTypeActivation>()
{
	return FSBZAbilityBuffTypeActivation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAbilityBuffTypeActivation(FSBZAbilityBuffTypeActivation::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAbilityBuffTypeActivation"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAbilityBuffTypeActivation
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAbilityBuffTypeActivation()
	{
		UScriptStruct::DeferCppStructOps<FSBZAbilityBuffTypeActivation>(FName(TEXT("SBZAbilityBuffTypeActivation")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAbilityBuffTypeActivation;
	struct Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAbilityBuffTypeActivation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAbilityBuffTypeActivation>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilityBuffTypeActivation" },
		{ "ModuleRelativePath", "Public/SBZAbilityBuffTypeActivation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAbilityBuffTypeActivation, Action), Z_Construct_UEnum_Starbreeze_ESBZAbilityBuffTypeAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilityBuffTypeActivation" },
		{ "ModuleRelativePath", "Public/SBZAbilityBuffTypeActivation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAbilityBuffTypeActivation, Type), Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Action_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAbilityBuffTypeActivation",
		sizeof(FSBZAbilityBuffTypeActivation),
		alignof(FSBZAbilityBuffTypeActivation),
		Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAbilityBuffTypeActivation"), sizeof(FSBZAbilityBuffTypeActivation), Get_Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation_Hash() { return 3708149543U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
