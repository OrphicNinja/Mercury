// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsRejectFriendsNotif.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsRejectFriendsNotif() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsRejectFriendsNotif::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsRejectFriendsNotif"), sizeof(FAccelByteModelsRejectFriendsNotif), Get_Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsRejectFriendsNotif>()
{
	return FAccelByteModelsRejectFriendsNotif::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsRejectFriendsNotif(FAccelByteModelsRejectFriendsNotif::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsRejectFriendsNotif"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsRejectFriendsNotif
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsRejectFriendsNotif()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsRejectFriendsNotif>(FName(TEXT("AccelByteModelsRejectFriendsNotif")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsRejectFriendsNotif;
	struct Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRejectFriendsNotif.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsRejectFriendsNotif>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::NewProp_userId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRejectFriendsNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRejectFriendsNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRejectFriendsNotif, userId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::NewProp_userId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::NewProp_userId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::NewProp_userId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsRejectFriendsNotif",
		sizeof(FAccelByteModelsRejectFriendsNotif),
		alignof(FAccelByteModelsRejectFriendsNotif),
		Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsRejectFriendsNotif"), sizeof(FAccelByteModelsRejectFriendsNotif), Get_Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsRejectFriendsNotif_Hash() { return 3816632475U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
