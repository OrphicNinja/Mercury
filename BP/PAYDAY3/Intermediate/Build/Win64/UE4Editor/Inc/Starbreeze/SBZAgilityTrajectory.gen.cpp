// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityTrajectory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityTrajectory() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTrajectory();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZAgilityTrajectory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgilityTrajectory, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgilityTrajectory"), sizeof(FSBZAgilityTrajectory), Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgilityTrajectory>()
{
	return FSBZAgilityTrajectory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgilityTrajectory(FSBZAgilityTrajectory::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgilityTrajectory"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTrajectory
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTrajectory()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgilityTrajectory>(FName(TEXT("SBZAgilityTrajectory")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTrajectory;
	struct Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgilityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgilityType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[];
#endif
		static void NewProp_bValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForcedMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecomputeEndUsingAnimation_MetaData[];
#endif
		static void NewProp_bRecomputeEndUsingAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecomputeEndUsingAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgilityTrajectory>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_AgilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_AgilityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_AgilityType = { "AgilityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTrajectory, AgilityType), Z_Construct_UEnum_Starbreeze_ESBZAgilityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_AgilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_AgilityType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_Points_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTrajectory, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bValid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectory.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bValid_SetBit(void* Obj)
	{
		((FSBZAgilityTrajectory*)Obj)->bValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTrajectory), &Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_ForcedMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_ForcedMontage = { "ForcedMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTrajectory, ForcedMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_ForcedMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_ForcedMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bRecomputeEndUsingAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectory.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bRecomputeEndUsingAnimation_SetBit(void* Obj)
	{
		((FSBZAgilityTrajectory*)Obj)->bRecomputeEndUsingAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bRecomputeEndUsingAnimation = { "bRecomputeEndUsingAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTrajectory), &Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bRecomputeEndUsingAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bRecomputeEndUsingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bRecomputeEndUsingAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_AreaClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTrajectory, AreaClass), Z_Construct_UClass_UNavAreaBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_AreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_AreaClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_AgilityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_AgilityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_ForcedMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_bRecomputeEndUsingAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::NewProp_AreaClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgilityTrajectory",
		sizeof(FSBZAgilityTrajectory),
		alignof(FSBZAgilityTrajectory),
		Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTrajectory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgilityTrajectory"), sizeof(FSBZAgilityTrajectory), Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectory_Hash() { return 1117343363U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
