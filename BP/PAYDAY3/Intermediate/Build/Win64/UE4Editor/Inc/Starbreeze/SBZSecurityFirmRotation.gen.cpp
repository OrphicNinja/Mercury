// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSecurityFirmRotation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSecurityFirmRotation() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSecurityFirmRotation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDifficultyConfiguration();
// End Cross Module References
class UScriptStruct* FSBZSecurityFirmRotation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSecurityFirmRotation, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSecurityFirmRotation"), sizeof(FSBZSecurityFirmRotation), Get_Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSecurityFirmRotation>()
{
	return FSBZSecurityFirmRotation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSecurityFirmRotation(FSBZSecurityFirmRotation::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSecurityFirmRotation"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSecurityFirmRotation
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSecurityFirmRotation()
	{
		UScriptStruct::DeferCppStructOps<FSBZSecurityFirmRotation>(FName(TEXT("SBZSecurityFirmRotation")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSecurityFirmRotation;
	struct Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Configurations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Configurations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Configurations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityFirmRotation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSecurityFirmRotation>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::NewProp_Configurations_Inner = { "Configurations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDifficultyConfiguration, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::NewProp_Configurations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityFirmRotation" },
		{ "ModuleRelativePath", "Public/SBZSecurityFirmRotation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::NewProp_Configurations = { "Configurations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityFirmRotation, Configurations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::NewProp_Configurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::NewProp_Configurations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::NewProp_Configurations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::NewProp_Configurations,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSecurityFirmRotation",
		sizeof(FSBZSecurityFirmRotation),
		alignof(FSBZSecurityFirmRotation),
		Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSecurityFirmRotation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSecurityFirmRotation"), sizeof(FSBZSecurityFirmRotation), Get_Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSecurityFirmRotation_Hash() { return 1872296265U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
