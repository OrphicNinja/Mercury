// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilitySweepParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilitySweepParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilitySweepParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZAgilitySweepParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgilitySweepParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgilitySweepParams"), sizeof(FSBZAgilitySweepParams), Get_Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgilitySweepParams>()
{
	return FSBZAgilitySweepParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgilitySweepParams(FSBZAgilitySweepParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgilitySweepParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilitySweepParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilitySweepParams()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgilitySweepParams>(FName(TEXT("SBZAgilitySweepParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilitySweepParams;
	struct Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilitySweepParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgilitySweepParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::NewProp_World_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySweepParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySweepParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilitySweepParams, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::NewProp_World,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgilitySweepParams",
		sizeof(FSBZAgilitySweepParams),
		alignof(FSBZAgilitySweepParams),
		Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilitySweepParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgilitySweepParams"), sizeof(FSBZAgilitySweepParams), Get_Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgilitySweepParams_Hash() { return 1636176222U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
