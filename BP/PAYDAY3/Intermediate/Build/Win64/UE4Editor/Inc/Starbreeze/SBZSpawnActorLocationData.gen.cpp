// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnActorLocationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnActorLocationData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnActorLocationData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLocationInformation();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnAttachData();
// End Cross Module References
class UScriptStruct* FSBZSpawnActorLocationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSpawnActorLocationData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSpawnActorLocationData"), sizeof(FSBZSpawnActorLocationData), Get_Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSpawnActorLocationData>()
{
	return FSBZSpawnActorLocationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSpawnActorLocationData(FSBZSpawnActorLocationData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSpawnActorLocationData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnActorLocationData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnActorLocationData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSpawnActorLocationData>(FName(TEXT("SBZSpawnActorLocationData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnActorLocationData;
	struct Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorLocationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorLocationInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomLocationIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoomLocationIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnAttachDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAttachDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnAttachDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnActorLocationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSpawnActorLocationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_SpawnActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnActorLocationData" },
		{ "ModuleRelativePath", "Public/SBZSpawnActorLocationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_SpawnActor = { "SpawnActor", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnActorLocationData, SpawnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_SpawnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_SpawnActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_ActorLocationInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnActorLocationData" },
		{ "ModuleRelativePath", "Public/SBZSpawnActorLocationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_ActorLocationInfo = { "ActorLocationInfo", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnActorLocationData, ActorLocationInfo), Z_Construct_UScriptStruct_FSBZLocationInformation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_ActorLocationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_ActorLocationInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_RoomLocationIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnActorLocationData" },
		{ "ModuleRelativePath", "Public/SBZSpawnActorLocationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_RoomLocationIndex = { "RoomLocationIndex", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnActorLocationData, RoomLocationIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_RoomLocationIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_RoomLocationIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_SpawnAttachDataArray_Inner = { "SpawnAttachDataArray", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSpawnAttachData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_SpawnAttachDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnActorLocationData" },
		{ "ModuleRelativePath", "Public/SBZSpawnActorLocationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_SpawnAttachDataArray = { "SpawnAttachDataArray", nullptr, (EPropertyFlags)0x0010008000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnActorLocationData, SpawnAttachDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_SpawnAttachDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_SpawnAttachDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_SpawnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_ActorLocationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_RoomLocationIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_SpawnAttachDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::NewProp_SpawnAttachDataArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSpawnActorLocationData",
		sizeof(FSBZSpawnActorLocationData),
		alignof(FSBZSpawnActorLocationData),
		Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnActorLocationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSpawnActorLocationData"), sizeof(FSBZSpawnActorLocationData), Get_Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnActorLocationData_Hash() { return 1144319318U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
