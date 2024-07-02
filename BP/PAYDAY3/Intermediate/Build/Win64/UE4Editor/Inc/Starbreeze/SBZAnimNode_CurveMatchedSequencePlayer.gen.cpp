// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimNode_CurveMatchedSequencePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimNode_CurveMatchedSequencePlayer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimNode_CurveMatchedSequencePlayer>() == std::is_polymorphic<FAnimNode_AssetPlayerBase>(), "USTRUCT FSBZAnimNode_CurveMatchedSequencePlayer cannot be polymorphic unless super FAnimNode_AssetPlayerBase is polymorphic");

class UScriptStruct* FSBZAnimNode_CurveMatchedSequencePlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimNode_CurveMatchedSequencePlayer"), sizeof(FSBZAnimNode_CurveMatchedSequencePlayer), Get_Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimNode_CurveMatchedSequencePlayer>()
{
	return FSBZAnimNode_CurveMatchedSequencePlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer(FSBZAnimNode_CurveMatchedSequencePlayer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimNode_CurveMatchedSequencePlayer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_CurveMatchedSequencePlayer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_CurveMatchedSequencePlayer()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimNode_CurveMatchedSequencePlayer>(FName(TEXT("SBZAnimNode_CurveMatchedSequencePlayer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_CurveMatchedSequencePlayer;
	struct Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedSequencePlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimNode_CurveMatchedSequencePlayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_Sequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedSequencePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedSequencePlayer, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_CurveName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedSequencePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedSequencePlayer, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_CurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_CurveTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedSequencePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_CurveTarget = { "CurveTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedSequencePlayer, CurveTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_CurveTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_CurveTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedSequencePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedSequencePlayer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((FSBZAnimNode_CurveMatchedSequencePlayer*)Obj)->bAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAnimNode_CurveMatchedSequencePlayer), &Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_PreviousSequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedSequencePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_PreviousSequence = { "PreviousSequence", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedSequencePlayer, PreviousSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_PreviousSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_PreviousSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_CurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_CurveTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_bAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::NewProp_PreviousSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
		&NewStructOps,
		"SBZAnimNode_CurveMatchedSequencePlayer",
		sizeof(FSBZAnimNode_CurveMatchedSequencePlayer),
		alignof(FSBZAnimNode_CurveMatchedSequencePlayer),
		Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimNode_CurveMatchedSequencePlayer"), sizeof(FSBZAnimNode_CurveMatchedSequencePlayer), Get_Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedSequencePlayer_Hash() { return 194659975U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
