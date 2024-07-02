// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLookFocusParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLookFocusParameters() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLookFocusParameters();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENotifyFilterType();
// End Cross Module References
class UScriptStruct* FSBZLookFocusParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLookFocusParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLookFocusParameters, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLookFocusParameters"), sizeof(FSBZLookFocusParameters), Get_Z_Construct_UScriptStruct_FSBZLookFocusParameters_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLookFocusParameters>()
{
	return FSBZLookFocusParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLookFocusParameters(FSBZLookFocusParameters::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLookFocusParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLookFocusParameters
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLookFocusParameters()
	{
		UScriptStruct::DeferCppStructOps<FSBZLookFocusParameters>(FName(TEXT("SBZLookFocusParameters")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLookFocusParameters;
	struct Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinBlendInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInEaseExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInEaseExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinBlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutEaseExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutEaseExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignificancePercentInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SignificancePercentInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceForMaxSignificance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceForMaxSignificance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistFromGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistFromGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyFilterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotifyFilterType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyFilterLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NotifyFilterLOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLookFocusParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_YawInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusParameters" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_YawInterval = { "YawInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusParameters, YawInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_YawInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_YawInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_PitchInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusParameters" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_PitchInterval = { "PitchInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusParameters, PitchInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_PitchInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_PitchInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MinBlendInTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusParameters" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MinBlendInTime = { "MinBlendInTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusParameters, MinBlendInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MinBlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MinBlendInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_BlendInEaseExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusParameters" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_BlendInEaseExp = { "BlendInEaseExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusParameters, BlendInEaseExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_BlendInEaseExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_BlendInEaseExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MinBlendOutTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusParameters" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MinBlendOutTime = { "MinBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusParameters, MinBlendOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MinBlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MinBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_BlendOutEaseExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusParameters" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_BlendOutEaseExp = { "BlendOutEaseExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusParameters, BlendOutEaseExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_BlendOutEaseExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_BlendOutEaseExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_SignificancePercentInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusParameters" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_SignificancePercentInterval = { "SignificancePercentInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusParameters, SignificancePercentInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_SignificancePercentInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_SignificancePercentInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_DistanceForMaxSignificance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusParameters" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_DistanceForMaxSignificance = { "DistanceForMaxSignificance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusParameters, DistanceForMaxSignificance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_DistanceForMaxSignificance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_DistanceForMaxSignificance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusParameters" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusParameters, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MaxDistFromGoal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusParameters" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MaxDistFromGoal = { "MaxDistFromGoal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusParameters, MaxDistFromGoal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MaxDistFromGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MaxDistFromGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusParameters" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusParameters, RotationInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_RotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_RotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_NotifyFilterType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusParameters" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_NotifyFilterType = { "NotifyFilterType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusParameters, NotifyFilterType), Z_Construct_UEnum_Engine_ENotifyFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_NotifyFilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_NotifyFilterType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_NotifyFilterLOD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusParameters" },
		{ "ModuleRelativePath", "Public/SBZLookFocusParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_NotifyFilterLOD = { "NotifyFilterLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusParameters, NotifyFilterLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_NotifyFilterLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_NotifyFilterLOD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_YawInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_PitchInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MinBlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_BlendInEaseExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MinBlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_BlendOutEaseExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_SignificancePercentInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_DistanceForMaxSignificance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_MaxDistFromGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_RotationInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_NotifyFilterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::NewProp_NotifyFilterLOD,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLookFocusParameters",
		sizeof(FSBZLookFocusParameters),
		alignof(FSBZLookFocusParameters),
		Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLookFocusParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLookFocusParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLookFocusParameters"), sizeof(FSBZLookFocusParameters), Get_Z_Construct_UScriptStruct_FSBZLookFocusParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLookFocusParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLookFocusParameters_Hash() { return 1948151529U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
