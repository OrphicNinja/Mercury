// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnWaveFilteredOrder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnWaveFilteredOrder() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
class UScriptStruct* FSBZSpawnWaveFilteredOrder::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSpawnWaveFilteredOrder"), sizeof(FSBZSpawnWaveFilteredOrder), Get_Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSpawnWaveFilteredOrder>()
{
	return FSBZSpawnWaveFilteredOrder::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSpawnWaveFilteredOrder(FSBZSpawnWaveFilteredOrder::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSpawnWaveFilteredOrder"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveFilteredOrder
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveFilteredOrder()
	{
		UScriptStruct::DeferCppStructOps<FSBZSpawnWaveFilteredOrder>(FName(TEXT("SBZSpawnWaveFilteredOrder")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveFilteredOrder;
	struct Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OrderClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PawnTypes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveFilteredOrder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSpawnWaveFilteredOrder>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::NewProp_OrderClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveFilteredOrder" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveFilteredOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::NewProp_OrderClass = { "OrderClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveFilteredOrder, OrderClass), Z_Construct_UClass_USBZAIOrder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::NewProp_OrderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::NewProp_OrderClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::NewProp_PawnTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveFilteredOrder" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveFilteredOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::NewProp_PawnTypes = { "PawnTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveFilteredOrder, PawnTypes), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::NewProp_PawnTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::NewProp_PawnTypes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::NewProp_OrderClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::NewProp_PawnTypes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSpawnWaveFilteredOrder",
		sizeof(FSBZSpawnWaveFilteredOrder),
		alignof(FSBZSpawnWaveFilteredOrder),
		Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSpawnWaveFilteredOrder"), sizeof(FSBZSpawnWaveFilteredOrder), Get_Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder_Hash() { return 603743773U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
