// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActorFilterDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActorFilterDefinition() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActorFilterDefinition();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Range();
// End Cross Module References
class UScriptStruct* FSBZActorFilterDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZActorFilterDefinition, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZActorFilterDefinition"), sizeof(FSBZActorFilterDefinition), Get_Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZActorFilterDefinition>()
{
	return FSBZActorFilterDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZActorFilterDefinition(FSBZActorFilterDefinition::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZActorFilterDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActorFilterDefinition
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActorFilterDefinition()
	{
		UScriptStruct::DeferCppStructOps<FSBZActorFilterDefinition>(FName(TEXT("SBZActorFilterDefinition")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZActorFilterDefinition;
	struct Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredCountRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredCountRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZActorFilterDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZActorFilterDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_Identifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterDefinition" },
		{ "ModuleRelativePath", "Public/SBZActorFilterDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActorFilterDefinition, Identifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_ActorClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterDefinition" },
		{ "ModuleRelativePath", "Public/SBZActorFilterDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActorFilterDefinition, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_DesiredCountRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterDefinition" },
		{ "ModuleRelativePath", "Public/SBZActorFilterDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_DesiredCountRange = { "DesiredCountRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActorFilterDefinition, DesiredCountRange), Z_Construct_UScriptStruct_FInt32Range, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_DesiredCountRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_DesiredCountRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::NewProp_DesiredCountRange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZActorFilterDefinition",
		sizeof(FSBZActorFilterDefinition),
		alignof(FSBZActorFilterDefinition),
		Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZActorFilterDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZActorFilterDefinition"), sizeof(FSBZActorFilterDefinition), Get_Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZActorFilterDefinition_Hash() { return 3535256335U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
