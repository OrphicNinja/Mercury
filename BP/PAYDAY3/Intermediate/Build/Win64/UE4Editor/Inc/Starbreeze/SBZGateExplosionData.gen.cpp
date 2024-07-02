// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGateExplosionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGateExplosionData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGateExplosionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDamageWeight();
// End Cross Module References
class UScriptStruct* FSBZGateExplosionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGateExplosionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGateExplosionData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGateExplosionData"), sizeof(FSBZGateExplosionData), Get_Z_Construct_UScriptStruct_FSBZGateExplosionData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGateExplosionData>()
{
	return FSBZGateExplosionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGateExplosionData(FSBZGateExplosionData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGateExplosionData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGateExplosionData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGateExplosionData()
	{
		UScriptStruct::DeferCppStructOps<FSBZGateExplosionData>(FName(TEXT("SBZGateExplosionData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGateExplosionData;
	struct Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCalculated_MetaData[];
#endif
		static void NewProp_bIsCalculated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCalculated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalculatedClosePaddingX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CalculatedClosePaddingX;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoxArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForceOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerImpulse;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageWeight_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageWeightModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageWeightModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGateExplosionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGateExplosionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_bIsCalculated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateExplosionData" },
		{ "ModuleRelativePath", "Public/SBZGateExplosionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_bIsCalculated_SetBit(void* Obj)
	{
		((FSBZGateExplosionData*)Obj)->bIsCalculated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_bIsCalculated = { "bIsCalculated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZGateExplosionData), &Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_bIsCalculated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_bIsCalculated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_bIsCalculated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_CalculatedClosePaddingX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateExplosionData" },
		{ "ModuleRelativePath", "Public/SBZGateExplosionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_CalculatedClosePaddingX = { "CalculatedClosePaddingX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGateExplosionData, CalculatedClosePaddingX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_CalculatedClosePaddingX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_CalculatedClosePaddingX_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_BoxArray_Inner = { "BoxArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZExplosionBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_BoxArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateExplosionData" },
		{ "ModuleRelativePath", "Public/SBZGateExplosionData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_BoxArray = { "BoxArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGateExplosionData, BoxArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_BoxArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_BoxArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_ForceOrigin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateExplosionData" },
		{ "ModuleRelativePath", "Public/SBZGateExplosionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_ForceOrigin = { "ForceOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGateExplosionData, ForceOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_ForceOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_ForceOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_GameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateExplosionData" },
		{ "ModuleRelativePath", "Public/SBZGateExplosionData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGateExplosionData, GameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_GameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_GameplayEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_PlayerImpulse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateExplosionData" },
		{ "ModuleRelativePath", "Public/SBZGateExplosionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_PlayerImpulse = { "PlayerImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGateExplosionData, PlayerImpulse), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_PlayerImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_PlayerImpulse_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_DamageWeight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_DamageWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateExplosionData" },
		{ "ModuleRelativePath", "Public/SBZGateExplosionData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_DamageWeight = { "DamageWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGateExplosionData, DamageWeight), Z_Construct_UEnum_Starbreeze_ESBZDamageWeight, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_DamageWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_DamageWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_DamageWeightModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateExplosionData" },
		{ "ModuleRelativePath", "Public/SBZGateExplosionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_DamageWeightModifier = { "DamageWeightModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGateExplosionData, DamageWeightModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_DamageWeightModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_DamageWeightModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_bIsCalculated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_CalculatedClosePaddingX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_BoxArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_BoxArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_ForceOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_GameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_PlayerImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_DamageWeight_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_DamageWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::NewProp_DamageWeightModifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGateExplosionData",
		sizeof(FSBZGateExplosionData),
		alignof(FSBZGateExplosionData),
		Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGateExplosionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGateExplosionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGateExplosionData"), sizeof(FSBZGateExplosionData), Get_Z_Construct_UScriptStruct_FSBZGateExplosionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGateExplosionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGateExplosionData_Hash() { return 1191860129U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
