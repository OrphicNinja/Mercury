// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/CountryInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCountryInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FCountryInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FCountryInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FCountryInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCountryInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("CountryInfo"), sizeof(FCountryInfo), Get_Z_Construct_UScriptStruct_FCountryInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FCountryInfo>()
{
	return FCountryInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCountryInfo(FCountryInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("CountryInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFCountryInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFCountryInfo()
	{
		UScriptStruct::DeferCppStructOps<FCountryInfo>(FName(TEXT("CountryInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFCountryInfo;
	struct Z_Construct_UScriptStruct_FCountryInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountryCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CountryCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CountryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_City_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_City;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCountryInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CountryInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCountryInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCountryInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_CountryCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CountryInfo" },
		{ "ModuleRelativePath", "Public/CountryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_CountryCode = { "CountryCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCountryInfo, CountryCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_CountryCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_CountryCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_CountryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CountryInfo" },
		{ "ModuleRelativePath", "Public/CountryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_CountryName = { "CountryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCountryInfo, CountryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_CountryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_CountryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CountryInfo" },
		{ "ModuleRelativePath", "Public/CountryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCountryInfo, State), METADATA_PARAMS(Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_City_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CountryInfo" },
		{ "ModuleRelativePath", "Public/CountryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_City = { "City", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCountryInfo, City), METADATA_PARAMS(Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_City_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_City_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCountryInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_CountryCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_CountryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountryInfo_Statics::NewProp_City,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCountryInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"CountryInfo",
		sizeof(FCountryInfo),
		alignof(FCountryInfo),
		Z_Construct_UScriptStruct_FCountryInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCountryInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCountryInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCountryInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CountryInfo"), sizeof(FCountryInfo), Get_Z_Construct_UScriptStruct_FCountryInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCountryInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCountryInfo_Hash() { return 1692333706U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
