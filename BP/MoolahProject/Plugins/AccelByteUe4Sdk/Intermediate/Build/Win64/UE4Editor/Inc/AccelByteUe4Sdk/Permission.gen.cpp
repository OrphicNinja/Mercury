// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/Permission.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePermission() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPermission();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FPermission::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FPermission_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPermission, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("Permission"), sizeof(FPermission), Get_Z_Construct_UScriptStruct_FPermission_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FPermission>()
{
	return FPermission::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPermission(FPermission::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("Permission"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPermission
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPermission()
	{
		UScriptStruct::DeferCppStructOps<FPermission>(FName(TEXT("Permission")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPermission;
	struct Z_Construct_UScriptStruct_FPermission_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Resource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SchedAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SchedAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SchedCron_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SchedCron;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SchedRange_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SchedRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SchedRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPermission_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Permission.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPermission_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPermission>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPermission_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Permission" },
		{ "ModuleRelativePath", "Public/Permission.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPermission_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPermission, Action), METADATA_PARAMS(Z_Construct_UScriptStruct_FPermission_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPermission_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPermission_Statics::NewProp_Resource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Permission" },
		{ "ModuleRelativePath", "Public/Permission.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPermission_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPermission, Resource), METADATA_PARAMS(Z_Construct_UScriptStruct_FPermission_Statics::NewProp_Resource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPermission_Statics::NewProp_Resource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Permission" },
		{ "ModuleRelativePath", "Public/Permission.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedAction = { "SchedAction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPermission, SchedAction), METADATA_PARAMS(Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedCron_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Permission" },
		{ "ModuleRelativePath", "Public/Permission.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedCron = { "SchedCron", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPermission, SchedCron), METADATA_PARAMS(Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedCron_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedCron_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedRange_Inner = { "SchedRange", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Permission" },
		{ "ModuleRelativePath", "Public/Permission.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedRange = { "SchedRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPermission, SchedRange), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPermission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPermission_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPermission_Statics::NewProp_Resource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedCron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedRange_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPermission_Statics::NewProp_SchedRange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPermission_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"Permission",
		sizeof(FPermission),
		alignof(FPermission),
		Z_Construct_UScriptStruct_FPermission_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPermission_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPermission_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPermission_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPermission()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPermission_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Permission"), sizeof(FPermission), Get_Z_Construct_UScriptStruct_FPermission_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPermission_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPermission_Hash() { return 948796106U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
