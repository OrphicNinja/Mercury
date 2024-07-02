// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAcousticTextureParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticTextureParams() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticTextureParams();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
// End Cross Module References
class UScriptStruct* FAkAcousticTextureParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAcousticTextureParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAcousticTextureParams, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAcousticTextureParams"), sizeof(FAkAcousticTextureParams), Get_Z_Construct_UScriptStruct_FAkAcousticTextureParams_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAcousticTextureParams>()
{
	return FAkAcousticTextureParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAcousticTextureParams(FAkAcousticTextureParams::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAcousticTextureParams"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAcousticTextureParams
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAcousticTextureParams()
	{
		UScriptStruct::DeferCppStructOps<FAkAcousticTextureParams>(FName(TEXT("AkAcousticTextureParams")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAcousticTextureParams;
	struct Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorptionValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsorptionValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkAcousticTextureParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAcousticTextureParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticTextureParams" },
		{ "ModuleRelativePath", "Public/AkAcousticTextureParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues = { "AbsorptionValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAcousticTextureParams, AbsorptionValues), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAcousticTextureParams",
		sizeof(FAkAcousticTextureParams),
		alignof(FAkAcousticTextureParams),
		Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticTextureParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAcousticTextureParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAcousticTextureParams"), sizeof(FAkAcousticTextureParams), Get_Z_Construct_UScriptStruct_FAkAcousticTextureParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAcousticTextureParams_Hash() { return 1310605317U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
