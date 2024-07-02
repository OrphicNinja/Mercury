// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUserStatusNotif.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUserStatusNotif() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAvailability();
// End Cross Module References
class UScriptStruct* FAccelByteModelsUserStatusNotif::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUserStatusNotif"), sizeof(FAccelByteModelsUserStatusNotif), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUserStatusNotif>()
{
	return FAccelByteModelsUserStatusNotif::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUserStatusNotif(FAccelByteModelsUserStatusNotif::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUserStatusNotif"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserStatusNotif
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserStatusNotif()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUserStatusNotif>(FName(TEXT("AccelByteModelsUserStatusNotif")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserStatusNotif;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Availability_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Availability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Availability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Activity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSeenAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastSeenAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatusNotif.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUserStatusNotif>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_UserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatusNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatusNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatusNotif, UserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_UserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_UserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Availability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Availability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatusNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatusNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Availability = { "Availability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatusNotif, Availability), Z_Construct_UEnum_AccelByteUe4Sdk_EAvailability, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Availability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Availability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Activity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatusNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatusNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Activity = { "Activity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatusNotif, Activity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Activity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Activity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatusNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatusNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatusNotif, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_LastSeenAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatusNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatusNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_LastSeenAt = { "LastSeenAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatusNotif, LastSeenAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_LastSeenAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_LastSeenAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserStatusNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatusNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserStatusNotif, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Platform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_UserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Availability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Availability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Activity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_LastSeenAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::NewProp_Platform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsUserStatusNotif",
		sizeof(FAccelByteModelsUserStatusNotif),
		alignof(FAccelByteModelsUserStatusNotif),
		Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUserStatusNotif"), sizeof(FAccelByteModelsUserStatusNotif), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif_Hash() { return 2994159072U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
