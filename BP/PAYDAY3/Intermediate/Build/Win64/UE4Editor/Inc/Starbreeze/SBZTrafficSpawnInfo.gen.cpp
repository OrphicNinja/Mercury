// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficSpawnInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficSpawnInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTrafficVehicleType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FSBZTrafficSpawnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficSpawnInfo"), sizeof(FSBZTrafficSpawnInfo), Get_Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficSpawnInfo>()
{
	return FSBZTrafficSpawnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficSpawnInfo(FSBZTrafficSpawnInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficSpawnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficSpawnInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficSpawnInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficSpawnInfo>(FName(TEXT("SBZTrafficSpawnInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficSpawnInfo;
	struct Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_VehicleActorClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VehicleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VehicleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficSpawnInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficSpawnInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_VehicleActorClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSpawnInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficSpawnInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_VehicleActorClass = { "VehicleActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSpawnInfo, VehicleActorClass), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_VehicleActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_VehicleActorClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_VehicleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_VehicleType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSpawnInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficSpawnInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_VehicleType = { "VehicleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSpawnInfo, VehicleType), Z_Construct_UEnum_Starbreeze_ESBZTrafficVehicleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_VehicleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_VehicleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSpawnInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficSpawnInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSpawnInfo, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_SpawnTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_VehicleActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_VehicleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_VehicleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::NewProp_SpawnTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficSpawnInfo",
		sizeof(FSBZTrafficSpawnInfo),
		alignof(FSBZTrafficSpawnInfo),
		Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficSpawnInfo"), sizeof(FSBZTrafficSpawnInfo), Get_Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo_Hash() { return 506715249U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
