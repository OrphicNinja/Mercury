// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutDroneReactionArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutDroneReactionArray() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutDroneReaction_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZHoldOutDroneReactionArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHoldOutDroneReactionArray"), sizeof(FSBZHoldOutDroneReactionArray), Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHoldOutDroneReactionArray>()
{
	return FSBZHoldOutDroneReactionArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHoldOutDroneReactionArray(FSBZHoldOutDroneReactionArray::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHoldOutDroneReactionArray"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutDroneReactionArray
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutDroneReactionArray()
	{
		UScriptStruct::DeferCppStructOps<FSBZHoldOutDroneReactionArray>(FName(TEXT("SBZHoldOutDroneReactionArray")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutDroneReactionArray;
	struct Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DroneReactions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroneReactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DroneReactions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneReactionArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHoldOutDroneReactionArray>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::NewProp_DroneReactions_Inner = { "DroneReactions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZHoldOutDroneReaction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::NewProp_DroneReactions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutDroneReactionArray" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneReactionArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::NewProp_DroneReactions = { "DroneReactions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHoldOutDroneReactionArray, DroneReactions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::NewProp_DroneReactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::NewProp_DroneReactions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::NewProp_DroneReactions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::NewProp_DroneReactions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHoldOutDroneReactionArray",
		sizeof(FSBZHoldOutDroneReactionArray),
		alignof(FSBZHoldOutDroneReactionArray),
		Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHoldOutDroneReactionArray"), sizeof(FSBZHoldOutDroneReactionArray), Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray_Hash() { return 1261364891U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
