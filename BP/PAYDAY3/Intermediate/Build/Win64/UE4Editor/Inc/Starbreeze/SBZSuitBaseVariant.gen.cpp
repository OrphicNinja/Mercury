// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitBaseVariant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitBaseVariant() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitBaseVariant();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSuitBaseVariant::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSuitBaseVariant, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSuitBaseVariant"), sizeof(FSBZSuitBaseVariant), Get_Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSuitBaseVariant>()
{
	return FSBZSuitBaseVariant::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSuitBaseVariant(FSBZSuitBaseVariant::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSuitBaseVariant"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitBaseVariant
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitBaseVariant()
	{
		UScriptStruct::DeferCppStructOps<FSBZSuitBaseVariant>(FName(TEXT("SBZSuitBaseVariant")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitBaseVariant;
	struct Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh3P;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LowerPartMaterialSlotIndex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerPartMaterialSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LowerPartMaterialSlotIndex;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UpperPartMaterialSlotIndex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperPartMaterialSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpperPartMaterialSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitBaseVariant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSuitBaseVariant>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_SkeletalMesh3P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitBaseVariant" },
		{ "ModuleRelativePath", "Public/SBZSuitBaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_SkeletalMesh3P = { "SkeletalMesh3P", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitBaseVariant, SkeletalMesh3P), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_SkeletalMesh3P_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_SkeletalMesh3P_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_LowerPartMaterialSlotIndex_Inner = { "LowerPartMaterialSlotIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_LowerPartMaterialSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitBaseVariant" },
		{ "ModuleRelativePath", "Public/SBZSuitBaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_LowerPartMaterialSlotIndex = { "LowerPartMaterialSlotIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitBaseVariant, LowerPartMaterialSlotIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_LowerPartMaterialSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_LowerPartMaterialSlotIndex_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_UpperPartMaterialSlotIndex_Inner = { "UpperPartMaterialSlotIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_UpperPartMaterialSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitBaseVariant" },
		{ "ModuleRelativePath", "Public/SBZSuitBaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_UpperPartMaterialSlotIndex = { "UpperPartMaterialSlotIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitBaseVariant, UpperPartMaterialSlotIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_UpperPartMaterialSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_UpperPartMaterialSlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_SkeletalMesh3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_LowerPartMaterialSlotIndex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_LowerPartMaterialSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_UpperPartMaterialSlotIndex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::NewProp_UpperPartMaterialSlotIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSuitBaseVariant",
		sizeof(FSBZSuitBaseVariant),
		alignof(FSBZSuitBaseVariant),
		Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitBaseVariant()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSuitBaseVariant"), sizeof(FSBZSuitBaseVariant), Get_Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSuitBaseVariant_Hash() { return 656797324U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
