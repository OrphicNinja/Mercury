// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimMode_LipSync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimMode_LipSync() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimMode_LipSync();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDialogAnimDataWrapper();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimMode_LipSync>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FSBZAnimMode_LipSync cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FSBZAnimMode_LipSync::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimMode_LipSync"), sizeof(FSBZAnimMode_LipSync), Get_Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimMode_LipSync>()
{
	return FSBZAnimMode_LipSync::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimMode_LipSync(FSBZAnimMode_LipSync::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimMode_LipSync"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimMode_LipSync
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimMode_LipSync()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimMode_LipSync>(FName(TEXT("SBZAnimMode_LipSync")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimMode_LipSync;
	struct Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhonemeBlendInType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhonemeBlendInType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PhonemeBlendInType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhonemeBlendOutType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhonemeBlendOutType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PhonemeBlendOutType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhonemeStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhonemeStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogAnimDataWrapper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogAnimDataWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaBoolBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaBoolBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlphaBoolEnabled_MetaData[];
#endif
		static void NewProp_bAlphaBoolEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlphaBoolEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODInterpolateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODInterpolateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODInterpolateTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODInterpolateTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimMode_LipSync>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_SourcePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_SourcePose_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendInType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendInType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendInType = { "PhonemeBlendInType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, PhonemeBlendInType), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendInType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendInType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendOutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendOutType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendOutType = { "PhonemeBlendOutType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, PhonemeBlendOutType), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendOutType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendOutType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeStrength = { "PhonemeStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, PhonemeStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_DialogAnimDataWrapper_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_DialogAnimDataWrapper = { "DialogAnimDataWrapper", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, DialogAnimDataWrapper), Z_Construct_UScriptStruct_FSBZDialogAnimDataWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_DialogAnimDataWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_DialogAnimDataWrapper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_DialogStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_DialogStartTime = { "DialogStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, DialogStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_DialogStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_DialogStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaBoolBlend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaBoolBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaBoolBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaCurveName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, AlphaCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaScaleBiasClamp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaInputType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaInputType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
	{
		((FSBZAnimMode_LipSync*)Obj)->bAlphaBoolEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAnimMode_LipSync), &Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_bAlphaBoolEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_bAlphaBoolEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODInterpolateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODInterpolateTime = { "LODInterpolateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, LODInterpolateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODInterpolateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODInterpolateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODInterpolateTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_LipSync" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_LipSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODInterpolateTimer = { "LODInterpolateTimer", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_LipSync, LODInterpolateTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODInterpolateTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODInterpolateTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_SourcePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendInType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendInType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendOutType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeBlendOutType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_PhonemeStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_DialogAnimDataWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_DialogStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaBoolBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaScaleBiasClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_AlphaInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_bAlphaBoolEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODInterpolateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::NewProp_LODInterpolateTimer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"SBZAnimMode_LipSync",
		sizeof(FSBZAnimMode_LipSync),
		alignof(FSBZAnimMode_LipSync),
		Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimMode_LipSync()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimMode_LipSync"), sizeof(FSBZAnimMode_LipSync), Get_Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimMode_LipSync_Hash() { return 4200451911U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
