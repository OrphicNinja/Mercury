// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBoneAnimContraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBoneAnimContraint() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneAnimContraint();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZBoneAnimConstraintType();
// End Cross Module References
class UScriptStruct* FSBZBoneAnimContraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBoneAnimContraint, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBoneAnimContraint"), sizeof(FSBZBoneAnimContraint), Get_Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBoneAnimContraint>()
{
	return FSBZBoneAnimContraint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBoneAnimContraint(FSBZBoneAnimContraint::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBoneAnimContraint"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneAnimContraint
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneAnimContraint()
	{
		UScriptStruct::DeferCppStructOps<FSBZBoneAnimContraint>(FName(TEXT("SBZBoneAnimContraint")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneAnimContraint;
	struct Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToConstrain_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneToConstrain;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConstraintType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToFollow_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneToFollow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBoneAnimContraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBoneAnimContraint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_BoneToConstrain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneAnimContraint" },
		{ "ModuleRelativePath", "Public/SBZBoneAnimContraint.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_BoneToConstrain = { "BoneToConstrain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneAnimContraint, BoneToConstrain), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_BoneToConstrain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_BoneToConstrain_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_ConstraintType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_ConstraintType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneAnimContraint" },
		{ "ModuleRelativePath", "Public/SBZBoneAnimContraint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_ConstraintType = { "ConstraintType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneAnimContraint, ConstraintType), Z_Construct_UEnum_Starbreeze_ESBZBoneAnimConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_ConstraintType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_ConstraintType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_BoneToFollow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneAnimContraint" },
		{ "ModuleRelativePath", "Public/SBZBoneAnimContraint.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_BoneToFollow = { "BoneToFollow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneAnimContraint, BoneToFollow), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_BoneToFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_BoneToFollow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_BoneToConstrain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_ConstraintType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_ConstraintType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::NewProp_BoneToFollow,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBoneAnimContraint",
		sizeof(FSBZBoneAnimContraint),
		alignof(FSBZBoneAnimContraint),
		Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneAnimContraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBoneAnimContraint"), sizeof(FSBZBoneAnimContraint), Get_Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBoneAnimContraint_Hash() { return 39138228U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
