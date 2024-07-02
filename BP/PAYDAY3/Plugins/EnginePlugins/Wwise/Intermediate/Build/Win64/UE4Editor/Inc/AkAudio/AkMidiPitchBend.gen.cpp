// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiPitchBend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiPitchBend() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiPitchBend();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
// End Cross Module References

static_assert(std::is_polymorphic<FAkMidiPitchBend>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiPitchBend cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

class UScriptStruct* FAkMidiPitchBend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiPitchBend_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiPitchBend, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiPitchBend"), sizeof(FAkMidiPitchBend), Get_Z_Construct_UScriptStruct_FAkMidiPitchBend_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiPitchBend>()
{
	return FAkMidiPitchBend::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiPitchBend(FAkMidiPitchBend::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiPitchBend"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiPitchBend
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiPitchBend()
	{
		UScriptStruct::DeferCppStructOps<FAkMidiPitchBend>(FName(TEXT("AkMidiPitchBend")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiPitchBend;
	struct Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueLsb_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueLsb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueMsb_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueMsb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FullValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiPitchBend.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiPitchBend>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiPitchBend" },
		{ "ModuleRelativePath", "Public/AkMidiPitchBend.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb = { "ValueLsb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiPitchBend, ValueLsb), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiPitchBend" },
		{ "ModuleRelativePath", "Public/AkMidiPitchBend.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb = { "ValueMsb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiPitchBend, ValueMsb), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiPitchBend" },
		{ "ModuleRelativePath", "Public/AkMidiPitchBend.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue = { "FullValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiPitchBend, FullValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiPitchBend",
		sizeof(FAkMidiPitchBend),
		alignof(FAkMidiPitchBend),
		Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiPitchBend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiPitchBend_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiPitchBend"), sizeof(FAkMidiPitchBend), Get_Z_Construct_UScriptStruct_FAkMidiPitchBend_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiPitchBend_Hash() { return 2090045022U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
