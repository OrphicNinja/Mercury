// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCapsuleInfos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCapsuleInfos() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCapsuleInfos();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FSBZCapsuleInfos::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCapsuleInfos_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCapsuleInfos, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCapsuleInfos"), sizeof(FSBZCapsuleInfos), Get_Z_Construct_UScriptStruct_FSBZCapsuleInfos_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCapsuleInfos>()
{
	return FSBZCapsuleInfos::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCapsuleInfos(FSBZCapsuleInfos::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCapsuleInfos"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCapsuleInfos
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCapsuleInfos()
	{
		UScriptStruct::DeferCppStructOps<FSBZCapsuleInfos>(FName(TEXT("SBZCapsuleInfos")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCapsuleInfos;
	struct Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCapsuleInfos.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCapsuleInfos>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCapsuleInfos" },
		{ "ModuleRelativePath", "Public/SBZCapsuleInfos.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCapsuleInfos, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCapsuleInfos" },
		{ "ModuleRelativePath", "Public/SBZCapsuleInfos.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCapsuleInfos, CapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_CapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_CapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_CapsuleRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCapsuleInfos" },
		{ "ModuleRelativePath", "Public/SBZCapsuleInfos.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCapsuleInfos, CapsuleRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_CapsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_CapsuleRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_WorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_CapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::NewProp_CapsuleRadius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCapsuleInfos",
		sizeof(FSBZCapsuleInfos),
		alignof(FSBZCapsuleInfos),
		Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCapsuleInfos()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCapsuleInfos_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCapsuleInfos"), sizeof(FSBZCapsuleInfos), Get_Z_Construct_UScriptStruct_FSBZCapsuleInfos_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCapsuleInfos_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCapsuleInfos_Hash() { return 879155716U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
