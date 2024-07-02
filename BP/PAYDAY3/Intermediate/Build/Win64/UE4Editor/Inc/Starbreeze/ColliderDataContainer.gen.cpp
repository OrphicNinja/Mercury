// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ColliderDataContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColliderDataContainer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FColliderDataContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FColliderDataContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FColliderDataContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColliderDataContainer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ColliderDataContainer"), sizeof(FColliderDataContainer), Get_Z_Construct_UScriptStruct_FColliderDataContainer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FColliderDataContainer>()
{
	return FColliderDataContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColliderDataContainer(FColliderDataContainer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("ColliderDataContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFColliderDataContainer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFColliderDataContainer()
	{
		UScriptStruct::DeferCppStructOps<FColliderDataContainer>(FName(TEXT("ColliderDataContainer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFColliderDataContainer;
	struct Z_Construct_UScriptStruct_FColliderDataContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssociatedInteractable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColliderDataContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ColliderDataContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColliderDataContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColliderDataContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColliderDataContainer_Statics::NewProp_Collider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColliderDataContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ColliderDataContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FColliderDataContainer_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColliderDataContainer, Collider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FColliderDataContainer_Statics::NewProp_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColliderDataContainer_Statics::NewProp_Collider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColliderDataContainer_Statics::NewProp_AssociatedInteractable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColliderDataContainer" },
		{ "ModuleRelativePath", "Public/ColliderDataContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FColliderDataContainer_Statics::NewProp_AssociatedInteractable = { "AssociatedInteractable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColliderDataContainer, AssociatedInteractable), METADATA_PARAMS(Z_Construct_UScriptStruct_FColliderDataContainer_Statics::NewProp_AssociatedInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColliderDataContainer_Statics::NewProp_AssociatedInteractable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColliderDataContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColliderDataContainer_Statics::NewProp_Collider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColliderDataContainer_Statics::NewProp_AssociatedInteractable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColliderDataContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"ColliderDataContainer",
		sizeof(FColliderDataContainer),
		alignof(FColliderDataContainer),
		Z_Construct_UScriptStruct_FColliderDataContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColliderDataContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColliderDataContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColliderDataContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColliderDataContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColliderDataContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColliderDataContainer"), sizeof(FColliderDataContainer), Get_Z_Construct_UScriptStruct_FColliderDataContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColliderDataContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColliderDataContainer_Hash() { return 3693580279U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
