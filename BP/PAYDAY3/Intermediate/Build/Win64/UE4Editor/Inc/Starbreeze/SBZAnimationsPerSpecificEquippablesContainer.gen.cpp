// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimationsPerSpecificEquippablesContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimationsPerSpecificEquippablesContainer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationContainer();
// End Cross Module References
class UScriptStruct* FSBZAnimationsPerSpecificEquippablesContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimationsPerSpecificEquippablesContainer"), sizeof(FSBZAnimationsPerSpecificEquippablesContainer), Get_Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimationsPerSpecificEquippablesContainer>()
{
	return FSBZAnimationsPerSpecificEquippablesContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer(FSBZAnimationsPerSpecificEquippablesContainer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimationsPerSpecificEquippablesContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationsPerSpecificEquippablesContainer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationsPerSpecificEquippablesContainer()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimationsPerSpecificEquippablesContainer>(FName(TEXT("SBZAnimationsPerSpecificEquippablesContainer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationsPerSpecificEquippablesContainer;
	struct Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationContainers_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationContainers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimationContainers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimationsPerSpecificEquippablesContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimationsPerSpecificEquippablesContainer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::NewProp_AnimationContainers_ValueProp = { "AnimationContainers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZAnimationContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::NewProp_AnimationContainers_Key_KeyProp = { "AnimationContainers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::NewProp_AnimationContainers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationsPerSpecificEquippablesContainer" },
		{ "ModuleRelativePath", "Public/SBZAnimationsPerSpecificEquippablesContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::NewProp_AnimationContainers = { "AnimationContainers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimationsPerSpecificEquippablesContainer, AnimationContainers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::NewProp_AnimationContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::NewProp_AnimationContainers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::NewProp_AnimationContainers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::NewProp_AnimationContainers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::NewProp_AnimationContainers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAnimationsPerSpecificEquippablesContainer",
		sizeof(FSBZAnimationsPerSpecificEquippablesContainer),
		alignof(FSBZAnimationsPerSpecificEquippablesContainer),
		Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimationsPerSpecificEquippablesContainer"), sizeof(FSBZAnimationsPerSpecificEquippablesContainer), Get_Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer_Hash() { return 3647477311U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
