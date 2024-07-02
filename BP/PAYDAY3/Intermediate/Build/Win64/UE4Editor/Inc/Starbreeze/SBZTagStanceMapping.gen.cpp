// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTagStanceMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTagStanceMapping() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTagStanceMapping();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterStance();
// End Cross Module References
class UScriptStruct* FSBZTagStanceMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTagStanceMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTagStanceMapping, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTagStanceMapping"), sizeof(FSBZTagStanceMapping), Get_Z_Construct_UScriptStruct_FSBZTagStanceMapping_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTagStanceMapping>()
{
	return FSBZTagStanceMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTagStanceMapping(FSBZTagStanceMapping::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTagStanceMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTagStanceMapping
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTagStanceMapping()
	{
		UScriptStruct::DeferCppStructOps<FSBZTagStanceMapping>(FName(TEXT("SBZTagStanceMapping")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTagStanceMapping;
	struct Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stance_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stance_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTagStanceMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTagStanceMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagStanceMapping" },
		{ "ModuleRelativePath", "Public/SBZTagStanceMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagStanceMapping, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::NewProp_Stance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::NewProp_Stance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagStanceMapping" },
		{ "ModuleRelativePath", "Public/SBZTagStanceMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::NewProp_Stance = { "Stance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagStanceMapping, Stance), Z_Construct_UEnum_Starbreeze_ESBZCharacterStance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::NewProp_Stance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::NewProp_Stance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::NewProp_Stance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::NewProp_Stance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTagStanceMapping",
		sizeof(FSBZTagStanceMapping),
		alignof(FSBZTagStanceMapping),
		Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTagStanceMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTagStanceMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTagStanceMapping"), sizeof(FSBZTagStanceMapping), Get_Z_Construct_UScriptStruct_FSBZTagStanceMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTagStanceMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTagStanceMapping_Hash() { return 3475048038U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
