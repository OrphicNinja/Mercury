// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTurnAnimationContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTurnAnimationContainer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTurnAnimationContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZTurnAnimationContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTurnAnimationContainer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTurnAnimationContainer"), sizeof(FSBZTurnAnimationContainer), Get_Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTurnAnimationContainer>()
{
	return FSBZTurnAnimationContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTurnAnimationContainer(FSBZTurnAnimationContainer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTurnAnimationContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTurnAnimationContainer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTurnAnimationContainer()
	{
		UScriptStruct::DeferCppStructOps<FSBZTurnAnimationContainer>(FName(TEXT("SBZTurnAnimationContainer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTurnAnimationContainer;
	struct Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnAnimationStand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurnAnimationStand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnAnimationCrouch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurnAnimationCrouch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTurnAnimationContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTurnAnimationContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::NewProp_TurnAnimationStand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTurnAnimationContainer" },
		{ "ModuleRelativePath", "Public/SBZTurnAnimationContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::NewProp_TurnAnimationStand = { "TurnAnimationStand", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTurnAnimationContainer, TurnAnimationStand), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::NewProp_TurnAnimationStand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::NewProp_TurnAnimationStand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::NewProp_TurnAnimationCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTurnAnimationContainer" },
		{ "ModuleRelativePath", "Public/SBZTurnAnimationContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::NewProp_TurnAnimationCrouch = { "TurnAnimationCrouch", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTurnAnimationContainer, TurnAnimationCrouch), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::NewProp_TurnAnimationCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::NewProp_TurnAnimationCrouch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::NewProp_TurnAnimationStand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::NewProp_TurnAnimationCrouch,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTurnAnimationContainer",
		sizeof(FSBZTurnAnimationContainer),
		alignof(FSBZTurnAnimationContainer),
		Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTurnAnimationContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTurnAnimationContainer"), sizeof(FSBZTurnAnimationContainer), Get_Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTurnAnimationContainer_Hash() { return 3316141154U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
