// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUIWeaponStatWeightContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUIWeaponStatWeightContainer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZUIWeaponStatWeightContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZUIWeaponStatWeightContainer"), sizeof(FSBZUIWeaponStatWeightContainer), Get_Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZUIWeaponStatWeightContainer>()
{
	return FSBZUIWeaponStatWeightContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZUIWeaponStatWeightContainer(FSBZUIWeaponStatWeightContainer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZUIWeaponStatWeightContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIWeaponStatWeightContainer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIWeaponStatWeightContainer()
	{
		UScriptStruct::DeferCppStructOps<FSBZUIWeaponStatWeightContainer>(FName(TEXT("SBZUIWeaponStatWeightContainer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIWeaponStatWeightContainer;
	struct Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeanInputArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeanInputArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeanInputArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VarianceInputArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VarianceInputArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VarianceInputArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightHiddenArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightHiddenArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightHiddenArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BiasHiddenArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BiasHiddenArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BiasHiddenArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightOutputArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightOutputArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightOutputArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BiasOutputArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BiasOutputArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BiasOutputArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatWeightContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZUIWeaponStatWeightContainer>();
	}
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_MeanInputArray_Inner = { "MeanInputArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_MeanInputArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIWeaponStatWeightContainer" },
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatWeightContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_MeanInputArray = { "MeanInputArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIWeaponStatWeightContainer, MeanInputArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_MeanInputArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_MeanInputArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_VarianceInputArray_Inner = { "VarianceInputArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_VarianceInputArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIWeaponStatWeightContainer" },
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatWeightContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_VarianceInputArray = { "VarianceInputArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIWeaponStatWeightContainer, VarianceInputArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_VarianceInputArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_VarianceInputArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightHiddenArray_Inner = { "WeightHiddenArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightHiddenArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIWeaponStatWeightContainer" },
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatWeightContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightHiddenArray = { "WeightHiddenArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIWeaponStatWeightContainer, WeightHiddenArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightHiddenArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightHiddenArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasHiddenArray_Inner = { "BiasHiddenArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasHiddenArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIWeaponStatWeightContainer" },
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatWeightContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasHiddenArray = { "BiasHiddenArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIWeaponStatWeightContainer, BiasHiddenArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasHiddenArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasHiddenArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightOutputArray_Inner = { "WeightOutputArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightOutputArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIWeaponStatWeightContainer" },
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatWeightContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightOutputArray = { "WeightOutputArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIWeaponStatWeightContainer, WeightOutputArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightOutputArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightOutputArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasOutputArray_Inner = { "BiasOutputArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasOutputArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIWeaponStatWeightContainer" },
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatWeightContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasOutputArray = { "BiasOutputArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIWeaponStatWeightContainer, BiasOutputArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasOutputArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasOutputArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_MeanInputArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_MeanInputArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_VarianceInputArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_VarianceInputArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightHiddenArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightHiddenArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasHiddenArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasHiddenArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightOutputArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_WeightOutputArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasOutputArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::NewProp_BiasOutputArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZUIWeaponStatWeightContainer",
		sizeof(FSBZUIWeaponStatWeightContainer),
		alignof(FSBZUIWeaponStatWeightContainer),
		Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZUIWeaponStatWeightContainer"), sizeof(FSBZUIWeaponStatWeightContainer), Get_Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer_Hash() { return 1200443632U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
