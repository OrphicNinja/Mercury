// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiNoteAftertouch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiNoteAftertouch() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
// End Cross Module References

static_assert(std::is_polymorphic<FAkMidiNoteAftertouch>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiNoteAftertouch cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

class UScriptStruct* FAkMidiNoteAftertouch::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiNoteAftertouch"), sizeof(FAkMidiNoteAftertouch), Get_Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiNoteAftertouch>()
{
	return FAkMidiNoteAftertouch::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiNoteAftertouch(FAkMidiNoteAftertouch::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiNoteAftertouch"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiNoteAftertouch
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiNoteAftertouch()
	{
		UScriptStruct::DeferCppStructOps<FAkMidiNoteAftertouch>(FName(TEXT("AkMidiNoteAftertouch")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiNoteAftertouch;
	struct Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Note;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiNoteAftertouch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiNoteAftertouch>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiNoteAftertouch" },
		{ "ModuleRelativePath", "Public/AkMidiNoteAftertouch.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiNoteAftertouch, Note), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiNoteAftertouch" },
		{ "ModuleRelativePath", "Public/AkMidiNoteAftertouch.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiNoteAftertouch, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiNoteAftertouch",
		sizeof(FAkMidiNoteAftertouch),
		alignof(FAkMidiNoteAftertouch),
		Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiNoteAftertouch"), sizeof(FAkMidiNoteAftertouch), Get_Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Hash() { return 2539617626U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
