// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularPartSlotConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularPartSlotConfiguration() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSharedPartList_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZModularPartSlotConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZModularPartSlotConfiguration"), sizeof(FSBZModularPartSlotConfiguration), Get_Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZModularPartSlotConfiguration>()
{
	return FSBZModularPartSlotConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZModularPartSlotConfiguration(FSBZModularPartSlotConfiguration::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZModularPartSlotConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZModularPartSlotConfiguration
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZModularPartSlotConfiguration()
	{
		UScriptStruct::DeferCppStructOps<FSBZModularPartSlotConfiguration>(FName(TEXT("SBZModularPartSlotConfiguration")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZModularPartSlotConfiguration;
	struct Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultPart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UniqueModParts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueModParts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UniqueModParts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SharedParts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedParts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SharedParts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZModularPartSlotConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZModularPartSlotConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_DefaultPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularPartSlotConfiguration" },
		{ "ModuleRelativePath", "Public/SBZModularPartSlotConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_DefaultPart = { "DefaultPart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularPartSlotConfiguration, DefaultPart), Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_DefaultPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_DefaultPart_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_UniqueModParts_Inner = { "UniqueModParts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_UniqueModParts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularPartSlotConfiguration" },
		{ "ModuleRelativePath", "Public/SBZModularPartSlotConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_UniqueModParts = { "UniqueModParts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularPartSlotConfiguration, UniqueModParts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_UniqueModParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_UniqueModParts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_SharedParts_Inner = { "SharedParts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSharedPartList_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_SharedParts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularPartSlotConfiguration" },
		{ "ModuleRelativePath", "Public/SBZModularPartSlotConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_SharedParts = { "SharedParts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularPartSlotConfiguration, SharedParts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_SharedParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_SharedParts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_DefaultPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_UniqueModParts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_UniqueModParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_SharedParts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::NewProp_SharedParts,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZModularPartSlotConfiguration",
		sizeof(FSBZModularPartSlotConfiguration),
		alignof(FSBZModularPartSlotConfiguration),
		Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZModularPartSlotConfiguration"), sizeof(FSBZModularPartSlotConfiguration), Get_Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration_Hash() { return 1769729062U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
