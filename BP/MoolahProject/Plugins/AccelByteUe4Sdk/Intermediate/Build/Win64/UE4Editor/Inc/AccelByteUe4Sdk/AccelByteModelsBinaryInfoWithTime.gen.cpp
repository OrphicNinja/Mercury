// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsBinaryInfoWithTime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsBinaryInfoWithTime() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsBinaryInfoWithTime>() == std::is_polymorphic<FAccelByteModelsBinaryInfo>(), "USTRUCT FAccelByteModelsBinaryInfoWithTime cannot be polymorphic unless super FAccelByteModelsBinaryInfo is polymorphic");

class UScriptStruct* FAccelByteModelsBinaryInfoWithTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsBinaryInfoWithTime"), sizeof(FAccelByteModelsBinaryInfoWithTime), Get_Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsBinaryInfoWithTime>()
{
	return FAccelByteModelsBinaryInfoWithTime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime(FAccelByteModelsBinaryInfoWithTime::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsBinaryInfoWithTime"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBinaryInfoWithTime
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBinaryInfoWithTime()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsBinaryInfoWithTime>(FName(TEXT("AccelByteModelsBinaryInfoWithTime")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBinaryInfoWithTime;
	struct Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Created_At_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Created_At;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Updated_At_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Updated_At;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBinaryInfoWithTime.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsBinaryInfoWithTime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::NewProp_Created_At_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsBinaryInfoWithTime" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBinaryInfoWithTime.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::NewProp_Created_At = { "Created_At", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsBinaryInfoWithTime, Created_At), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::NewProp_Created_At_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::NewProp_Created_At_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::NewProp_Updated_At_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsBinaryInfoWithTime" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBinaryInfoWithTime.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::NewProp_Updated_At = { "Updated_At", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsBinaryInfoWithTime, Updated_At), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::NewProp_Updated_At_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::NewProp_Updated_At_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::NewProp_Created_At,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::NewProp_Updated_At,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfo,
		&NewStructOps,
		"AccelByteModelsBinaryInfoWithTime",
		sizeof(FAccelByteModelsBinaryInfoWithTime),
		alignof(FAccelByteModelsBinaryInfoWithTime),
		Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsBinaryInfoWithTime"), sizeof(FAccelByteModelsBinaryInfoWithTime), Get_Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBinaryInfoWithTime_Hash() { return 3542203942U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
