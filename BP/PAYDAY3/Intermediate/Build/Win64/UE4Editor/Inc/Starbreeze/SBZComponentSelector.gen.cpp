// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZComponentSelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZComponentSelector() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZComponentSelector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZComponentSelector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZComponentSelector, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZComponentSelector"), sizeof(FSBZComponentSelector), Get_Z_Construct_UScriptStruct_FSBZComponentSelector_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZComponentSelector>()
{
	return FSBZComponentSelector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZComponentSelector(FSBZComponentSelector::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZComponentSelector"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZComponentSelector
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZComponentSelector()
	{
		UScriptStruct::DeferCppStructOps<FSBZComponentSelector>(FName(TEXT("SBZComponentSelector")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZComponentSelector;
	struct Z_Construct_UScriptStruct_FSBZComponentSelector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZComponentSelector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZComponentSelector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_ComponentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZComponentSelector" },
		{ "ModuleRelativePath", "Public/SBZComponentSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZComponentSelector, ComponentType), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_ComponentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_ComponentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_ComponentName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZComponentSelector" },
		{ "ModuleRelativePath", "Public/SBZComponentSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZComponentSelector, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_Component_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZComponentSelector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZComponentSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZComponentSelector, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_ComponentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_ComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::NewProp_Component,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZComponentSelector",
		sizeof(FSBZComponentSelector),
		alignof(FSBZComponentSelector),
		Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZComponentSelector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZComponentSelector"), sizeof(FSBZComponentSelector), Get_Z_Construct_UScriptStruct_FSBZComponentSelector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZComponentSelector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZComponentSelector_Hash() { return 3037169162U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
