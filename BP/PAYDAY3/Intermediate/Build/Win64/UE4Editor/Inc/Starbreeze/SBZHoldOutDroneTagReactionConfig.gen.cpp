// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutDroneTagReactionConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutDroneTagReactionConfig() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionSelectionConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutDroneReaction_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZHoldOutDroneTagReactionConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHoldOutDroneTagReactionConfig"), sizeof(FSBZHoldOutDroneTagReactionConfig), Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHoldOutDroneTagReactionConfig>()
{
	return FSBZHoldOutDroneTagReactionConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig(FSBZHoldOutDroneTagReactionConfig::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHoldOutDroneTagReactionConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutDroneTagReactionConfig
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutDroneTagReactionConfig()
	{
		UScriptStruct::DeferCppStructOps<FSBZHoldOutDroneTagReactionConfig>(FName(TEXT("SBZHoldOutDroneTagReactionConfig")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutDroneTagReactionConfig;
	struct Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectionConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoredOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bIgnoredOnDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoredOnDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoredOnClient_MetaData[];
#endif
		static void NewProp_bIgnoredOnClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoredOnClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireAndForget_MetaData[];
#endif
		static void NewProp_bFireAndForget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireAndForget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroneReactionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DroneReactionClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneTagReactionConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHoldOutDroneTagReactionConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_SelectionConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutDroneTagReactionConfig" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneTagReactionConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_SelectionConfig = { "SelectionConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHoldOutDroneTagReactionConfig, SelectionConfig), Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionSelectionConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_SelectionConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_SelectionConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnDedicatedServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutDroneTagReactionConfig" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneTagReactionConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnDedicatedServer_SetBit(void* Obj)
	{
		((FSBZHoldOutDroneTagReactionConfig*)Obj)->bIgnoredOnDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnDedicatedServer = { "bIgnoredOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZHoldOutDroneTagReactionConfig), &Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnClient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutDroneTagReactionConfig" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneTagReactionConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnClient_SetBit(void* Obj)
	{
		((FSBZHoldOutDroneTagReactionConfig*)Obj)->bIgnoredOnClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnClient = { "bIgnoredOnClient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZHoldOutDroneTagReactionConfig), &Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnClient_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bFireAndForget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutDroneTagReactionConfig" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneTagReactionConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bFireAndForget_SetBit(void* Obj)
	{
		((FSBZHoldOutDroneTagReactionConfig*)Obj)->bFireAndForget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bFireAndForget = { "bFireAndForget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZHoldOutDroneTagReactionConfig), &Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bFireAndForget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bFireAndForget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bFireAndForget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_DroneReactionClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutDroneTagReactionConfig" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneTagReactionConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_DroneReactionClass = { "DroneReactionClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHoldOutDroneTagReactionConfig, DroneReactionClass), Z_Construct_UClass_ASBZHoldOutDroneReaction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_DroneReactionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_DroneReactionClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_SelectionConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bIgnoredOnClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_bFireAndForget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::NewProp_DroneReactionClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHoldOutDroneTagReactionConfig",
		sizeof(FSBZHoldOutDroneTagReactionConfig),
		alignof(FSBZHoldOutDroneTagReactionConfig),
		Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHoldOutDroneTagReactionConfig"), sizeof(FSBZHoldOutDroneTagReactionConfig), Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig_Hash() { return 286990447U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
