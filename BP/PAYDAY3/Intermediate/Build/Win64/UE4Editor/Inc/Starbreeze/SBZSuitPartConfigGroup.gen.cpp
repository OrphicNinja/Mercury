// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitPartConfigGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitPartConfigGroup() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPartConfig_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSuitPartConfigGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSuitPartConfigGroup"), sizeof(FSBZSuitPartConfigGroup), Get_Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSuitPartConfigGroup>()
{
	return FSBZSuitPartConfigGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSuitPartConfigGroup(FSBZSuitPartConfigGroup::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSuitPartConfigGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitPartConfigGroup
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitPartConfigGroup()
	{
		UScriptStruct::DeferCppStructOps<FSBZSuitPartConfigGroup>(FName(TEXT("SBZSuitPartConfigGroup")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitPartConfigGroup;
	struct Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Part_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Part;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitPartConfigGroup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSuitPartConfigGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::NewProp_Part_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitPartConfigGroup" },
		{ "ModuleRelativePath", "Public/SBZSuitPartConfigGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::NewProp_Part = { "Part", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitPartConfigGroup, Part), Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::NewProp_Part_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::NewProp_Part_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::NewProp_Config_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitPartConfigGroup" },
		{ "ModuleRelativePath", "Public/SBZSuitPartConfigGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitPartConfigGroup, Config), Z_Construct_UClass_USBZSuitPartConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::NewProp_Config_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::NewProp_Part,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::NewProp_Config,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSuitPartConfigGroup",
		sizeof(FSBZSuitPartConfigGroup),
		alignof(FSBZSuitPartConfigGroup),
		Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSuitPartConfigGroup"), sizeof(FSBZSuitPartConfigGroup), Get_Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup_Hash() { return 3521925344U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
