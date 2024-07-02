// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimationsPerEquippablesContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimationsPerEquippablesContainer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationContainer();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSoftMontageContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZAnimationsPerEquippablesContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimationsPerEquippablesContainer"), sizeof(FSBZAnimationsPerEquippablesContainer), Get_Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimationsPerEquippablesContainer>()
{
	return FSBZAnimationsPerEquippablesContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimationsPerEquippablesContainer(FSBZAnimationsPerEquippablesContainer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimationsPerEquippablesContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationsPerEquippablesContainer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationsPerEquippablesContainer()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimationsPerEquippablesContainer>(FName(TEXT("SBZAnimationsPerEquippablesContainer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationsPerEquippablesContainer;
	struct Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GamePlayTagBasedMontageContainers_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GamePlayTagBasedMontageContainers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamePlayTagBasedMontageContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GamePlayTagBasedMontageContainers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationPerSpecificEquippablesContainers_ValueProp;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AnimationPerSpecificEquippablesContainers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationPerSpecificEquippablesContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimationPerSpecificEquippablesContainers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationLeftHandEquippedContainers_ValueProp;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AnimationLeftHandEquippedContainers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationLeftHandEquippedContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimationLeftHandEquippedContainers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimationsPerEquippablesContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimationsPerEquippablesContainer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationContainers_ValueProp = { "AnimationContainers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZAnimationContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationContainers_Key_KeyProp = { "AnimationContainers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationContainers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationsPerEquippablesContainer" },
		{ "ModuleRelativePath", "Public/SBZAnimationsPerEquippablesContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationContainers = { "AnimationContainers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimationsPerEquippablesContainer, AnimationContainers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationContainers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_GamePlayTagBasedMontageContainers_ValueProp = { "GamePlayTagBasedMontageContainers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZSoftMontageContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_GamePlayTagBasedMontageContainers_Key_KeyProp = { "GamePlayTagBasedMontageContainers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_GamePlayTagBasedMontageContainers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationsPerEquippablesContainer" },
		{ "ModuleRelativePath", "Public/SBZAnimationsPerEquippablesContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_GamePlayTagBasedMontageContainers = { "GamePlayTagBasedMontageContainers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimationsPerEquippablesContainer, GamePlayTagBasedMontageContainers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_GamePlayTagBasedMontageContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_GamePlayTagBasedMontageContainers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationPerSpecificEquippablesContainers_ValueProp = { "AnimationPerSpecificEquippablesContainers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationPerSpecificEquippablesContainers_Key_KeyProp = { "AnimationPerSpecificEquippablesContainers_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationPerSpecificEquippablesContainers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationsPerEquippablesContainer" },
		{ "ModuleRelativePath", "Public/SBZAnimationsPerEquippablesContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationPerSpecificEquippablesContainers = { "AnimationPerSpecificEquippablesContainers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimationsPerEquippablesContainer, AnimationPerSpecificEquippablesContainers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationPerSpecificEquippablesContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationPerSpecificEquippablesContainers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationLeftHandEquippedContainers_ValueProp = { "AnimationLeftHandEquippedContainers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZAnimationsPerSpecificEquippablesContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationLeftHandEquippedContainers_Key_KeyProp = { "AnimationLeftHandEquippedContainers_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationLeftHandEquippedContainers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationsPerEquippablesContainer" },
		{ "ModuleRelativePath", "Public/SBZAnimationsPerEquippablesContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationLeftHandEquippedContainers = { "AnimationLeftHandEquippedContainers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimationsPerEquippablesContainer, AnimationLeftHandEquippedContainers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationLeftHandEquippedContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationLeftHandEquippedContainers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationContainers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationContainers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_GamePlayTagBasedMontageContainers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_GamePlayTagBasedMontageContainers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_GamePlayTagBasedMontageContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationPerSpecificEquippablesContainers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationPerSpecificEquippablesContainers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationPerSpecificEquippablesContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationLeftHandEquippedContainers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationLeftHandEquippedContainers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::NewProp_AnimationLeftHandEquippedContainers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAnimationsPerEquippablesContainer",
		sizeof(FSBZAnimationsPerEquippablesContainer),
		alignof(FSBZAnimationsPerEquippablesContainer),
		Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimationsPerEquippablesContainer"), sizeof(FSBZAnimationsPerEquippablesContainer), Get_Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationsPerEquippablesContainer_Hash() { return 2253541879U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
