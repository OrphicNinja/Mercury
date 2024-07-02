// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimMode_OrientationWarping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimMode_OrientationWarping() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAxisSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneRef();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimMode_OrientationWarping>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FSBZAnimMode_OrientationWarping cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FSBZAnimMode_OrientationWarping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimMode_OrientationWarping"), sizeof(FSBZAnimMode_OrientationWarping), Get_Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimMode_OrientationWarping>()
{
	return FSBZAnimMode_OrientationWarping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimMode_OrientationWarping(FSBZAnimMode_OrientationWarping::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimMode_OrientationWarping"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimMode_OrientationWarping
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimMode_OrientationWarping()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimMode_OrientationWarping>(FName(TEXT("SBZAnimMode_OrientationWarping")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimMode_OrientationWarping;
	struct Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocomotionAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PelvisBone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpineBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpineBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKFootRootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKFootRootBone;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimMode_OrientationWarping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_BasePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_BasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_BasePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LocomotionAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LocomotionAngle = { "LocomotionAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, LocomotionAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LocomotionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LocomotionAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, Settings), Z_Construct_UScriptStruct_FSBZAxisSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_PelvisBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_PelvisBone = { "PelvisBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, PelvisBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_PelvisBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_PelvisBone_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_SpineBones_Inner = { "SpineBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBoneRef, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_SpineBones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_SpineBones = { "SpineBones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, SpineBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_SpineBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_SpineBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_IKFootRootBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_IKFootRootBone = { "IKFootRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, IKFootRootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_IKFootRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_IKFootRootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaBoolBlend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaBoolBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaBoolBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaCurveName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, AlphaCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaScaleBiasClamp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaInputType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaInputType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
	{
		((FSBZAnimMode_OrientationWarping*)Obj)->bAlphaBoolEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAnimMode_OrientationWarping), &Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_bAlphaBoolEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_bAlphaBoolEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODInterpolateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODInterpolateTime = { "LODInterpolateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, LODInterpolateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODInterpolateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODInterpolateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODInterpolateTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimMode_OrientationWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimMode_OrientationWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODInterpolateTimer = { "LODInterpolateTimer", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimMode_OrientationWarping, LODInterpolateTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODInterpolateTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODInterpolateTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_BasePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LocomotionAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_PelvisBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_SpineBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_SpineBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_IKFootRootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaBoolBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaScaleBiasClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_AlphaInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_bAlphaBoolEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODInterpolateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::NewProp_LODInterpolateTimer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"SBZAnimMode_OrientationWarping",
		sizeof(FSBZAnimMode_OrientationWarping),
		alignof(FSBZAnimMode_OrientationWarping),
		Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimMode_OrientationWarping"), sizeof(FSBZAnimMode_OrientationWarping), Get_Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimMode_OrientationWarping_Hash() { return 1116941958U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
