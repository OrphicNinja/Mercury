// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFacialAnimationContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFacialAnimationContainer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFacialAnimationContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZFacialAnimationContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZFacialAnimationContainer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZFacialAnimationContainer"), sizeof(FSBZFacialAnimationContainer), Get_Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZFacialAnimationContainer>()
{
	return FSBZFacialAnimationContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZFacialAnimationContainer(FSBZFacialAnimationContainer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZFacialAnimationContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFacialAnimationContainer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFacialAnimationContainer()
	{
		UScriptStruct::DeferCppStructOps<FSBZFacialAnimationContainer>(FName(TEXT("SBZFacialAnimationContainer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZFacialAnimationContainer;
	struct Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Animations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZFacialAnimationContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZFacialAnimationContainer>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::NewProp_Animations_Inner = { "Animations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::NewProp_Animations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFacialAnimationContainer" },
		{ "ModuleRelativePath", "Public/SBZFacialAnimationContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFacialAnimationContainer, Animations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::NewProp_Animations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::NewProp_Animations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::NewProp_Animations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::NewProp_Animations,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZFacialAnimationContainer",
		sizeof(FSBZFacialAnimationContainer),
		alignof(FSBZFacialAnimationContainer),
		Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZFacialAnimationContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZFacialAnimationContainer"), sizeof(FSBZFacialAnimationContainer), Get_Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZFacialAnimationContainer_Hash() { return 2491245180U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
