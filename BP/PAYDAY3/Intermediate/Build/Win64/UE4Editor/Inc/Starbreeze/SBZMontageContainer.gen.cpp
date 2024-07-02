// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMontageContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMontageContainer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMontageContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZMontageContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMontageContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMontageContainer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMontageContainer"), sizeof(FSBZMontageContainer), Get_Z_Construct_UScriptStruct_FSBZMontageContainer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMontageContainer>()
{
	return FSBZMontageContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMontageContainer(FSBZMontageContainer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMontageContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMontageContainer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMontageContainer()
	{
		UScriptStruct::DeferCppStructOps<FSBZMontageContainer>(FName(TEXT("SBZMontageContainer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMontageContainer;
	struct Z_Construct_UScriptStruct_FSBZMontageContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Montages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMontageContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMontageContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_bOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMontageContainer" },
		{ "ModuleRelativePath", "Public/SBZMontageContainer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FSBZMontageContainer*)Obj)->bOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZMontageContainer), &Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_bOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_bOverride_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_Montages_Inner = { "Montages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_Montages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMontageContainer" },
		{ "ModuleRelativePath", "Public/SBZMontageContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_Montages = { "Montages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMontageContainer, Montages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_Montages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_Montages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_bOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_Montages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::NewProp_Montages,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMontageContainer",
		sizeof(FSBZMontageContainer),
		alignof(FSBZMontageContainer),
		Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMontageContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMontageContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMontageContainer"), sizeof(FSBZMontageContainer), Get_Z_Construct_UScriptStruct_FSBZMontageContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMontageContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMontageContainer_Hash() { return 3109205333U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
