// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBuiltInAnimMontageValueTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBuiltInAnimMontageValueTrack() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZBuiltInAnimMontageTrackType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
class UScriptStruct* FSBZBuiltInAnimMontageValueTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBuiltInAnimMontageValueTrack"), sizeof(FSBZBuiltInAnimMontageValueTrack), Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBuiltInAnimMontageValueTrack>()
{
	return FSBZBuiltInAnimMontageValueTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack(FSBZBuiltInAnimMontageValueTrack::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBuiltInAnimMontageValueTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBuiltInAnimMontageValueTrack
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBuiltInAnimMontageValueTrack()
	{
		UScriptStruct::DeferCppStructOps<FSBZBuiltInAnimMontageValueTrack>(FName(TEXT("SBZBuiltInAnimMontageValueTrack")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBuiltInAnimMontageValueTrack;
	struct Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontageValueTrack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBuiltInAnimMontageValueTrack>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_TrackType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBuiltInAnimMontageValueTrack" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontageValueTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBuiltInAnimMontageValueTrack, TrackType), Z_Construct_UEnum_Starbreeze_ESBZBuiltInAnimMontageTrackType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_TrackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_TrackType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_Curve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBuiltInAnimMontageValueTrack" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontageValueTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBuiltInAnimMontageValueTrack, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_PlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBuiltInAnimMontageValueTrack" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontageValueTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBuiltInAnimMontageValueTrack, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_PlayRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_TrackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_TrackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_Curve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::NewProp_PlayRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBuiltInAnimMontageValueTrack",
		sizeof(FSBZBuiltInAnimMontageValueTrack),
		alignof(FSBZBuiltInAnimMontageValueTrack),
		Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBuiltInAnimMontageValueTrack"), sizeof(FSBZBuiltInAnimMontageValueTrack), Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack_Hash() { return 3421347580U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
