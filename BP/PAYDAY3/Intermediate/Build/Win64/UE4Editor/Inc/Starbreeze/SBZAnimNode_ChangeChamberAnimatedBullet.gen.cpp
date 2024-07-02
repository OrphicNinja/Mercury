// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimNode_ChangeChamberAnimatedBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimNode_ChangeChamberAnimatedBullet() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimNode_ChangeChamberAnimatedBullet>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FSBZAnimNode_ChangeChamberAnimatedBullet cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FSBZAnimNode_ChangeChamberAnimatedBullet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimNode_ChangeChamberAnimatedBullet"), sizeof(FSBZAnimNode_ChangeChamberAnimatedBullet), Get_Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimNode_ChangeChamberAnimatedBullet>()
{
	return FSBZAnimNode_ChangeChamberAnimatedBullet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet(FSBZAnimNode_ChangeChamberAnimatedBullet::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimNode_ChangeChamberAnimatedBullet"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_ChangeChamberAnimatedBullet
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_ChangeChamberAnimatedBullet()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimNode_ChangeChamberAnimatedBullet>(FName(TEXT("SBZAnimNode_ChangeChamberAnimatedBullet")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_ChangeChamberAnimatedBullet;
	struct Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToAnimateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneToAnimateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatedBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimatedBoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ChangeChamberAnimatedBullet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimNode_ChangeChamberAnimatedBullet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::NewProp_BoneToAnimateName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ChangeChamberAnimatedBullet" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ChangeChamberAnimatedBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::NewProp_BoneToAnimateName = { "BoneToAnimateName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ChangeChamberAnimatedBullet, BoneToAnimateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::NewProp_BoneToAnimateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::NewProp_BoneToAnimateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::NewProp_AnimatedBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ChangeChamberAnimatedBullet" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ChangeChamberAnimatedBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::NewProp_AnimatedBoneName = { "AnimatedBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ChangeChamberAnimatedBullet, AnimatedBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::NewProp_AnimatedBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::NewProp_AnimatedBoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::NewProp_BoneToAnimateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::NewProp_AnimatedBoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"SBZAnimNode_ChangeChamberAnimatedBullet",
		sizeof(FSBZAnimNode_ChangeChamberAnimatedBullet),
		alignof(FSBZAnimNode_ChangeChamberAnimatedBullet),
		Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimNode_ChangeChamberAnimatedBullet"), sizeof(FSBZAnimNode_ChangeChamberAnimatedBullet), Get_Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_ChangeChamberAnimatedBullet_Hash() { return 3194540913U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
