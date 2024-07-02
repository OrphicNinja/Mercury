// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkPluginInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPluginInfo() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPluginInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkPluginInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkPluginInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPluginInfo, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPluginInfo"), sizeof(FAkPluginInfo), Get_Z_Construct_UScriptStruct_FAkPluginInfo_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkPluginInfo>()
{
	return FAkPluginInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkPluginInfo(FAkPluginInfo::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkPluginInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkPluginInfo
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkPluginInfo()
	{
		UScriptStruct::DeferCppStructOps<FAkPluginInfo>(FName(TEXT("AkPluginInfo")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkPluginInfo;
	struct Z_Construct_UScriptStruct_FAkPluginInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PluginID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DLL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkPluginInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPluginInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPluginInfo" },
		{ "ModuleRelativePath", "Public/AkPluginInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkPluginInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPluginInfo" },
		{ "ModuleRelativePath", "Public/AkPluginInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID = { "PluginID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkPluginInfo, PluginID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPluginInfo" },
		{ "ModuleRelativePath", "Public/AkPluginInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL = { "DLL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkPluginInfo, DLL), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkPluginInfo",
		sizeof(FAkPluginInfo),
		alignof(FAkPluginInfo),
		Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkPluginInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkPluginInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkPluginInfo"), sizeof(FAkPluginInfo), Get_Z_Construct_UScriptStruct_FAkPluginInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkPluginInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkPluginInfo_Hash() { return 1999099287U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
