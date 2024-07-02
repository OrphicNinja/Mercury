// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/InteractableDataContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableDataContainer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableDataContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FInteractableDataContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FInteractableDataContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractableDataContainer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("InteractableDataContainer"), sizeof(FInteractableDataContainer), Get_Z_Construct_UScriptStruct_FInteractableDataContainer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FInteractableDataContainer>()
{
	return FInteractableDataContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractableDataContainer(FInteractableDataContainer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("InteractableDataContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFInteractableDataContainer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFInteractableDataContainer()
	{
		UScriptStruct::DeferCppStructOps<FInteractableDataContainer>(FName(TEXT("InteractableDataContainer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFInteractableDataContainer;
	struct Z_Construct_UScriptStruct_FInteractableDataContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InteractableOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveToLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveToLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractableDataContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractableDataContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_Interactable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractableDataContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableDataContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractableDataContainer, Interactable), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_InteractableOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractableDataContainer" },
		{ "ModuleRelativePath", "Public/InteractableDataContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_InteractableOwner = { "InteractableOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractableDataContainer, InteractableOwner), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_InteractableOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_InteractableOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_InteractionLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractableDataContainer" },
		{ "ModuleRelativePath", "Public/InteractableDataContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_InteractionLocation = { "InteractionLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractableDataContainer, InteractionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_InteractionLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_InteractionLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_MoveToLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractableDataContainer" },
		{ "ModuleRelativePath", "Public/InteractableDataContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_MoveToLocation = { "MoveToLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractableDataContainer, MoveToLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_MoveToLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_MoveToLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_InteractableOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_InteractionLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::NewProp_MoveToLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"InteractableDataContainer",
		sizeof(FInteractableDataContainer),
		alignof(FInteractableDataContainer),
		Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractableDataContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractableDataContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractableDataContainer"), sizeof(FInteractableDataContainer), Get_Z_Construct_UScriptStruct_FInteractableDataContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractableDataContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractableDataContainer_Hash() { return 1272975114U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
