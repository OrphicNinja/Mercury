// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVolumeTypeSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVolumeTypeSetting() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVolumeTypeSetting();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZVolumeTypeSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVolumeTypeSetting, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVolumeTypeSetting"), sizeof(FSBZVolumeTypeSetting), Get_Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVolumeTypeSetting>()
{
	return FSBZVolumeTypeSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVolumeTypeSetting(FSBZVolumeTypeSetting::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVolumeTypeSetting"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVolumeTypeSetting
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVolumeTypeSetting()
	{
		UScriptStruct::DeferCppStructOps<FSBZVolumeTypeSetting>(FName(TEXT("SBZVolumeTypeSetting")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVolumeTypeSetting;
	struct Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVolumeTypeSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVolumeTypeSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::NewProp_RTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeTypeSetting" },
		{ "ModuleRelativePath", "Public/SBZVolumeTypeSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVolumeTypeSetting, RTPC), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::NewProp_RTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::NewProp_RTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::NewProp_SoundClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeTypeSetting" },
		{ "ModuleRelativePath", "Public/SBZVolumeTypeSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVolumeTypeSetting, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::NewProp_SoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::NewProp_SoundClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::NewProp_RTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::NewProp_SoundClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVolumeTypeSetting",
		sizeof(FSBZVolumeTypeSetting),
		alignof(FSBZVolumeTypeSetting),
		Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVolumeTypeSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVolumeTypeSetting"), sizeof(FSBZVolumeTypeSetting), Get_Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVolumeTypeSetting_Hash() { return 1750582803U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
