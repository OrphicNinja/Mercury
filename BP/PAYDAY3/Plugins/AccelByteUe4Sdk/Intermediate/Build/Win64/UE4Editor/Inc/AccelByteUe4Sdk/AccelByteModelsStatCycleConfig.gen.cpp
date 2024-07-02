// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsStatCycleConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsStatCycleConfig() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCycle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsStatCycleConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsStatCycleConfig"), sizeof(FAccelByteModelsStatCycleConfig), Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsStatCycleConfig>()
{
	return FAccelByteModelsStatCycleConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsStatCycleConfig(FAccelByteModelsStatCycleConfig::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsStatCycleConfig"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsStatCycleConfig
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsStatCycleConfig()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsStatCycleConfig>(FName(TEXT("AccelByteModelsStatCycleConfig")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsStatCycleConfig;
	struct Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CycleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CycleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CycleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResetDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResetDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetMonth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResetMonth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeasonPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeasonPeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsStatCycleConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Namespace_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CycleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CycleType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CycleType = { "CycleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, CycleType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCycle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CycleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CycleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetTime = { "ResetTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, ResetTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetDay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetDay = { "ResetDay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, ResetDay), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetDate = { "ResetDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, ResetDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetMonth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetMonth = { "ResetMonth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, ResetMonth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetMonth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetMonth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_SeasonPeriod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_SeasonPeriod = { "SeasonPeriod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, SeasonPeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_SeasonPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_SeasonPeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CurrentVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CurrentVersion = { "CurrentVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, CurrentVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CurrentVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CurrentVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_NextReset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_NextReset = { "NextReset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, NextReset), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_NextReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_NextReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Start_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, Start), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_End_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, End), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleConfig, UpdatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_UpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_UpdatedAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CycleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CycleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_ResetMonth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_SeasonPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CurrentVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_NextReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::NewProp_UpdatedAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsStatCycleConfig",
		sizeof(FAccelByteModelsStatCycleConfig),
		alignof(FAccelByteModelsStatCycleConfig),
		Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsStatCycleConfig"), sizeof(FAccelByteModelsStatCycleConfig), Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleConfig_Hash() { return 4272066441U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
