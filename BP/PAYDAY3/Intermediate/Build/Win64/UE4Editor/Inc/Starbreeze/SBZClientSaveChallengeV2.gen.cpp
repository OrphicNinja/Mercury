// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZClientSaveChallengeV2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZClientSaveChallengeV2() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeProgressStat();
// End Cross Module References
class UScriptStruct* FSBZClientSaveChallengeV2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZClientSaveChallengeV2"), sizeof(FSBZClientSaveChallengeV2), Get_Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZClientSaveChallengeV2>()
{
	return FSBZClientSaveChallengeV2::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZClientSaveChallengeV2(FSBZClientSaveChallengeV2::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZClientSaveChallengeV2"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZClientSaveChallengeV2
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZClientSaveChallengeV2()
	{
		UScriptStruct::DeferCppStructOps<FSBZClientSaveChallengeV2>(FName(TEXT("SBZClientSaveChallengeV2")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZClientSaveChallengeV2;
	struct Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChallengeId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectiveStatData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveStatData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectiveStatData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeCompleted_MetaData[];
#endif
		static void NewProp_ChallengeCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ChallengeCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZClientSaveChallengeV2.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZClientSaveChallengeV2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ChallengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZClientSaveChallengeV2" },
		{ "ModuleRelativePath", "Public/SBZClientSaveChallengeV2.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ChallengeId = { "ChallengeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZClientSaveChallengeV2, ChallengeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ChallengeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ChallengeId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ObjectiveStatData_Inner = { "ObjectiveStatData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChallengeProgressStat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ObjectiveStatData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZClientSaveChallengeV2" },
		{ "ModuleRelativePath", "Public/SBZClientSaveChallengeV2.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ObjectiveStatData = { "ObjectiveStatData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZClientSaveChallengeV2, ObjectiveStatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ObjectiveStatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ObjectiveStatData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ChallengeCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZClientSaveChallengeV2" },
		{ "ModuleRelativePath", "Public/SBZClientSaveChallengeV2.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ChallengeCompleted_SetBit(void* Obj)
	{
		((FSBZClientSaveChallengeV2*)Obj)->ChallengeCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ChallengeCompleted = { "ChallengeCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZClientSaveChallengeV2), &Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ChallengeCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ChallengeCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ChallengeCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ChallengeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ObjectiveStatData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ObjectiveStatData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::NewProp_ChallengeCompleted,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZClientSaveChallengeV2",
		sizeof(FSBZClientSaveChallengeV2),
		alignof(FSBZClientSaveChallengeV2),
		Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZClientSaveChallengeV2"), sizeof(FSBZClientSaveChallengeV2), Get_Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2_Hash() { return 3452506729U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
