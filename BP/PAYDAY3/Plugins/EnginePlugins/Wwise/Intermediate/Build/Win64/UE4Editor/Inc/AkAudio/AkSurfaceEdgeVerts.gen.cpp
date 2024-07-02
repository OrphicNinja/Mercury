// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSurfaceEdgeVerts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceEdgeVerts() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkSurfaceEdgeVerts::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfaceEdgeVerts"), sizeof(FAkSurfaceEdgeVerts), Get_Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfaceEdgeVerts>()
{
	return FAkSurfaceEdgeVerts::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkSurfaceEdgeVerts(FAkSurfaceEdgeVerts::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkSurfaceEdgeVerts"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkSurfaceEdgeVerts
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkSurfaceEdgeVerts()
	{
		UScriptStruct::DeferCppStructOps<FAkSurfaceEdgeVerts>(FName(TEXT("AkSurfaceEdgeVerts")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkSurfaceEdgeVerts;
	struct Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkSurfaceEdgeVerts.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfaceEdgeVerts>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSurfaceEdgeVerts",
		sizeof(FAkSurfaceEdgeVerts),
		alignof(FAkSurfaceEdgeVerts),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkSurfaceEdgeVerts"), sizeof(FAkSurfaceEdgeVerts), Get_Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Hash() { return 2556979075U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
