// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AKWaapiJsonObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAKWaapiJsonObject() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAKWaapiJsonObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAKWaapiJsonObject, Z_Construct_UPackage__Script_AkAudio(), TEXT("AKWaapiJsonObject"), sizeof(FAKWaapiJsonObject), Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAKWaapiJsonObject>()
{
	return FAKWaapiJsonObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAKWaapiJsonObject(FAKWaapiJsonObject::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AKWaapiJsonObject"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAKWaapiJsonObject
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAKWaapiJsonObject()
	{
		UScriptStruct::DeferCppStructOps<FAKWaapiJsonObject>(FName(TEXT("AKWaapiJsonObject")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAKWaapiJsonObject;
	struct Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AKWaapiJsonObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAKWaapiJsonObject>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AKWaapiJsonObject",
		sizeof(FAKWaapiJsonObject),
		alignof(FAKWaapiJsonObject),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AKWaapiJsonObject"), sizeof(FAKWaapiJsonObject), Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_Hash() { return 2182550065U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
