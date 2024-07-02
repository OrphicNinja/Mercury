// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficObstacleInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficObstacleInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficVolume_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZTrafficObstacleInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficObstacleInfo"), sizeof(FSBZTrafficObstacleInfo), Get_Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficObstacleInfo>()
{
	return FSBZTrafficObstacleInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficObstacleInfo(FSBZTrafficObstacleInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficObstacleInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficObstacleInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficObstacleInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficObstacleInfo>(FName(TEXT("SBZTrafficObstacleInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficObstacleInfo;
	struct Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObstacleActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleVehicle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObstacleVehicle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleTrafficVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObstacleTrafficVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficObstacleInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficObstacleInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficObstacleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficObstacleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleActor = { "ObstacleActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficObstacleInfo, ObstacleActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleVehicle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficObstacleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficObstacleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleVehicle = { "ObstacleVehicle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficObstacleInfo, ObstacleVehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleVehicle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleVehicle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleTrafficVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficObstacleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficObstacleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleTrafficVolume = { "ObstacleTrafficVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficObstacleInfo, ObstacleTrafficVolume), Z_Construct_UClass_ASBZTrafficVolume_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleTrafficVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleTrafficVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleVehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::NewProp_ObstacleTrafficVolume,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficObstacleInfo",
		sizeof(FSBZTrafficObstacleInfo),
		alignof(FSBZTrafficObstacleInfo),
		Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficObstacleInfo"), sizeof(FSBZTrafficObstacleInfo), Get_Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo_Hash() { return 3100691071U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
