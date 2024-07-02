// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRefPoseConstraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRefPoseConstraint() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRefPoseConstraint();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FSBZRefPoseConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRefPoseConstraint, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRefPoseConstraint"), sizeof(FSBZRefPoseConstraint), Get_Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRefPoseConstraint>()
{
	return FSBZRefPoseConstraint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRefPoseConstraint(FSBZRefPoseConstraint::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRefPoseConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRefPoseConstraint
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRefPoseConstraint()
	{
		UScriptStruct::DeferCppStructOps<FSBZRefPoseConstraint>(FName(TEXT("SBZRefPoseConstraint")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRefPoseConstraint;
	struct Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRefPoseConstraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRefPoseConstraint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::NewProp_TargetBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRefPoseConstraint" },
		{ "ModuleRelativePath", "Public/SBZRefPoseConstraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRefPoseConstraint, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::NewProp_TargetBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::NewProp_TargetBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::NewProp_TargetBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRefPoseConstraint",
		sizeof(FSBZRefPoseConstraint),
		alignof(FSBZRefPoseConstraint),
		Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRefPoseConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRefPoseConstraint"), sizeof(FSBZRefPoseConstraint), Get_Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRefPoseConstraint_Hash() { return 2649138778U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
