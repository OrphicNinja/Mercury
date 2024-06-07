// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiNoteOnOff.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiNoteOnOff() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteOnOff();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
// End Cross Module References

static_assert(std::is_polymorphic<FAkMidiNoteOnOff>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiNoteOnOff cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

class UScriptStruct* FAkMidiNoteOnOff::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiNoteOnOff, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiNoteOnOff"), sizeof(FAkMidiNoteOnOff), Get_Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiNoteOnOff>()
{
	return FAkMidiNoteOnOff::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiNoteOnOff(FAkMidiNoteOnOff::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiNoteOnOff"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiNoteOnOff
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiNoteOnOff()
	{
		UScriptStruct::DeferCppStructOps<FAkMidiNoteOnOff>(FName(TEXT("AkMidiNoteOnOff")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiNoteOnOff;
	struct Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiNoteOnOff.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiNoteOnOff>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiNoteOnOff" },
		{ "ModuleRelativePath", "Public/AkMidiNoteOnOff.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiNoteOnOff, Note), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiNoteOnOff" },
		{ "ModuleRelativePath", "Public/AkMidiNoteOnOff.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiNoteOnOff, Velocity), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiNoteOnOff",
		sizeof(FAkMidiNoteOnOff),
		alignof(FAkMidiNoteOnOff),
		Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteOnOff()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiNoteOnOff"), sizeof(FAkMidiNoteOnOff), Get_Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Hash() { return 3369995908U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
