// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityAnimationQueryFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityAnimationQueryFilter() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilitySegmentAxis();
// End Cross Module References
class UScriptStruct* FSBZAgilityAnimationQueryFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgilityAnimationQueryFilter"), sizeof(FSBZAgilityAnimationQueryFilter), Get_Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgilityAnimationQueryFilter>()
{
	return FSBZAgilityAnimationQueryFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgilityAnimationQueryFilter(FSBZAgilityAnimationQueryFilter::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgilityAnimationQueryFilter"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityAnimationQueryFilter
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityAnimationQueryFilter()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgilityAnimationQueryFilter>(FName(TEXT("SBZAgilityAnimationQueryFilter")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityAnimationQueryFilter;
	struct Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartAgilityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAgilityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StartAgilityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndAgilityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndAgilityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndAgilityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistanceRange;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DistanceRangeAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceRangeAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DistanceRangeAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityAnimationQueryFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgilityAnimationQueryFilter>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_StartAgilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_StartAgilityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityAnimationQueryFilter" },
		{ "ModuleRelativePath", "Public/SBZAgilityAnimationQueryFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_StartAgilityType = { "StartAgilityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityAnimationQueryFilter, StartAgilityType), Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_StartAgilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_StartAgilityType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_EndAgilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_EndAgilityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityAnimationQueryFilter" },
		{ "ModuleRelativePath", "Public/SBZAgilityAnimationQueryFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_EndAgilityType = { "EndAgilityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityAnimationQueryFilter, EndAgilityType), Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_EndAgilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_EndAgilityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_DistanceRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityAnimationQueryFilter" },
		{ "ModuleRelativePath", "Public/SBZAgilityAnimationQueryFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_DistanceRange = { "DistanceRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityAnimationQueryFilter, DistanceRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_DistanceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_DistanceRange_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_DistanceRangeAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_DistanceRangeAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityAnimationQueryFilter" },
		{ "ModuleRelativePath", "Public/SBZAgilityAnimationQueryFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_DistanceRangeAxis = { "DistanceRangeAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityAnimationQueryFilter, DistanceRangeAxis), Z_Construct_UEnum_Starbreeze_ESBZAgilitySegmentAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_DistanceRangeAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_DistanceRangeAxis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_StartAgilityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_StartAgilityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_EndAgilityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_EndAgilityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_DistanceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_DistanceRangeAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::NewProp_DistanceRangeAxis,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgilityAnimationQueryFilter",
		sizeof(FSBZAgilityAnimationQueryFilter),
		alignof(FSBZAgilityAnimationQueryFilter),
		Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgilityAnimationQueryFilter"), sizeof(FSBZAgilityAnimationQueryFilter), Get_Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter_Hash() { return 2994847661U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
