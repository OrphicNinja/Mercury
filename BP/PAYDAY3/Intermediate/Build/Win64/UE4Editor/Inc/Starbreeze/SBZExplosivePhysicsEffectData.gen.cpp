// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZExplosivePhysicsEffectData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZExplosivePhysicsEffectData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
class UScriptStruct* FSBZExplosivePhysicsEffectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZExplosivePhysicsEffectData"), sizeof(FSBZExplosivePhysicsEffectData), Get_Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZExplosivePhysicsEffectData>()
{
	return FSBZExplosivePhysicsEffectData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZExplosivePhysicsEffectData(FSBZExplosivePhysicsEffectData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZExplosivePhysicsEffectData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZExplosivePhysicsEffectData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZExplosivePhysicsEffectData()
	{
		UScriptStruct::DeferCppStructOps<FSBZExplosivePhysicsEffectData>(FName(TEXT("SBZExplosivePhysicsEffectData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZExplosivePhysicsEffectData;
	struct Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpwardImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpwardImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpwardImpulseAsVel_MetaData[];
#endif
		static void NewProp_bUpwardImpulseAsVel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpwardImpulseAsVel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TorqueStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TorqueStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZExplosivePhysicsEffectData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZExplosivePhysicsEffectData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_UpwardImpulse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosivePhysicsEffectData" },
		{ "ModuleRelativePath", "Public/SBZExplosivePhysicsEffectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_UpwardImpulse = { "UpwardImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZExplosivePhysicsEffectData, UpwardImpulse), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_UpwardImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_UpwardImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_bUpwardImpulseAsVel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosivePhysicsEffectData" },
		{ "ModuleRelativePath", "Public/SBZExplosivePhysicsEffectData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_bUpwardImpulseAsVel_SetBit(void* Obj)
	{
		((FSBZExplosivePhysicsEffectData*)Obj)->bUpwardImpulseAsVel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_bUpwardImpulseAsVel = { "bUpwardImpulseAsVel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZExplosivePhysicsEffectData), &Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_bUpwardImpulseAsVel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_bUpwardImpulseAsVel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_bUpwardImpulseAsVel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_TorqueStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosivePhysicsEffectData" },
		{ "ModuleRelativePath", "Public/SBZExplosivePhysicsEffectData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_TorqueStrength = { "TorqueStrength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZExplosivePhysicsEffectData, TorqueStrength), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_TorqueStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_TorqueStrength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_UpwardImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_bUpwardImpulseAsVel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::NewProp_TorqueStrength,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZExplosivePhysicsEffectData",
		sizeof(FSBZExplosivePhysicsEffectData),
		alignof(FSBZExplosivePhysicsEffectData),
		Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZExplosivePhysicsEffectData"), sizeof(FSBZExplosivePhysicsEffectData), Get_Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData_Hash() { return 1237723920U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
