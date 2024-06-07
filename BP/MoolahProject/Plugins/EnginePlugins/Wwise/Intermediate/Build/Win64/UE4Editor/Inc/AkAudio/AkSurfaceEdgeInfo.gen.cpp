// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSurfaceEdgeInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceEdgeInfo() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkSurfaceEdgeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfaceEdgeInfo"), sizeof(FAkSurfaceEdgeInfo), Get_Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfaceEdgeInfo>()
{
	return FAkSurfaceEdgeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkSurfaceEdgeInfo(FAkSurfaceEdgeInfo::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkSurfaceEdgeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkSurfaceEdgeInfo
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkSurfaceEdgeInfo()
	{
		UScriptStruct::DeferCppStructOps<FAkSurfaceEdgeInfo>(FName(TEXT("AkSurfaceEdgeInfo")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkSurfaceEdgeInfo;
	struct Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkSurfaceEdgeInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfaceEdgeInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSurfaceEdgeInfo",
		sizeof(FAkSurfaceEdgeInfo),
		alignof(FAkSurfaceEdgeInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkSurfaceEdgeInfo"), sizeof(FAkSurfaceEdgeInfo), Get_Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Hash() { return 446291109U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
