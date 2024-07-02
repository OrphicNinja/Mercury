// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCameraViewRestriction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCameraViewRestriction() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCameraViewRestriction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZCameraViewRestriction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCameraViewRestriction, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCameraViewRestriction"), sizeof(FSBZCameraViewRestriction), Get_Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCameraViewRestriction>()
{
	return FSBZCameraViewRestriction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCameraViewRestriction(FSBZCameraViewRestriction::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCameraViewRestriction"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCameraViewRestriction
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCameraViewRestriction()
	{
		UScriptStruct::DeferCppStructOps<FSBZCameraViewRestriction>(FName(TEXT("SBZCameraViewRestriction")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCameraViewRestriction;
	struct Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCameraViewRestriction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCameraViewRestriction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_YawMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCameraViewRestriction" },
		{ "ModuleRelativePath", "Public/SBZCameraViewRestriction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_YawMin = { "YawMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCameraViewRestriction, YawMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_YawMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_YawMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_YawMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCameraViewRestriction" },
		{ "ModuleRelativePath", "Public/SBZCameraViewRestriction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_YawMax = { "YawMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCameraViewRestriction, YawMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_YawMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_YawMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_PitchMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCameraViewRestriction" },
		{ "ModuleRelativePath", "Public/SBZCameraViewRestriction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_PitchMin = { "PitchMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCameraViewRestriction, PitchMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_PitchMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_PitchMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_PitchMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCameraViewRestriction" },
		{ "ModuleRelativePath", "Public/SBZCameraViewRestriction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_PitchMax = { "PitchMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCameraViewRestriction, PitchMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_PitchMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_PitchMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_RollMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCameraViewRestriction" },
		{ "ModuleRelativePath", "Public/SBZCameraViewRestriction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_RollMin = { "RollMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCameraViewRestriction, RollMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_RollMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_RollMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_RollMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCameraViewRestriction" },
		{ "ModuleRelativePath", "Public/SBZCameraViewRestriction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_RollMax = { "RollMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCameraViewRestriction, RollMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_RollMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_RollMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCameraViewRestriction" },
		{ "ModuleRelativePath", "Public/SBZCameraViewRestriction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCameraViewRestriction, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_YawMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_YawMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_PitchMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_PitchMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_RollMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_RollMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::NewProp_Priority,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCameraViewRestriction",
		sizeof(FSBZCameraViewRestriction),
		alignof(FSBZCameraViewRestriction),
		Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCameraViewRestriction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCameraViewRestriction"), sizeof(FSBZCameraViewRestriction), Get_Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCameraViewRestriction_Hash() { return 276850259U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
