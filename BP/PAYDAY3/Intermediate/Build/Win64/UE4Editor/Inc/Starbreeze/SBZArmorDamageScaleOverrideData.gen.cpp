// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZArmorDamageScaleOverrideData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZArmorDamageScaleOverrideData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FSBZArmorDamageScaleOverrideData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZArmorDamageScaleOverrideData"), sizeof(FSBZArmorDamageScaleOverrideData), Get_Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZArmorDamageScaleOverrideData>()
{
	return FSBZArmorDamageScaleOverrideData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZArmorDamageScaleOverrideData(FSBZArmorDamageScaleOverrideData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZArmorDamageScaleOverrideData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZArmorDamageScaleOverrideData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZArmorDamageScaleOverrideData()
	{
		UScriptStruct::DeferCppStructOps<FSBZArmorDamageScaleOverrideData>(FName(TEXT("SBZArmorDamageScaleOverrideData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZArmorDamageScaleOverrideData;
	struct Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Override_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Override;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZArmorDamageScaleOverrideData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZArmorDamageScaleOverrideData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorDamageScaleOverrideData" },
		{ "ModuleRelativePath", "Public/SBZArmorDamageScaleOverrideData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZArmorDamageScaleOverrideData, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::NewProp_Override_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorDamageScaleOverrideData" },
		{ "ModuleRelativePath", "Public/SBZArmorDamageScaleOverrideData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::NewProp_Override = { "Override", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZArmorDamageScaleOverrideData, Override), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::NewProp_Override_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::NewProp_Override_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::NewProp_Override,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZArmorDamageScaleOverrideData",
		sizeof(FSBZArmorDamageScaleOverrideData),
		alignof(FSBZArmorDamageScaleOverrideData),
		Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZArmorDamageScaleOverrideData"), sizeof(FSBZArmorDamageScaleOverrideData), Get_Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData_Hash() { return 676186384U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
