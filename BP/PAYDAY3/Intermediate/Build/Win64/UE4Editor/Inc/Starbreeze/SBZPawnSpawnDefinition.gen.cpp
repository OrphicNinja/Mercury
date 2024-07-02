// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnSpawnDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnSpawnDefinition() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FSBZPawnSpawnDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPawnSpawnDefinition"), sizeof(FSBZPawnSpawnDefinition), Get_Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPawnSpawnDefinition>()
{
	return FSBZPawnSpawnDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPawnSpawnDefinition(FSBZPawnSpawnDefinition::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPawnSpawnDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPawnSpawnDefinition
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPawnSpawnDefinition()
	{
		UScriptStruct::DeferCppStructOps<FSBZPawnSpawnDefinition>(FName(TEXT("SBZPawnSpawnDefinition")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPawnSpawnDefinition;
	struct Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPawnSpawnDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::NewProp_Transform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnDefinition" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnSpawnDefinition, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::NewProp_NameType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnDefinition" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::NewProp_NameType = { "NameType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnSpawnDefinition, NameType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::NewProp_NameType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::NewProp_NameType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::NewProp_NameType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPawnSpawnDefinition",
		sizeof(FSBZPawnSpawnDefinition),
		alignof(FSBZPawnSpawnDefinition),
		Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPawnSpawnDefinition"), sizeof(FSBZPawnSpawnDefinition), Get_Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPawnSpawnDefinition_Hash() { return 3994092548U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
