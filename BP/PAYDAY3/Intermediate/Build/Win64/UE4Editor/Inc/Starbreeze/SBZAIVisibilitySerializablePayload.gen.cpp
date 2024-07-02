// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIVisibilitySerializablePayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIVisibilitySerializablePayload() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
class UScriptStruct* FSBZAIVisibilitySerializablePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAIVisibilitySerializablePayload"), sizeof(FSBZAIVisibilitySerializablePayload), Get_Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAIVisibilitySerializablePayload>()
{
	return FSBZAIVisibilitySerializablePayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAIVisibilitySerializablePayload(FSBZAIVisibilitySerializablePayload::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAIVisibilitySerializablePayload"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIVisibilitySerializablePayload
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIVisibilitySerializablePayload()
	{
		UScriptStruct::DeferCppStructOps<FSBZAIVisibilitySerializablePayload>(FName(TEXT("SBZAIVisibilitySerializablePayload")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIVisibilitySerializablePayload;
	struct Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_CrouchDistances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CrouchDistances;
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_StandDistances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StandDistances;
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_UpAzymut15Distances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpAzymut15Distances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpAzymut15Distances;
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_UpAzymut30Distances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpAzymut30Distances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpAzymut30Distances;
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_UpAzymut45Distances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpAzymut45Distances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpAzymut45Distances;
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_UpAzymut60Distances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpAzymut60Distances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpAzymut60Distances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilitySerializablePayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAIVisibilitySerializablePayload>();
	}
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_CrouchDistances_Inner = { "CrouchDistances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_CrouchDistances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilitySerializablePayload" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilitySerializablePayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_CrouchDistances = { "CrouchDistances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIVisibilitySerializablePayload, CrouchDistances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_CrouchDistances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_CrouchDistances_MetaData)) };
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_StandDistances_Inner = { "StandDistances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_StandDistances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilitySerializablePayload" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilitySerializablePayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_StandDistances = { "StandDistances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIVisibilitySerializablePayload, StandDistances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_StandDistances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_StandDistances_MetaData)) };
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut15Distances_Inner = { "UpAzymut15Distances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut15Distances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilitySerializablePayload" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilitySerializablePayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut15Distances = { "UpAzymut15Distances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIVisibilitySerializablePayload, UpAzymut15Distances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut15Distances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut15Distances_MetaData)) };
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut30Distances_Inner = { "UpAzymut30Distances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut30Distances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilitySerializablePayload" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilitySerializablePayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut30Distances = { "UpAzymut30Distances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIVisibilitySerializablePayload, UpAzymut30Distances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut30Distances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut30Distances_MetaData)) };
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut45Distances_Inner = { "UpAzymut45Distances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut45Distances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilitySerializablePayload" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilitySerializablePayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut45Distances = { "UpAzymut45Distances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIVisibilitySerializablePayload, UpAzymut45Distances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut45Distances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut45Distances_MetaData)) };
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut60Distances_Inner = { "UpAzymut60Distances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut60Distances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilitySerializablePayload" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilitySerializablePayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut60Distances = { "UpAzymut60Distances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIVisibilitySerializablePayload, UpAzymut60Distances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut60Distances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut60Distances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_Center_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilitySerializablePayload" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilitySerializablePayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIVisibilitySerializablePayload, Center), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_Center_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_CrouchDistances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_CrouchDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_StandDistances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_StandDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut15Distances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut15Distances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut30Distances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut30Distances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut45Distances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut45Distances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut60Distances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_UpAzymut60Distances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::NewProp_Center,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAIVisibilitySerializablePayload",
		sizeof(FSBZAIVisibilitySerializablePayload),
		alignof(FSBZAIVisibilitySerializablePayload),
		Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAIVisibilitySerializablePayload"), sizeof(FSBZAIVisibilitySerializablePayload), Get_Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload_Hash() { return 2655579065U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
