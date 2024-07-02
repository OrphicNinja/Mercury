// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHumanShieldDirection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHumanShieldDirection() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHumanShieldDirection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZHumanShieldDirection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHumanShieldDirection, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHumanShieldDirection"), sizeof(FSBZHumanShieldDirection), Get_Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHumanShieldDirection>()
{
	return FSBZHumanShieldDirection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHumanShieldDirection(FSBZHumanShieldDirection::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHumanShieldDirection"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHumanShieldDirection
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHumanShieldDirection()
	{
		UScriptStruct::DeferCppStructOps<FSBZHumanShieldDirection>(FName(TEXT("SBZHumanShieldDirection")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHumanShieldDirection;
	struct Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AllowedCategories;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumAngleAroundTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumAngleAroundTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumAngleAroundTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumAngleAroundTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHumanShieldDirection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHumanShieldDirection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_AllowedCategories_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHumanShieldDirection" },
		{ "ModuleRelativePath", "Public/SBZHumanShieldDirection.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_AllowedCategories = { "AllowedCategories", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHumanShieldDirection, AllowedCategories), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_AllowedCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_AllowedCategories_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_MinimumAngleAroundTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHumanShieldDirection" },
		{ "ModuleRelativePath", "Public/SBZHumanShieldDirection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_MinimumAngleAroundTarget = { "MinimumAngleAroundTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHumanShieldDirection, MinimumAngleAroundTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_MinimumAngleAroundTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_MinimumAngleAroundTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_MaximumAngleAroundTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHumanShieldDirection" },
		{ "ModuleRelativePath", "Public/SBZHumanShieldDirection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_MaximumAngleAroundTarget = { "MaximumAngleAroundTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHumanShieldDirection, MaximumAngleAroundTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_MaximumAngleAroundTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_MaximumAngleAroundTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHumanShieldDirection" },
		{ "ModuleRelativePath", "Public/SBZHumanShieldDirection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHumanShieldDirection, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_AllowedCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_MinimumAngleAroundTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_MaximumAngleAroundTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::NewProp_Tag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHumanShieldDirection",
		sizeof(FSBZHumanShieldDirection),
		alignof(FSBZHumanShieldDirection),
		Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHumanShieldDirection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHumanShieldDirection"), sizeof(FSBZHumanShieldDirection), Get_Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHumanShieldDirection_Hash() { return 659590976U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
