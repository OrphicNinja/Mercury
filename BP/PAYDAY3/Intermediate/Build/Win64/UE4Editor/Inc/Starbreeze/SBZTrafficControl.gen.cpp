// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficControl() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficControl();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTrafficVehicleControlType();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZTrafficControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficControl_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficControl, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficControl"), sizeof(FSBZTrafficControl), Get_Z_Construct_UScriptStruct_FSBZTrafficControl_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficControl>()
{
	return FSBZTrafficControl::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficControl(FSBZTrafficControl::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficControl"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficControl
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficControl()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficControl>(FName(TEXT("SBZTrafficControl")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficControl;
	struct Z_Construct_UScriptStruct_FSBZTrafficControl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vehicle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControlType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControlType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraveledDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraveledDistance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficControl.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficControl>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Vehicle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficControl" },
		{ "ModuleRelativePath", "Public/SBZTrafficControl.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficControl, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Vehicle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Vehicle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_ControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_ControlType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficControl" },
		{ "ModuleRelativePath", "Public/SBZTrafficControl.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_ControlType = { "ControlType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficControl, ControlType), Z_Construct_UEnum_Starbreeze_ESBZTrafficVehicleControlType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_ControlType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_ControlType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficControl" },
		{ "ModuleRelativePath", "Public/SBZTrafficControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficControl, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_ServerSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficControl" },
		{ "ModuleRelativePath", "Public/SBZTrafficControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_ServerSpeed = { "ServerSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficControl, ServerSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_ServerSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_ServerSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_TraveledDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficControl" },
		{ "ModuleRelativePath", "Public/SBZTrafficControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_TraveledDistance = { "TraveledDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficControl, TraveledDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_TraveledDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_TraveledDistance_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Path_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficControl" },
		{ "ModuleRelativePath", "Public/SBZTrafficControl.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficControl, Path), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Vehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_ControlType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_ControlType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_ServerSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_TraveledDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Path_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::NewProp_Path,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficControl",
		sizeof(FSBZTrafficControl),
		alignof(FSBZTrafficControl),
		Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficControl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficControl_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficControl"), sizeof(FSBZTrafficControl), Get_Z_Construct_UScriptStruct_FSBZTrafficControl_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficControl_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficControl_Hash() { return 2940438875U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
