// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBoneLocker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBoneLocker() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneLocker();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSBZBoneLocker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBoneLocker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBoneLocker, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBoneLocker"), sizeof(FSBZBoneLocker), Get_Z_Construct_UScriptStruct_FSBZBoneLocker_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBoneLocker>()
{
	return FSBZBoneLocker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBoneLocker(FSBZBoneLocker::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBoneLocker"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneLocker
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneLocker()
	{
		UScriptStruct::DeferCppStructOps<FSBZBoneLocker>(FName(TEXT("SBZBoneLocker")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneLocker;
	struct Z_Construct_UScriptStruct_FSBZBoneLocker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockCurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LockCurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockAlphaThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LockAlphaThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTranslationLock2D_MetaData[];
#endif
		static void NewProp_bTranslationLock2D_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTranslationLock2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBoneLocker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBoneLocker>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_BoneRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneLocker" },
		{ "ModuleRelativePath", "Public/SBZBoneLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_BoneRef = { "BoneRef", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneLocker, BoneRef), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_BoneRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_BoneRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_LockCurveName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneLocker" },
		{ "ModuleRelativePath", "Public/SBZBoneLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_LockCurveName = { "LockCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneLocker, LockCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_LockCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_LockCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_LockAlphaThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneLocker" },
		{ "ModuleRelativePath", "Public/SBZBoneLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_LockAlphaThreshold = { "LockAlphaThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneLocker, LockAlphaThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_LockAlphaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_LockAlphaThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_YawAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneLocker" },
		{ "ModuleRelativePath", "Public/SBZBoneLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_YawAxis = { "YawAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneLocker, YawAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_YawAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_YawAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_MaxDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneLocker" },
		{ "ModuleRelativePath", "Public/SBZBoneLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneLocker, MaxDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_MaxDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_MaxDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_MaxYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneLocker" },
		{ "ModuleRelativePath", "Public/SBZBoneLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_MaxYaw = { "MaxYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneLocker, MaxYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_MaxYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_MaxYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_bTranslationLock2D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneLocker" },
		{ "ModuleRelativePath", "Public/SBZBoneLocker.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_bTranslationLock2D_SetBit(void* Obj)
	{
		((FSBZBoneLocker*)Obj)->bTranslationLock2D = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_bTranslationLock2D = { "bTranslationLock2D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZBoneLocker), &Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_bTranslationLock2D_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_bTranslationLock2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_bTranslationLock2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneLocker" },
		{ "ModuleRelativePath", "Public/SBZBoneLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneLocker, InterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_InterpSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_BoneRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_LockCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_LockAlphaThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_YawAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_MaxDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_MaxYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_bTranslationLock2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::NewProp_InterpSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBoneLocker",
		sizeof(FSBZBoneLocker),
		alignof(FSBZBoneLocker),
		Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneLocker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBoneLocker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBoneLocker"), sizeof(FSBZBoneLocker), Get_Z_Construct_UScriptStruct_FSBZBoneLocker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBoneLocker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBoneLocker_Hash() { return 3787845595U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
