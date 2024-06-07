// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload"), sizeof(FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload>()
{
	return FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload(FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload>(FName(TEXT("AccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload",
		sizeof(FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload),
		alignof(FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload"), sizeof(FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserCurrentSeasonDataPayload_Hash() { return 821897538U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
