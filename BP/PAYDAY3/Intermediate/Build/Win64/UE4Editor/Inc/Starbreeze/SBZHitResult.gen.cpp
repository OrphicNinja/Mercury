// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHitResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHitResult() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHitResult();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZHitResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHitResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHitResult, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHitResult"), sizeof(FSBZHitResult), Get_Z_Construct_UScriptStruct_FSBZHitResult_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHitResult>()
{
	return FSBZHitResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHitResult(FSBZHitResult::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHitResult"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHitResult
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHitResult()
	{
		UScriptStruct::DeferCppStructOps<FSBZHitResult>(FName(TEXT("SBZHitResult")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHitResult;
	struct Z_Construct_UScriptStruct_FSBZHitResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ComponentPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterialPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PhysMaterialPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHitResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHitResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHitResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitResult_Statics::NewProp_ComponentPtr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHitResult" },
		{ "ModuleRelativePath", "Public/SBZHitResult.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSBZHitResult_Statics::NewProp_ComponentPtr = { "ComponentPtr", nullptr, (EPropertyFlags)0x001400000008200d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHitResult, ComponentPtr), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitResult_Statics::NewProp_ComponentPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitResult_Statics::NewProp_ComponentPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitResult_Statics::NewProp_PhysMaterialPtr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHitResult" },
		{ "ModuleRelativePath", "Public/SBZHitResult.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSBZHitResult_Statics::NewProp_PhysMaterialPtr = { "PhysMaterialPtr", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHitResult, PhysMaterialPtr), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitResult_Statics::NewProp_PhysMaterialPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitResult_Statics::NewProp_PhysMaterialPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHitResult_Statics::NewProp_ComponentPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHitResult_Statics::NewProp_PhysMaterialPtr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHitResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHitResult",
		sizeof(FSBZHitResult),
		alignof(FSBZHitResult),
		Z_Construct_UScriptStruct_FSBZHitResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHitResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHitResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHitResult"), sizeof(FSBZHitResult), Get_Z_Construct_UScriptStruct_FSBZHitResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHitResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHitResult_Hash() { return 837117349U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
