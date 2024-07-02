// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiEventBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiEventBase() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType();
// End Cross Module References
class UScriptStruct* FAkMidiEventBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiEventBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiEventBase, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiEventBase"), sizeof(FAkMidiEventBase), Get_Z_Construct_UScriptStruct_FAkMidiEventBase_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiEventBase>()
{
	return FAkMidiEventBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiEventBase(FAkMidiEventBase::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiEventBase"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiEventBase
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiEventBase()
	{
		UScriptStruct::DeferCppStructOps<FAkMidiEventBase>(FName(TEXT("AkMidiEventBase")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiEventBase;
	struct Z_Construct_UScriptStruct_FAkMidiEventBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chan_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Chan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiEventBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiEventBase>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiEventBase" },
		{ "ModuleRelativePath", "Public/AkMidiEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiEventBase, Type), Z_Construct_UEnum_AkAudio_EAkMidiEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiEventBase" },
		{ "ModuleRelativePath", "Public/AkMidiEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan = { "Chan", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMidiEventBase, Chan), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkMidiEventBase",
		sizeof(FAkMidiEventBase),
		alignof(FAkMidiEventBase),
		Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiEventBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiEventBase"), sizeof(FAkMidiEventBase), Get_Z_Construct_UScriptStruct_FAkMidiEventBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiEventBase_Hash() { return 3482600175U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
