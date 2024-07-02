// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSessionEndedNotification.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSessionEndedNotification() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsSessionEndedNotification::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSessionEndedNotification"), sizeof(FAccelByteModelsSessionEndedNotification), Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSessionEndedNotification>()
{
	return FAccelByteModelsSessionEndedNotification::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSessionEndedNotification(FAccelByteModelsSessionEndedNotification::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSessionEndedNotification"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionEndedNotification
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionEndedNotification()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSessionEndedNotification>(FName(TEXT("AccelByteModelsSessionEndedNotification")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionEndedNotification;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Is_active_MetaData[];
#endif
		static void NewProp_Is_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Is_active;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Session_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Session_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionEndedNotification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSessionEndedNotification>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::NewProp_Is_active_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionEndedNotification" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionEndedNotification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::NewProp_Is_active_SetBit(void* Obj)
	{
		((FAccelByteModelsSessionEndedNotification*)Obj)->Is_active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::NewProp_Is_active = { "Is_active", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsSessionEndedNotification), &Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::NewProp_Is_active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::NewProp_Is_active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::NewProp_Is_active_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::NewProp_Session_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionEndedNotification" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionEndedNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::NewProp_Session_id = { "Session_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionEndedNotification, Session_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::NewProp_Session_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::NewProp_Session_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::NewProp_Is_active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::NewProp_Session_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsSessionEndedNotification",
		sizeof(FAccelByteModelsSessionEndedNotification),
		alignof(FAccelByteModelsSessionEndedNotification),
		Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSessionEndedNotification"), sizeof(FAccelByteModelsSessionEndedNotification), Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionEndedNotification_Hash() { return 3844358081U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
