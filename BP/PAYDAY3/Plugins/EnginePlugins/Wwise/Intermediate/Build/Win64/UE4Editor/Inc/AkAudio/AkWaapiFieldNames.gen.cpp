// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWaapiFieldNames.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiFieldNames() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkWaapiFieldNames::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiFieldNames, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiFieldNames"), sizeof(FAkWaapiFieldNames), Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWaapiFieldNames>()
{
	return FAkWaapiFieldNames::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWaapiFieldNames(FAkWaapiFieldNames::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWaapiFieldNames"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiFieldNames
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiFieldNames()
	{
		UScriptStruct::DeferCppStructOps<FAkWaapiFieldNames>(FName(TEXT("AkWaapiFieldNames")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiFieldNames;
	struct Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkWaapiFieldNames.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWaapiFieldNames>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWaapiFieldNames" },
		{ "ModuleRelativePath", "Public/AkWaapiFieldNames.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkWaapiFieldNames, FieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWaapiFieldNames",
		sizeof(FAkWaapiFieldNames),
		alignof(FAkWaapiFieldNames),
		Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWaapiFieldNames"), sizeof(FAkWaapiFieldNames), Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_Hash() { return 2355878671U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
