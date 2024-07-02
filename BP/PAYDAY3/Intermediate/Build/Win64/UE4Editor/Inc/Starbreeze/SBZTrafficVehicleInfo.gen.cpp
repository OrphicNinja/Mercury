// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficVehicleInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficVehicleInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTrafficVehicleType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSBZTrafficVehicleInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficVehicleInfo"), sizeof(FSBZTrafficVehicleInfo), Get_Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficVehicleInfo>()
{
	return FSBZTrafficVehicleInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficVehicleInfo(FSBZTrafficVehicleInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficVehicleInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficVehicleInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficVehicleInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficVehicleInfo>(FName(TEXT("SBZTrafficVehicleInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficVehicleInfo;
	struct Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vehicle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentRoute_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRoute_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentRoute;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VehicleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VehicleType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObstacleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObstacleArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehindVehicleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehindVehicleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BehindVehicleArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WantedCruisingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WantedCruisingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WantedTurnCruisingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WantedTurnCruisingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WantedAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WantedAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WantedDeceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WantedDeceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCruisingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentCruisingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDeceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDeceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBraking_MetaData[];
#endif
		static void NewProp_bIsBraking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBraking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopped_MetaData[];
#endif
		static void NewProp_bStopped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficVehicleInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_Vehicle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficVehicleInfo, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_Vehicle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_Vehicle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentRoute_Inner = { "CurrentRoute", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentRoute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentRoute = { "CurrentRoute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficVehicleInfo, CurrentRoute), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentRoute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentRoute_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_VehicleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_VehicleType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_VehicleType = { "VehicleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficVehicleInfo, VehicleType), Z_Construct_UEnum_Starbreeze_ESBZTrafficVehicleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_VehicleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_VehicleType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_ObstacleArray_Inner = { "ObstacleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZTrafficObstacleInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_ObstacleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_ObstacleArray = { "ObstacleArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficVehicleInfo, ObstacleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_ObstacleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_ObstacleArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_BehindVehicleArray_Inner = { "BehindVehicleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_BehindVehicleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_BehindVehicleArray = { "BehindVehicleArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficVehicleInfo, BehindVehicleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_BehindVehicleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_BehindVehicleArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedCruisingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedCruisingSpeed = { "WantedCruisingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficVehicleInfo, WantedCruisingSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedCruisingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedCruisingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedTurnCruisingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedTurnCruisingSpeed = { "WantedTurnCruisingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficVehicleInfo, WantedTurnCruisingSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedTurnCruisingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedTurnCruisingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedAcceleration = { "WantedAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficVehicleInfo, WantedAcceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedDeceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedDeceleration = { "WantedDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficVehicleInfo, WantedDeceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedDeceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentCruisingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentCruisingSpeed = { "CurrentCruisingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficVehicleInfo, CurrentCruisingSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentCruisingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentCruisingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentAcceleration = { "CurrentAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficVehicleInfo, CurrentAcceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentDeceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentDeceleration = { "CurrentDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficVehicleInfo, CurrentDeceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentDeceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bIsBraking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bIsBraking_SetBit(void* Obj)
	{
		((FSBZTrafficVehicleInfo*)Obj)->bIsBraking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bIsBraking = { "bIsBraking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZTrafficVehicleInfo), &Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bIsBraking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bIsBraking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bIsBraking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bStopped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bStopped_SetBit(void* Obj)
	{
		((FSBZTrafficVehicleInfo*)Obj)->bStopped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bStopped = { "bStopped", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZTrafficVehicleInfo), &Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bStopped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_StopLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVehicleInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficVehicleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_StopLocation = { "StopLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficVehicleInfo, StopLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_StopLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_StopLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_Vehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentRoute_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentRoute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_VehicleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_VehicleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_ObstacleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_ObstacleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_BehindVehicleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_BehindVehicleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedCruisingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedTurnCruisingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_WantedDeceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentCruisingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_CurrentDeceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bIsBraking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_bStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::NewProp_StopLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficVehicleInfo",
		sizeof(FSBZTrafficVehicleInfo),
		alignof(FSBZTrafficVehicleInfo),
		Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficVehicleInfo"), sizeof(FSBZTrafficVehicleInfo), Get_Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo_Hash() { return 512297543U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
