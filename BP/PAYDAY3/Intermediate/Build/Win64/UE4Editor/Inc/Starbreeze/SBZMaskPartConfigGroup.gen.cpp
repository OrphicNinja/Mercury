// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskPartConfigGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskPartConfigGroup() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskPartConfig_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZMaskPartConfigGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMaskPartConfigGroup"), sizeof(FSBZMaskPartConfigGroup), Get_Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMaskPartConfigGroup>()
{
	return FSBZMaskPartConfigGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMaskPartConfigGroup(FSBZMaskPartConfigGroup::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMaskPartConfigGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskPartConfigGroup
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskPartConfigGroup()
	{
		UScriptStruct::DeferCppStructOps<FSBZMaskPartConfigGroup>(FName(TEXT("SBZMaskPartConfigGroup")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskPartConfigGroup;
	struct Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskPartConfigGroup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMaskPartConfigGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::NewProp_Part_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskPartConfigGroup" },
		{ "ModuleRelativePath", "Public/SBZMaskPartConfigGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::NewProp_Part = { "Part", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskPartConfigGroup, Part), Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::NewProp_Part_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::NewProp_Part_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::NewProp_Config_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskPartConfigGroup" },
		{ "ModuleRelativePath", "Public/SBZMaskPartConfigGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskPartConfigGroup, Config), Z_Construct_UClass_USBZMaskPartConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::NewProp_Config_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::NewProp_Part,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::NewProp_Config,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMaskPartConfigGroup",
		sizeof(FSBZMaskPartConfigGroup),
		alignof(FSBZMaskPartConfigGroup),
		Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMaskPartConfigGroup"), sizeof(FSBZMaskPartConfigGroup), Get_Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup_Hash() { return 283253351U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
