// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiProgramChange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiProgramChange() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiProgramChange();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
// End Cross Module References

static_assert(std::is_polymorphic<FAkMidiProgramChange>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiProgramChange cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

class UScriptStruct* FAkMidiProgramChange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiProgramChange_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiProgramChange, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiProgramChange"), sizeof(FAkMidiProgramChange), Get_Z_Construct_UScriptStruct_FAkMidiProgramChange_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiProgramChange>()
{
	return FAkMidiProgramChange::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiProgramChange(FAkMidiProgramChange::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiProgramChange"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiProgramChange
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiProgramChange()
	{
		UScriptStruct::DeferCppStructOps<FAkMidiProgramChange>(FName(TEXT("AkMidiProgramChange")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiProgramChange;
	struct Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgramNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgramNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiProgramChange.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiProgramChange>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewProp_ProgramNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiProgramChange" },
		{ "ModuleRelativePath", "Public/AkMidiProgramChange.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewProp_ProgramNum = { "ProgramNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiProgramChange, ProgramNum), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewProp_ProgramNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewProp_ProgramNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewProp_ProgramNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiProgramChange",
		sizeof(FAkMidiProgramChange),
		alignof(FAkMidiProgramChange),
		Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiProgramChange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiProgramChange_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiProgramChange"), sizeof(FAkMidiProgramChange), Get_Z_Construct_UScriptStruct_FAkMidiProgramChange_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiProgramChange_Hash() { return 1498802617U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
