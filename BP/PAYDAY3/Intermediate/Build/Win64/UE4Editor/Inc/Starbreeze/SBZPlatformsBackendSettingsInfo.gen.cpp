// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlatformsBackendSettingsInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlatformsBackendSettingsInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBackendSettings();
// End Cross Module References
class UScriptStruct* FSBZPlatformsBackendSettingsInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlatformsBackendSettingsInfo"), sizeof(FSBZPlatformsBackendSettingsInfo), Get_Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlatformsBackendSettingsInfo>()
{
	return FSBZPlatformsBackendSettingsInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlatformsBackendSettingsInfo(FSBZPlatformsBackendSettingsInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlatformsBackendSettingsInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlatformsBackendSettingsInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlatformsBackendSettingsInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlatformsBackendSettingsInfo>(FName(TEXT("SBZPlatformsBackendSettingsInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlatformsBackendSettingsInfo;
	struct Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlatformBackendSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformBackendSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlatformBackendSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlatformsBackendSettingsInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlatformsBackendSettingsInfo>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::NewProp_PlatformBackendSettings_Inner = { "PlatformBackendSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBackendSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::NewProp_PlatformBackendSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlatformsBackendSettingsInfo" },
		{ "ModuleRelativePath", "Public/SBZPlatformsBackendSettingsInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::NewProp_PlatformBackendSettings = { "PlatformBackendSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlatformsBackendSettingsInfo, PlatformBackendSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::NewProp_PlatformBackendSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::NewProp_PlatformBackendSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::NewProp_PlatformBackendSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::NewProp_PlatformBackendSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPlatformsBackendSettingsInfo",
		sizeof(FSBZPlatformsBackendSettingsInfo),
		alignof(FSBZPlatformsBackendSettingsInfo),
		Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlatformsBackendSettingsInfo"), sizeof(FSBZPlatformsBackendSettingsInfo), Get_Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo_Hash() { return 3366415485U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
