// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAccelerationBasedAngle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAccelerationBasedAngle() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZAccelerationBasedAngle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAccelerationBasedAngle"), sizeof(FSBZAccelerationBasedAngle), Get_Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAccelerationBasedAngle>()
{
	return FSBZAccelerationBasedAngle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAccelerationBasedAngle(FSBZAccelerationBasedAngle::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAccelerationBasedAngle"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAccelerationBasedAngle
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAccelerationBasedAngle()
	{
		UScriptStruct::DeferCppStructOps<FSBZAccelerationBasedAngle>(FName(TEXT("SBZAccelerationBasedAngle")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAccelerationBasedAngle;
	struct Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Deceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAccelerationBasedAngle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAccelerationBasedAngle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelerationBasedAngle" },
		{ "ModuleRelativePath", "Public/SBZAccelerationBasedAngle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAccelerationBasedAngle, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Acceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelerationBasedAngle" },
		{ "ModuleRelativePath", "Public/SBZAccelerationBasedAngle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAccelerationBasedAngle, Acceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Deceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelerationBasedAngle" },
		{ "ModuleRelativePath", "Public/SBZAccelerationBasedAngle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Deceleration = { "Deceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAccelerationBasedAngle, Deceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Deceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Deceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::NewProp_Deceleration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAccelerationBasedAngle",
		sizeof(FSBZAccelerationBasedAngle),
		alignof(FSBZAccelerationBasedAngle),
		Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAccelerationBasedAngle"), sizeof(FSBZAccelerationBasedAngle), Get_Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle_Hash() { return 3429286249U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
