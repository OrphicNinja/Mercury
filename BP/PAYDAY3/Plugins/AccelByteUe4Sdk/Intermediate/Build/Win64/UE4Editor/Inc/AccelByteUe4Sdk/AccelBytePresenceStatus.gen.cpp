// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelBytePresenceStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelBytePresenceStatus() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelBytePresenceStatus();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAvailability();
// End Cross Module References
class UScriptStruct* FAccelBytePresenceStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelBytePresenceStatus, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelBytePresenceStatus"), sizeof(FAccelBytePresenceStatus), Get_Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelBytePresenceStatus>()
{
	return FAccelBytePresenceStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelBytePresenceStatus(FAccelBytePresenceStatus::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelBytePresenceStatus"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelBytePresenceStatus
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelBytePresenceStatus()
	{
		UScriptStruct::DeferCppStructOps<FAccelBytePresenceStatus>(FName(TEXT("AccelBytePresenceStatus")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelBytePresenceStatus;
	struct Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Availability_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Availability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Availability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Activity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelBytePresenceStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelBytePresenceStatus>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::NewProp_Availability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::NewProp_Availability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelBytePresenceStatus" },
		{ "ModuleRelativePath", "Public/AccelBytePresenceStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::NewProp_Availability = { "Availability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelBytePresenceStatus, Availability), Z_Construct_UEnum_AccelByteUe4Sdk_EAvailability, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::NewProp_Availability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::NewProp_Availability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::NewProp_Activity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelBytePresenceStatus" },
		{ "ModuleRelativePath", "Public/AccelBytePresenceStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::NewProp_Activity = { "Activity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelBytePresenceStatus, Activity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::NewProp_Activity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::NewProp_Activity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::NewProp_Availability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::NewProp_Availability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::NewProp_Activity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelBytePresenceStatus",
		sizeof(FAccelBytePresenceStatus),
		alignof(FAccelBytePresenceStatus),
		Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelBytePresenceStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelBytePresenceStatus"), sizeof(FAccelBytePresenceStatus), Get_Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelBytePresenceStatus_Hash() { return 3025309541U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
