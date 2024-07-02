// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThreeWayBlendInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThreeWayBlendInstance() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZThreeWayBlendInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZThreeWayBlendInstance"), sizeof(FSBZThreeWayBlendInstance), Get_Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZThreeWayBlendInstance>()
{
	return FSBZThreeWayBlendInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZThreeWayBlendInstance(FSBZThreeWayBlendInstance::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZThreeWayBlendInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZThreeWayBlendInstance
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZThreeWayBlendInstance()
	{
		UScriptStruct::DeferCppStructOps<FSBZThreeWayBlendInstance>(FName(TEXT("SBZThreeWayBlendInstance")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZThreeWayBlendInstance;
	struct Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZThreeWayBlendInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZThreeWayBlendInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::NewProp_Animation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThreeWayBlendInstance" },
		{ "ModuleRelativePath", "Public/SBZThreeWayBlendInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZThreeWayBlendInstance, Animation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThreeWayBlendInstance" },
		{ "ModuleRelativePath", "Public/SBZThreeWayBlendInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZThreeWayBlendInstance, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::NewProp_Alpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::NewProp_Alpha,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZThreeWayBlendInstance",
		sizeof(FSBZThreeWayBlendInstance),
		alignof(FSBZThreeWayBlendInstance),
		Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZThreeWayBlendInstance"), sizeof(FSBZThreeWayBlendInstance), Get_Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance_Hash() { return 3021904951U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
