// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnRequestOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnRequestOptions() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnRequestOptions();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
// End Cross Module References
class UScriptStruct* FSBZSpawnRequestOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSpawnRequestOptions"), sizeof(FSBZSpawnRequestOptions), Get_Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSpawnRequestOptions>()
{
	return FSBZSpawnRequestOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSpawnRequestOptions(FSBZSpawnRequestOptions::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSpawnRequestOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnRequestOptions
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnRequestOptions()
	{
		UScriptStruct::DeferCppStructOps<FSBZSpawnRequestOptions>(FName(TEXT("SBZSpawnRequestOptions")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnRequestOptions;
	struct Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionHandlingMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionHandlingMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionHandlingMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnRequestOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSpawnRequestOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnRequestOptions" },
		{ "ModuleRelativePath", "Public/SBZSpawnRequestOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnRequestOptions, Priority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Delay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnRequestOptions" },
		{ "ModuleRelativePath", "Public/SBZSpawnRequestOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnRequestOptions, Delay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Spacing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnRequestOptions" },
		{ "ModuleRelativePath", "Public/SBZSpawnRequestOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnRequestOptions, Spacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Spacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Timeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnRequestOptions" },
		{ "ModuleRelativePath", "Public/SBZSpawnRequestOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnRequestOptions, Timeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Timeout_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_CollisionHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_CollisionHandlingMethod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnRequestOptions" },
		{ "ModuleRelativePath", "Public/SBZSpawnRequestOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_CollisionHandlingMethod = { "CollisionHandlingMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnRequestOptions, CollisionHandlingMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_CollisionHandlingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_CollisionHandlingMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Spacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_CollisionHandlingMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::NewProp_CollisionHandlingMethod,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSpawnRequestOptions",
		sizeof(FSBZSpawnRequestOptions),
		alignof(FSBZSpawnRequestOptions),
		Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnRequestOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSpawnRequestOptions"), sizeof(FSBZSpawnRequestOptions), Get_Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnRequestOptions_Hash() { return 2728542467U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
