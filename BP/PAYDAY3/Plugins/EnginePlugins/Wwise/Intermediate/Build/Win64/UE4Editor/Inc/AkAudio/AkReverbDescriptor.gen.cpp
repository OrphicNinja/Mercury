// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkReverbDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkReverbDescriptor() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkReverbDescriptor();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkReverbDescriptor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkReverbDescriptor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkReverbDescriptor, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkReverbDescriptor"), sizeof(FAkReverbDescriptor), Get_Z_Construct_UScriptStruct_FAkReverbDescriptor_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkReverbDescriptor>()
{
	return FAkReverbDescriptor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkReverbDescriptor(FAkReverbDescriptor::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkReverbDescriptor"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkReverbDescriptor
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkReverbDescriptor()
	{
		UScriptStruct::DeferCppStructOps<FAkReverbDescriptor>(FName(TEXT("AkReverbDescriptor")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkReverbDescriptor;
	struct Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkReverbDescriptor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkReverbDescriptor>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkReverbDescriptor",
		sizeof(FAkReverbDescriptor),
		alignof(FAkReverbDescriptor),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkReverbDescriptor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkReverbDescriptor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkReverbDescriptor"), sizeof(FAkReverbDescriptor), Get_Z_Construct_UScriptStruct_FAkReverbDescriptor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkReverbDescriptor_Hash() { return 1593645998U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
