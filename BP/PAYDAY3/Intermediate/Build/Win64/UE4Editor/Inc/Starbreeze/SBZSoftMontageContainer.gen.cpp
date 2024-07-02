// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSoftMontageContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSoftMontageContainer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSoftMontageContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSoftMontageContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSoftMontageContainer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSoftMontageContainer"), sizeof(FSBZSoftMontageContainer), Get_Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSoftMontageContainer>()
{
	return FSBZSoftMontageContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSoftMontageContainer(FSBZSoftMontageContainer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSoftMontageContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSoftMontageContainer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSoftMontageContainer()
	{
		UScriptStruct::DeferCppStructOps<FSBZSoftMontageContainer>(FName(TEXT("SBZSoftMontageContainer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSoftMontageContainer;
	struct Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics
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
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Montages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Montages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSoftMontageContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSoftMontageContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_bOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoftMontageContainer" },
		{ "ModuleRelativePath", "Public/SBZSoftMontageContainer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FSBZSoftMontageContainer*)Obj)->bOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSoftMontageContainer), &Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_bOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_bOverride_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_Montages_Inner = { "Montages", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_Montages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoftMontageContainer" },
		{ "ModuleRelativePath", "Public/SBZSoftMontageContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_Montages = { "Montages", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSoftMontageContainer, Montages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_Montages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_Montages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_bOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_Montages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::NewProp_Montages,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSoftMontageContainer",
		sizeof(FSBZSoftMontageContainer),
		alignof(FSBZSoftMontageContainer),
		Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSoftMontageContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSoftMontageContainer"), sizeof(FSBZSoftMontageContainer), Get_Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSoftMontageContainer_Hash() { return 1047248825U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
