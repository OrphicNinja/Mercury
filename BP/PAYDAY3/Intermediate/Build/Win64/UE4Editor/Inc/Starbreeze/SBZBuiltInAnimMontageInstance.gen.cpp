// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBuiltInAnimMontageInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBuiltInAnimMontageInstance() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBuiltInAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZBuiltInAnimMontageInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBuiltInAnimMontageInstance"), sizeof(FSBZBuiltInAnimMontageInstance), Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBuiltInAnimMontageInstance>()
{
	return FSBZBuiltInAnimMontageInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBuiltInAnimMontageInstance(FSBZBuiltInAnimMontageInstance::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBuiltInAnimMontageInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBuiltInAnimMontageInstance
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBuiltInAnimMontageInstance()
	{
		UScriptStruct::DeferCppStructOps<FSBZBuiltInAnimMontageInstance>(FName(TEXT("SBZBuiltInAnimMontageInstance")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBuiltInAnimMontageInstance;
	struct Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontageInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBuiltInAnimMontageInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBuiltInAnimMontageInstance" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBuiltInAnimMontageInstance, AnimMontage), Z_Construct_UClass_USBZBuiltInAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::NewProp_AnimMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::NewProp_AnimMontage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBuiltInAnimMontageInstance",
		sizeof(FSBZBuiltInAnimMontageInstance),
		alignof(FSBZBuiltInAnimMontageInstance),
		Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBuiltInAnimMontageInstance"), sizeof(FSBZBuiltInAnimMontageInstance), Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance_Hash() { return 2318349129U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
