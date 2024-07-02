// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippableRuntime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippableRuntime() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableRuntime();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableGadgetData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGadget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponSightData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZEquippableRuntime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEquippableRuntime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEquippableRuntime, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEquippableRuntime"), sizeof(FSBZEquippableRuntime), Get_Z_Construct_UScriptStruct_FSBZEquippableRuntime_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEquippableRuntime>()
{
	return FSBZEquippableRuntime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEquippableRuntime(FSBZEquippableRuntime::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEquippableRuntime"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippableRuntime
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippableRuntime()
	{
		UScriptStruct::DeferCppStructOps<FSBZEquippableRuntime>(FName(TEXT("SBZEquippableRuntime")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippableRuntime;
	struct Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GadgetDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GadgetDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GadgetDataArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GadgetActorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GadgetActorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GadgetActorArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SightArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSightIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentSightIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSightData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentSightData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippableRuntime.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEquippableRuntime>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetDataArray_Inner = { "GadgetDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZEquippableGadgetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableRuntime" },
		{ "ModuleRelativePath", "Public/SBZEquippableRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetDataArray = { "GadgetDataArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippableRuntime, GadgetDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetDataArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetActorArray_Inner = { "GadgetActorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZGadget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetActorArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableRuntime" },
		{ "ModuleRelativePath", "Public/SBZEquippableRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetActorArray = { "GadgetActorArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippableRuntime, GadgetActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetActorArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_SightArray_Inner = { "SightArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZWeaponSightData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_SightArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableRuntime" },
		{ "ModuleRelativePath", "Public/SBZEquippableRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_SightArray = { "SightArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippableRuntime, SightArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_SightArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_SightArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_CurrentSightIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableRuntime" },
		{ "ModuleRelativePath", "Public/SBZEquippableRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_CurrentSightIndex = { "CurrentSightIndex", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippableRuntime, CurrentSightIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_CurrentSightIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_CurrentSightIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_CurrentSightData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableRuntime" },
		{ "ModuleRelativePath", "Public/SBZEquippableRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_CurrentSightData = { "CurrentSightData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippableRuntime, CurrentSightData), Z_Construct_UClass_USBZWeaponSightData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_CurrentSightData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_CurrentSightData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_GadgetActorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_SightArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_SightArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_CurrentSightIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::NewProp_CurrentSightData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEquippableRuntime",
		sizeof(FSBZEquippableRuntime),
		alignof(FSBZEquippableRuntime),
		Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableRuntime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEquippableRuntime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEquippableRuntime"), sizeof(FSBZEquippableRuntime), Get_Z_Construct_UScriptStruct_FSBZEquippableRuntime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEquippableRuntime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEquippableRuntime_Hash() { return 3797435615U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
