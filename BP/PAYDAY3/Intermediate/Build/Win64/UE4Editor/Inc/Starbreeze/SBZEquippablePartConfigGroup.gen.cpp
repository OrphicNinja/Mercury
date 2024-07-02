// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippablePartConfigGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippablePartConfigGroup() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartConfig_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZEquippablePartConfigGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEquippablePartConfigGroup"), sizeof(FSBZEquippablePartConfigGroup), Get_Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEquippablePartConfigGroup>()
{
	return FSBZEquippablePartConfigGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEquippablePartConfigGroup(FSBZEquippablePartConfigGroup::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEquippablePartConfigGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippablePartConfigGroup
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippablePartConfigGroup()
	{
		UScriptStruct::DeferCppStructOps<FSBZEquippablePartConfigGroup>(FName(TEXT("SBZEquippablePartConfigGroup")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippablePartConfigGroup;
	struct Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartConfigGroup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEquippablePartConfigGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::NewProp_Part_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippablePartConfigGroup" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartConfigGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::NewProp_Part = { "Part", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippablePartConfigGroup, Part), Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::NewProp_Part_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::NewProp_Part_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::NewProp_Config_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippablePartConfigGroup" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartConfigGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippablePartConfigGroup, Config), Z_Construct_UClass_USBZEquippablePartConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::NewProp_Config_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::NewProp_Part,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::NewProp_Config,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEquippablePartConfigGroup",
		sizeof(FSBZEquippablePartConfigGroup),
		alignof(FSBZEquippablePartConfigGroup),
		Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEquippablePartConfigGroup"), sizeof(FSBZEquippablePartConfigGroup), Get_Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup_Hash() { return 227173449U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
