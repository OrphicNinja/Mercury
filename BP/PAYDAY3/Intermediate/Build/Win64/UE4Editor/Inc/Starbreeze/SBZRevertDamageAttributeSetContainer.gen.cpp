// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRevertDamageAttributeSetContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRevertDamageAttributeSetContainer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData();
// End Cross Module References
class UScriptStruct* FSBZRevertDamageAttributeSetContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRevertDamageAttributeSetContainer"), sizeof(FSBZRevertDamageAttributeSetContainer), Get_Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRevertDamageAttributeSetContainer>()
{
	return FSBZRevertDamageAttributeSetContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRevertDamageAttributeSetContainer(FSBZRevertDamageAttributeSetContainer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRevertDamageAttributeSetContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRevertDamageAttributeSetContainer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRevertDamageAttributeSetContainer()
	{
		UScriptStruct::DeferCppStructOps<FSBZRevertDamageAttributeSetContainer>(FName(TEXT("SBZRevertDamageAttributeSetContainer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRevertDamageAttributeSetContainer;
	struct Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeSetDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSetDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributeSetDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRevertDamageAttributeSetContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRevertDamageAttributeSetContainer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::NewProp_AttributeSetDataArray_Inner = { "AttributeSetDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::NewProp_AttributeSetDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRevertDamageAttributeSetContainer" },
		{ "ModuleRelativePath", "Public/SBZRevertDamageAttributeSetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::NewProp_AttributeSetDataArray = { "AttributeSetDataArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRevertDamageAttributeSetContainer, AttributeSetDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::NewProp_AttributeSetDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::NewProp_AttributeSetDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::NewProp_AttributeSetDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::NewProp_AttributeSetDataArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRevertDamageAttributeSetContainer",
		sizeof(FSBZRevertDamageAttributeSetContainer),
		alignof(FSBZRevertDamageAttributeSetContainer),
		Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRevertDamageAttributeSetContainer"), sizeof(FSBZRevertDamageAttributeSetContainer), Get_Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetContainer_Hash() { return 3366191835U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
