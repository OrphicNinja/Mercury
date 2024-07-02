// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayTagCounterArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayTagCounterArray() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZGameplayTagCounterArray>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FSBZGameplayTagCounterArray cannot be polymorphic unless super FFastArraySerializer is polymorphic");

class UScriptStruct* FSBZGameplayTagCounterArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGameplayTagCounterArray"), sizeof(FSBZGameplayTagCounterArray), Get_Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGameplayTagCounterArray>()
{
	return FSBZGameplayTagCounterArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGameplayTagCounterArray(FSBZGameplayTagCounterArray::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGameplayTagCounterArray"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameplayTagCounterArray
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameplayTagCounterArray()
	{
		UScriptStruct::DeferCppStructOps<FSBZGameplayTagCounterArray>(FName(TEXT("SBZGameplayTagCounterArray")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameplayTagCounterArray;
	struct Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayTagCounterArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGameplayTagCounterArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::NewProp_Owner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayTagCounterArray" },
		{ "ModuleRelativePath", "Public/SBZGameplayTagCounterArray.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameplayTagCounterArray, Owner), Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayTagCounterArray" },
		{ "ModuleRelativePath", "Public/SBZGameplayTagCounterArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameplayTagCounterArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::NewProp_Items,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"SBZGameplayTagCounterArray",
		sizeof(FSBZGameplayTagCounterArray),
		alignof(FSBZGameplayTagCounterArray),
		Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGameplayTagCounterArray"), sizeof(FSBZGameplayTagCounterArray), Get_Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray_Hash() { return 2806306742U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
