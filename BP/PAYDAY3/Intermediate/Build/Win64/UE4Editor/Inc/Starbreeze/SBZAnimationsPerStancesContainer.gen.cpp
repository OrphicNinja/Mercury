// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimationsPerStancesContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimationsPerStancesContainer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableFamily();
// End Cross Module References
class UScriptStruct* FSBZAnimationsPerStancesContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimationsPerStancesContainer"), sizeof(FSBZAnimationsPerStancesContainer), Get_Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimationsPerStancesContainer>()
{
	return FSBZAnimationsPerStancesContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimationsPerStancesContainer(FSBZAnimationsPerStancesContainer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimationsPerStancesContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationsPerStancesContainer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationsPerStancesContainer()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimationsPerStancesContainer>(FName(TEXT("SBZAnimationsPerStancesContainer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationsPerStancesContainer;
	struct Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationContainersPerEquippables_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimationContainersPerEquippables_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnimationContainersPerEquippables_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationContainersPerEquippables_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimationContainersPerEquippables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimationsPerStancesContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimationsPerStancesContainer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::NewProp_AnimationContainersPerEquippables_ValueProp = { "AnimationContainersPerEquippables", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::NewProp_AnimationContainersPerEquippables_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::NewProp_AnimationContainersPerEquippables_Key_KeyProp = { "AnimationContainersPerEquippables_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZEquippableFamily, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::NewProp_AnimationContainersPerEquippables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationsPerStancesContainer" },
		{ "ModuleRelativePath", "Public/SBZAnimationsPerStancesContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::NewProp_AnimationContainersPerEquippables = { "AnimationContainersPerEquippables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimationsPerStancesContainer, AnimationContainersPerEquippables), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::NewProp_AnimationContainersPerEquippables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::NewProp_AnimationContainersPerEquippables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::NewProp_AnimationContainersPerEquippables_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::NewProp_AnimationContainersPerEquippables_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::NewProp_AnimationContainersPerEquippables_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::NewProp_AnimationContainersPerEquippables,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAnimationsPerStancesContainer",
		sizeof(FSBZAnimationsPerStancesContainer),
		alignof(FSBZAnimationsPerStancesContainer),
		Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimationsPerStancesContainer"), sizeof(FSBZAnimationsPerStancesContainer), Get_Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationsPerStancesContainer_Hash() { return 2704275868U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
