// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiCc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiCc() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiCc();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiCcValues();
// End Cross Module References

static_assert(std::is_polymorphic<FAkMidiCc>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiCc cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

class UScriptStruct* FAkMidiCc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiCc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiCc, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiCc"), sizeof(FAkMidiCc), Get_Z_Construct_UScriptStruct_FAkMidiCc_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiCc>()
{
	return FAkMidiCc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiCc(FAkMidiCc::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiCc"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiCc
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiCc()
	{
		UScriptStruct::DeferCppStructOps<FAkMidiCc>(FName(TEXT("AkMidiCc")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiCc;
	struct Z_Construct_UScriptStruct_FAkMidiCc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cc_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cc_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiCc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiCc.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiCc>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiCc" },
		{ "ModuleRelativePath", "Public/AkMidiCc.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc = { "Cc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiCc, Cc), Z_Construct_UEnum_AkAudio_EAkMidiCcValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiCc" },
		{ "ModuleRelativePath", "Public/AkMidiCc.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiCc, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiCc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiCc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiCc",
		sizeof(FAkMidiCc),
		alignof(FAkMidiCc),
		Z_Construct_UScriptStruct_FAkMidiCc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiCc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiCc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiCc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiCc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiCc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiCc"), sizeof(FAkMidiCc), Get_Z_Construct_UScriptStruct_FAkMidiCc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkMidiCc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiCc_Hash() { return 2119669284U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
