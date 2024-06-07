// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkOutputDeviceID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkOutputDeviceID() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputDeviceID();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkOutputDeviceID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkOutputDeviceID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkOutputDeviceID, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkOutputDeviceID"), sizeof(FAkOutputDeviceID), Get_Z_Construct_UScriptStruct_FAkOutputDeviceID_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkOutputDeviceID>()
{
	return FAkOutputDeviceID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkOutputDeviceID(FAkOutputDeviceID::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkOutputDeviceID"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkOutputDeviceID
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkOutputDeviceID()
	{
		UScriptStruct::DeferCppStructOps<FAkOutputDeviceID>(FName(TEXT("AkOutputDeviceID")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkOutputDeviceID;
	struct Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IdDevice;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkOutputDeviceID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkOutputDeviceID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::NewProp_IdDevice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkOutputDeviceID" },
		{ "ModuleRelativePath", "Public/AkOutputDeviceID.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::NewProp_IdDevice = { "IdDevice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkOutputDeviceID, IdDevice), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::NewProp_IdDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::NewProp_IdDevice_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::NewProp_IdDevice,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkOutputDeviceID",
		sizeof(FAkOutputDeviceID),
		alignof(FAkOutputDeviceID),
		Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkOutputDeviceID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkOutputDeviceID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkOutputDeviceID"), sizeof(FAkOutputDeviceID), Get_Z_Construct_UScriptStruct_FAkOutputDeviceID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkOutputDeviceID_Hash() { return 1455688354U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
