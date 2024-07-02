// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimNode_BuiltInAnimMontagePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimNode_BuiltInAnimMontagePlayer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimNode_BuiltInAnimMontagePlayer>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FSBZAnimNode_BuiltInAnimMontagePlayer cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FSBZAnimNode_BuiltInAnimMontagePlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimNode_BuiltInAnimMontagePlayer"), sizeof(FSBZAnimNode_BuiltInAnimMontagePlayer), Get_Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimNode_BuiltInAnimMontagePlayer>()
{
	return FSBZAnimNode_BuiltInAnimMontagePlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer(FSBZAnimNode_BuiltInAnimMontagePlayer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimNode_BuiltInAnimMontagePlayer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_BuiltInAnimMontagePlayer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_BuiltInAnimMontagePlayer()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimNode_BuiltInAnimMontagePlayer>(FName(TEXT("SBZAnimNode_BuiltInAnimMontagePlayer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_BuiltInAnimMontagePlayer;
	struct Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BonesToModify_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesToModify_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonesToModify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontagesHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontagesHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_BuiltInAnimMontagePlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimNode_BuiltInAnimMontagePlayer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::NewProp_BonesToModify_Inner = { "BonesToModify", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::NewProp_BonesToModify_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_BuiltInAnimMontagePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_BuiltInAnimMontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::NewProp_BonesToModify = { "BonesToModify", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_BuiltInAnimMontagePlayer, BonesToModify), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::NewProp_BonesToModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::NewProp_BonesToModify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::NewProp_AnimMontagesHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_BuiltInAnimMontagePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_BuiltInAnimMontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::NewProp_AnimMontagesHandler = { "AnimMontagesHandler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_BuiltInAnimMontagePlayer, AnimMontagesHandler), Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::NewProp_AnimMontagesHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::NewProp_AnimMontagesHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::NewProp_BonesToModify_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::NewProp_BonesToModify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::NewProp_AnimMontagesHandler,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"SBZAnimNode_BuiltInAnimMontagePlayer",
		sizeof(FSBZAnimNode_BuiltInAnimMontagePlayer),
		alignof(FSBZAnimNode_BuiltInAnimMontagePlayer),
		Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimNode_BuiltInAnimMontagePlayer"), sizeof(FSBZAnimNode_BuiltInAnimMontagePlayer), Get_Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_BuiltInAnimMontagePlayer_Hash() { return 691280496U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
