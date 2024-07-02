// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsGroupUpdatedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsGroupUpdatedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsGroupUpdatedPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsGroupUpdatedPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsGroupUpdatedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsGroupUpdatedPayload"), sizeof(FAccelByteModelsGroupUpdatedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsGroupUpdatedPayload>()
{
	return FAccelByteModelsGroupUpdatedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload(FAccelByteModelsGroupUpdatedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsGroupUpdatedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGroupUpdatedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGroupUpdatedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsGroupUpdatedPayload>(FName(TEXT("AccelByteModelsGroupUpdatedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGroupUpdatedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigurationCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupMaxMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupMaxMember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupRegion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGroupUpdatedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsGroupUpdatedPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_ConfigurationCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGroupUpdatedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGroupUpdatedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_ConfigurationCode = { "ConfigurationCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGroupUpdatedPayload, ConfigurationCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_ConfigurationCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_ConfigurationCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGroupUpdatedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGroupUpdatedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGroupUpdatedPayload, GroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupMaxMember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGroupUpdatedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGroupUpdatedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupMaxMember = { "GroupMaxMember", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGroupUpdatedPayload, GroupMaxMember), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupMaxMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupMaxMember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGroupUpdatedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGroupUpdatedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGroupUpdatedPayload, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupRegion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGroupUpdatedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGroupUpdatedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupRegion = { "GroupRegion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGroupUpdatedPayload, GroupRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupRegion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_ConfigurationCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupMaxMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::NewProp_GroupRegion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsGroupUpdatedPayload",
		sizeof(FAccelByteModelsGroupUpdatedPayload),
		alignof(FAccelByteModelsGroupUpdatedPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsGroupUpdatedPayload"), sizeof(FAccelByteModelsGroupUpdatedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatedPayload_Hash() { return 2981291622U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
