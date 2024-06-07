// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemAccelByte/Public/AccelByteUniqueIdComposite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteUniqueIdComposite() {}
// Cross Module References
	ONLINESUBSYSTEMACCELBYTE_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemAccelByte();
// End Cross Module References
class UScriptStruct* FAccelByteUniqueIdComposite::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMACCELBYTE_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite, Z_Construct_UPackage__Script_OnlineSubsystemAccelByte(), TEXT("AccelByteUniqueIdComposite"), sizeof(FAccelByteUniqueIdComposite), Get_Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMACCELBYTE_API UScriptStruct* StaticStruct<FAccelByteUniqueIdComposite>()
{
	return FAccelByteUniqueIdComposite::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteUniqueIdComposite(FAccelByteUniqueIdComposite::StaticStruct, TEXT("/Script/OnlineSubsystemAccelByte"), TEXT("AccelByteUniqueIdComposite"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemAccelByte_StaticRegisterNativesFAccelByteUniqueIdComposite
{
	FScriptStruct_OnlineSubsystemAccelByte_StaticRegisterNativesFAccelByteUniqueIdComposite()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteUniqueIdComposite>(FName(TEXT("AccelByteUniqueIdComposite")));
	}
} ScriptStruct_OnlineSubsystemAccelByte_StaticRegisterNativesFAccelByteUniqueIdComposite;
	struct Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteUniqueIdComposite.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteUniqueIdComposite>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteUniqueIdComposite" },
		{ "ModuleRelativePath", "Public/AccelByteUniqueIdComposite.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteUniqueIdComposite, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_PlatformType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteUniqueIdComposite" },
		{ "ModuleRelativePath", "Public/AccelByteUniqueIdComposite.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteUniqueIdComposite, PlatformType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_PlatformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_PlatformType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_PlatformId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteUniqueIdComposite" },
		{ "ModuleRelativePath", "Public/AccelByteUniqueIdComposite.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteUniqueIdComposite, PlatformId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_PlatformId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::NewProp_PlatformId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemAccelByte,
		nullptr,
		&NewStructOps,
		"AccelByteUniqueIdComposite",
		sizeof(FAccelByteUniqueIdComposite),
		alignof(FAccelByteUniqueIdComposite),
		Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemAccelByte();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteUniqueIdComposite"), sizeof(FAccelByteUniqueIdComposite), Get_Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteUniqueIdComposite_Hash() { return 244854877U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
