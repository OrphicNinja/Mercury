// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficObstacle_Debug.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficObstacle_Debug() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZTrafficObstacle_Debug::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficObstacle_Debug"), sizeof(FSBZTrafficObstacle_Debug), Get_Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficObstacle_Debug>()
{
	return FSBZTrafficObstacle_Debug::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficObstacle_Debug(FSBZTrafficObstacle_Debug::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficObstacle_Debug"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficObstacle_Debug
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficObstacle_Debug()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficObstacle_Debug>(FName(TEXT("SBZTrafficObstacle_Debug")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficObstacle_Debug;
	struct Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vehicle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObstacleActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficObstacle_Debug.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficObstacle_Debug>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::NewProp_Vehicle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficObstacle_Debug" },
		{ "ModuleRelativePath", "Public/SBZTrafficObstacle_Debug.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficObstacle_Debug, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::NewProp_Vehicle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::NewProp_Vehicle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::NewProp_ObstacleActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficObstacle_Debug" },
		{ "ModuleRelativePath", "Public/SBZTrafficObstacle_Debug.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::NewProp_ObstacleActor = { "ObstacleActor", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficObstacle_Debug, ObstacleActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::NewProp_ObstacleActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::NewProp_ObstacleActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::NewProp_Vehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::NewProp_ObstacleActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficObstacle_Debug",
		sizeof(FSBZTrafficObstacle_Debug),
		alignof(FSBZTrafficObstacle_Debug),
		Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficObstacle_Debug"), sizeof(FSBZTrafficObstacle_Debug), Get_Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficObstacle_Debug_Hash() { return 4109800971U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
