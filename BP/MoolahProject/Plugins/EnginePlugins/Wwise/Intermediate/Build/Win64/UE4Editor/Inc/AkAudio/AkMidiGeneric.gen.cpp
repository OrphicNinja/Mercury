// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiGeneric.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiGeneric() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiGeneric();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
// End Cross Module References

static_assert(std::is_polymorphic<FAkMidiGeneric>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiGeneric cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

class UScriptStruct* FAkMidiGeneric::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiGeneric_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiGeneric, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiGeneric"), sizeof(FAkMidiGeneric), Get_Z_Construct_UScriptStruct_FAkMidiGeneric_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiGeneric>()
{
	return FAkMidiGeneric::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiGeneric(FAkMidiGeneric::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiGeneric"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiGeneric
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiGeneric()
	{
		UScriptStruct::DeferCppStructOps<FAkMidiGeneric>(FName(TEXT("AkMidiGeneric")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiGeneric;
	struct Z_Construct_UScriptStruct_FAkMidiGeneric_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Param1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param2_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Param2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiGeneric.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiGeneric>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiGeneric" },
		{ "ModuleRelativePath", "Public/AkMidiGeneric.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiGeneric, Param1), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiGeneric" },
		{ "ModuleRelativePath", "Public/AkMidiGeneric.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiGeneric, Param2), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiGeneric",
		sizeof(FAkMidiGeneric),
		alignof(FAkMidiGeneric),
		Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiGeneric()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiGeneric_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiGeneric"), sizeof(FAkMidiGeneric), Get_Z_Construct_UScriptStruct_FAkMidiGeneric_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiGeneric_Hash() { return 1863786793U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
