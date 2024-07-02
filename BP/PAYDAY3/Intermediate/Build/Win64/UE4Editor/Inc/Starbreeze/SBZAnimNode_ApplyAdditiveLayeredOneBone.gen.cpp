// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimNode_ApplyAdditiveLayeredOneBone() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveAnimationType();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimNode_ApplyAdditiveLayeredOneBone>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FSBZAnimNode_ApplyAdditiveLayeredOneBone cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FSBZAnimNode_ApplyAdditiveLayeredOneBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimNode_ApplyAdditiveLayeredOneBone"), sizeof(FSBZAnimNode_ApplyAdditiveLayeredOneBone), Get_Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimNode_ApplyAdditiveLayeredOneBone>()
{
	return FSBZAnimNode_ApplyAdditiveLayeredOneBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone(FSBZAnimNode_ApplyAdditiveLayeredOneBone::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimNode_ApplyAdditiveLayeredOneBone"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_ApplyAdditiveLayeredOneBone
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_ApplyAdditiveLayeredOneBone()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimNode_ApplyAdditiveLayeredOneBone>(FName(TEXT("SBZAnimNode_ApplyAdditiveLayeredOneBone")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_ApplyAdditiveLayeredOneBone;
	struct Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Additive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Additive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaLayerOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaLayerOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaOthers_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaOthers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerOneBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerOneBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Space;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimNode_ApplyAdditiveLayeredOneBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Base_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, Base), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Additive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Additive = { "Additive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, Additive), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Additive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Additive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaLayerOne_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaLayerOne = { "AlphaLayerOne", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, AlphaLayerOne), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaLayerOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaLayerOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaOthers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaOthers = { "AlphaOthers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, AlphaOthers), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaOthers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaOthers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LayerOneBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LayerOneBoneName = { "LayerOneBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, LayerOneBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LayerOneBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LayerOneBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaScaleBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODInterpolateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODInterpolateTime = { "LODInterpolateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, LODInterpolateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODInterpolateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODInterpolateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODInterpolateTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODInterpolateTimer = { "LODInterpolateTimer", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, LODInterpolateTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODInterpolateTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODInterpolateTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaBoolBlend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaBoolBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaBoolBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaCurveName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, AlphaCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaScaleBiasClamp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaInputType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaInputType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
	{
		((FSBZAnimNode_ApplyAdditiveLayeredOneBone*)Obj)->bAlphaBoolEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAnimNode_ApplyAdditiveLayeredOneBone), &Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_bAlphaBoolEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_bAlphaBoolEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Space_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyAdditiveLayeredOneBone" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyAdditiveLayeredOneBone.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyAdditiveLayeredOneBone, Space), Z_Construct_UEnum_Engine_EAdditiveAnimationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Space_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Additive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaLayerOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaOthers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LayerOneBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaScaleBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODInterpolateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_LODInterpolateTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaBoolBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaScaleBiasClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_AlphaInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_bAlphaBoolEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::NewProp_Space,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"SBZAnimNode_ApplyAdditiveLayeredOneBone",
		sizeof(FSBZAnimNode_ApplyAdditiveLayeredOneBone),
		alignof(FSBZAnimNode_ApplyAdditiveLayeredOneBone),
		Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimNode_ApplyAdditiveLayeredOneBone"), sizeof(FSBZAnimNode_ApplyAdditiveLayeredOneBone), Get_Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_ApplyAdditiveLayeredOneBone_Hash() { return 1361926560U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
