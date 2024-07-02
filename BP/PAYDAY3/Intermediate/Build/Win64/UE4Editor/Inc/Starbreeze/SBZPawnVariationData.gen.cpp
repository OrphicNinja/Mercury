// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnVariationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnVariationData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnVariationData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIEquipmentData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVariationSetData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
// End Cross Module References
class UScriptStruct* FSBZPawnVariationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPawnVariationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPawnVariationData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPawnVariationData"), sizeof(FSBZPawnVariationData), Get_Z_Construct_UScriptStruct_FSBZPawnVariationData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPawnVariationData>()
{
	return FSBZPawnVariationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPawnVariationData(FSBZPawnVariationData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPawnVariationData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPawnVariationData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPawnVariationData()
	{
		UScriptStruct::DeferCppStructOps<FSBZPawnVariationData>(FName(TEXT("SBZPawnVariationData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPawnVariationData;
	struct Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideEquipmentData_MetaData[];
#endif
		static void NewProp_bOverrideEquipmentData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideEquipmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideInitialEquippableIndex_MetaData[];
#endif
		static void NewProp_bOverrideInitialEquippableIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideInitialEquippableIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialEquippableIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialEquippableIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideVariationData_MetaData[];
#endif
		static void NewProp_bOverrideVariationData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideVariationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VariationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideVariationDataIntervals_MetaData[];
#endif
		static void NewProp_bOverrideVariationDataIntervals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideVariationDataIntervals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariationCategoryIndexIntervals_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariationCategoryIndexIntervals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnVariationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPawnVariationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_PawnClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnVariationData" },
		{ "ModuleRelativePath", "Public/SBZPawnVariationData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnVariationData, PawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_PawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_PawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideEquipmentData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnVariationData" },
		{ "ModuleRelativePath", "Public/SBZPawnVariationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideEquipmentData_SetBit(void* Obj)
	{
		((FSBZPawnVariationData*)Obj)->bOverrideEquipmentData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideEquipmentData = { "bOverrideEquipmentData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPawnVariationData), &Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideEquipmentData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideEquipmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideEquipmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_EquipmentData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnVariationData" },
		{ "ModuleRelativePath", "Public/SBZPawnVariationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnVariationData, EquipmentData), Z_Construct_UClass_USBZAIEquipmentData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_EquipmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_EquipmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideInitialEquippableIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnVariationData" },
		{ "ModuleRelativePath", "Public/SBZPawnVariationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideInitialEquippableIndex_SetBit(void* Obj)
	{
		((FSBZPawnVariationData*)Obj)->bOverrideInitialEquippableIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideInitialEquippableIndex = { "bOverrideInitialEquippableIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPawnVariationData), &Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideInitialEquippableIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideInitialEquippableIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideInitialEquippableIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_InitialEquippableIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnVariationData" },
		{ "ModuleRelativePath", "Public/SBZPawnVariationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_InitialEquippableIndex = { "InitialEquippableIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnVariationData, InitialEquippableIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_InitialEquippableIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_InitialEquippableIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnVariationData" },
		{ "ModuleRelativePath", "Public/SBZPawnVariationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationData_SetBit(void* Obj)
	{
		((FSBZPawnVariationData*)Obj)->bOverrideVariationData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationData = { "bOverrideVariationData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPawnVariationData), &Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_VariationData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnVariationData" },
		{ "ModuleRelativePath", "Public/SBZPawnVariationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_VariationData = { "VariationData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnVariationData, VariationData), Z_Construct_UClass_USBZVariationSetData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_VariationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_VariationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationDataIntervals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnVariationData" },
		{ "ModuleRelativePath", "Public/SBZPawnVariationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationDataIntervals_SetBit(void* Obj)
	{
		((FSBZPawnVariationData*)Obj)->bOverrideVariationDataIntervals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationDataIntervals = { "bOverrideVariationDataIntervals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPawnVariationData), &Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationDataIntervals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationDataIntervals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationDataIntervals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_VariationCategoryIndexIntervals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnVariationData" },
		{ "ModuleRelativePath", "Public/SBZPawnVariationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_VariationCategoryIndexIntervals = { "VariationCategoryIndexIntervals", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(VariationCategoryIndexIntervals, FSBZPawnVariationData), STRUCT_OFFSET(FSBZPawnVariationData, VariationCategoryIndexIntervals), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_VariationCategoryIndexIntervals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_VariationCategoryIndexIntervals_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_PawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideEquipmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_EquipmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideInitialEquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_InitialEquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_VariationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_bOverrideVariationDataIntervals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::NewProp_VariationCategoryIndexIntervals,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPawnVariationData",
		sizeof(FSBZPawnVariationData),
		alignof(FSBZPawnVariationData),
		Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnVariationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPawnVariationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPawnVariationData"), sizeof(FSBZPawnVariationData), Get_Z_Construct_UScriptStruct_FSBZPawnVariationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPawnVariationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPawnVariationData_Hash() { return 2405907601U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
