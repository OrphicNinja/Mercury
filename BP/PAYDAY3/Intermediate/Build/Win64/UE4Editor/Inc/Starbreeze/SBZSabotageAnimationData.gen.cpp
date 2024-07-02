// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSabotageAnimationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSabotageAnimationData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSabotageAnimationData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
class UScriptStruct* FSBZSabotageAnimationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSabotageAnimationData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSabotageAnimationData"), sizeof(FSBZSabotageAnimationData), Get_Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSabotageAnimationData>()
{
	return FSBZSabotageAnimationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSabotageAnimationData(FSBZSabotageAnimationData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSabotageAnimationData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSabotageAnimationData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSabotageAnimationData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSabotageAnimationData>(FName(TEXT("SBZSabotageAnimationData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSabotageAnimationData;
	struct Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptedHeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcceptedHeights;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSabotageAnimationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSabotageAnimationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotageAnimationData" },
		{ "ModuleRelativePath", "Public/SBZSabotageAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSabotageAnimationData, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::NewProp_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::NewProp_AcceptedHeights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotageAnimationData" },
		{ "ModuleRelativePath", "Public/SBZSabotageAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::NewProp_AcceptedHeights = { "AcceptedHeights", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSabotageAnimationData, AcceptedHeights), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::NewProp_AcceptedHeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::NewProp_AcceptedHeights_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::NewProp_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::NewProp_AcceptedHeights,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSabotageAnimationData",
		sizeof(FSBZSabotageAnimationData),
		alignof(FSBZSabotageAnimationData),
		Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSabotageAnimationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSabotageAnimationData"), sizeof(FSBZSabotageAnimationData), Get_Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSabotageAnimationData_Hash() { return 3069472316U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
