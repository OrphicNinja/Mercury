// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimNode_BoneLocker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimNode_BoneLocker() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneLocker();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimNode_BoneLocker>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FSBZAnimNode_BoneLocker cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FSBZAnimNode_BoneLocker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimNode_BoneLocker"), sizeof(FSBZAnimNode_BoneLocker), Get_Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimNode_BoneLocker>()
{
	return FSBZAnimNode_BoneLocker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimNode_BoneLocker(FSBZAnimNode_BoneLocker::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimNode_BoneLocker"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_BoneLocker
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_BoneLocker()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimNode_BoneLocker>(FName(TEXT("SBZAnimNode_BoneLocker")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_BoneLocker;
	struct Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneLockers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneLockers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneLockers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComponentSpace_MetaData[];
#endif
		static void NewProp_bComponentSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComponentSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_BoneLocker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimNode_BoneLocker>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_BoneLockers_Inner = { "BoneLockers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBoneLocker, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_BoneLockers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_BoneLocker" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_BoneLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_BoneLockers = { "BoneLockers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_BoneLocker, BoneLockers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_BoneLockers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_BoneLockers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_bComponentSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_BoneLocker" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_BoneLocker.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_bComponentSpace_SetBit(void* Obj)
	{
		((FSBZAnimNode_BoneLocker*)Obj)->bComponentSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_bComponentSpace = { "bComponentSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAnimNode_BoneLocker), &Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_bComponentSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_bComponentSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_bComponentSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_BoneLockers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_BoneLockers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::NewProp_bComponentSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"SBZAnimNode_BoneLocker",
		sizeof(FSBZAnimNode_BoneLocker),
		alignof(FSBZAnimNode_BoneLocker),
		Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimNode_BoneLocker"), sizeof(FSBZAnimNode_BoneLocker), Get_Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_BoneLocker_Hash() { return 1203284969U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
