// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZVehicleInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVehicleInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVehicleInfo"), sizeof(FSBZVehicleInfo), Get_Z_Construct_UScriptStruct_FSBZVehicleInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVehicleInfo>()
{
	return FSBZVehicleInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVehicleInfo(FSBZVehicleInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVehicleInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZVehicleInfo>(FName(TEXT("SBZVehicleInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleInfo;
	struct Z_Construct_UScriptStruct_FSBZVehicleInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVehicleInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVehicleInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVehicleInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVehicleInfo",
		sizeof(FSBZVehicleInfo),
		alignof(FSBZVehicleInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVehicleInfo"), sizeof(FSBZVehicleInfo), Get_Z_Construct_UScriptStruct_FSBZVehicleInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVehicleInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleInfo_Hash() { return 704625161U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
