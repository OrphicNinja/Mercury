// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiChannelAftertouch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiChannelAftertouch() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
// End Cross Module References

static_assert(std::is_polymorphic<FAkMidiChannelAftertouch>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiChannelAftertouch cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

class UScriptStruct* FAkMidiChannelAftertouch::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiChannelAftertouch"), sizeof(FAkMidiChannelAftertouch), Get_Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiChannelAftertouch>()
{
	return FAkMidiChannelAftertouch::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiChannelAftertouch(FAkMidiChannelAftertouch::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiChannelAftertouch"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiChannelAftertouch
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiChannelAftertouch()
	{
		UScriptStruct::DeferCppStructOps<FAkMidiChannelAftertouch>(FName(TEXT("AkMidiChannelAftertouch")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiChannelAftertouch;
	struct Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiChannelAftertouch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiChannelAftertouch>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiChannelAftertouch" },
		{ "ModuleRelativePath", "Public/AkMidiChannelAftertouch.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiChannelAftertouch, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiChannelAftertouch",
		sizeof(FAkMidiChannelAftertouch),
		alignof(FAkMidiChannelAftertouch),
		Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiChannelAftertouch"), sizeof(FAkMidiChannelAftertouch), Get_Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Hash() { return 4247511019U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
