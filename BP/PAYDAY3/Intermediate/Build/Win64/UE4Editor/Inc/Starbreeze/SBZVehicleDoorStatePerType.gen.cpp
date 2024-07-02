// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleDoorStatePerType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleDoorStatePerType() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorState();
// End Cross Module References
class UScriptStruct* FSBZVehicleDoorStatePerType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVehicleDoorStatePerType"), sizeof(FSBZVehicleDoorStatePerType), Get_Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVehicleDoorStatePerType>()
{
	return FSBZVehicleDoorStatePerType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVehicleDoorStatePerType(FSBZVehicleDoorStatePerType::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVehicleDoorStatePerType"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleDoorStatePerType
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleDoorStatePerType()
	{
		UScriptStruct::DeferCppStructOps<FSBZVehicleDoorStatePerType>(FName(TEXT("SBZVehicleDoorStatePerType")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleDoorStatePerType;
	struct Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DoorType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DoorType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DoorState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DoorState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleDoorStatePerType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVehicleDoorStatePerType>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleDoorStatePerType" },
		{ "ModuleRelativePath", "Public/SBZVehicleDoorStatePerType.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleDoorStatePerType, DoorType), Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleDoorStatePerType" },
		{ "ModuleRelativePath", "Public/SBZVehicleDoorStatePerType.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorState = { "DoorState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleDoorStatePerType, DoorState), Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::NewProp_DoorState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVehicleDoorStatePerType",
		sizeof(FSBZVehicleDoorStatePerType),
		alignof(FSBZVehicleDoorStatePerType),
		Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVehicleDoorStatePerType"), sizeof(FSBZVehicleDoorStatePerType), Get_Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType_Hash() { return 3458583842U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
