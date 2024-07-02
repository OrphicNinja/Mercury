// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimNode_CurveMatchedBlendSpacePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimNode_CurveMatchedBlendSpacePlayer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendFilter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSampleData();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimNode_CurveMatchedBlendSpacePlayer>() == std::is_polymorphic<FAnimNode_AssetPlayerBase>(), "USTRUCT FSBZAnimNode_CurveMatchedBlendSpacePlayer cannot be polymorphic unless super FAnimNode_AssetPlayerBase is polymorphic");

class UScriptStruct* FSBZAnimNode_CurveMatchedBlendSpacePlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimNode_CurveMatchedBlendSpacePlayer"), sizeof(FSBZAnimNode_CurveMatchedBlendSpacePlayer), Get_Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimNode_CurveMatchedBlendSpacePlayer>()
{
	return FSBZAnimNode_CurveMatchedBlendSpacePlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer(FSBZAnimNode_CurveMatchedBlendSpacePlayer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimNode_CurveMatchedBlendSpacePlayer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_CurveMatchedBlendSpacePlayer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_CurveMatchedBlendSpacePlayer()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimNode_CurveMatchedBlendSpacePlayer>(FName(TEXT("SBZAnimNode_CurveMatchedBlendSpacePlayer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_CurveMatchedBlendSpacePlayer;
	struct Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendFilter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendSampleDataCache_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSampleDataCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendSampleDataCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousBlendSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousBlendSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedBlendSpacePlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimNode_CurveMatchedBlendSpacePlayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_X_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedBlendSpacePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedBlendSpacePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedBlendSpacePlayer, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_Y_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedBlendSpacePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedBlendSpacePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedBlendSpacePlayer, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_Z_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedBlendSpacePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedBlendSpacePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedBlendSpacePlayer, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedBlendSpacePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedBlendSpacePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedBlendSpacePlayer, BlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_CurveName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedBlendSpacePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedBlendSpacePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedBlendSpacePlayer, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_CurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_CurveTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedBlendSpacePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedBlendSpacePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_CurveTarget = { "CurveTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedBlendSpacePlayer, CurveTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_CurveTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_CurveTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_PlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedBlendSpacePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedBlendSpacePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedBlendSpacePlayer, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedBlendSpacePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedBlendSpacePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendFilter = { "BlendFilter", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedBlendSpacePlayer, BlendFilter), Z_Construct_UScriptStruct_FBlendFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendFilter_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendSampleDataCache_Inner = { "BlendSampleDataCache", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlendSampleData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendSampleDataCache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedBlendSpacePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedBlendSpacePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendSampleDataCache = { "BlendSampleDataCache", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedBlendSpacePlayer, BlendSampleDataCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendSampleDataCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendSampleDataCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_PreviousBlendSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CurveMatchedBlendSpacePlayer" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CurveMatchedBlendSpacePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_PreviousBlendSpace = { "PreviousBlendSpace", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CurveMatchedBlendSpacePlayer, PreviousBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_PreviousBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_PreviousBlendSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_CurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_CurveTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendSampleDataCache_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_BlendSampleDataCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::NewProp_PreviousBlendSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
		&NewStructOps,
		"SBZAnimNode_CurveMatchedBlendSpacePlayer",
		sizeof(FSBZAnimNode_CurveMatchedBlendSpacePlayer),
		alignof(FSBZAnimNode_CurveMatchedBlendSpacePlayer),
		Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimNode_CurveMatchedBlendSpacePlayer"), sizeof(FSBZAnimNode_CurveMatchedBlendSpacePlayer), Get_Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_CurveMatchedBlendSpacePlayer_Hash() { return 4072074646U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
