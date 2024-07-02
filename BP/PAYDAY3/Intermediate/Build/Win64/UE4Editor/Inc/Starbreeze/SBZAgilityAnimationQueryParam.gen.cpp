// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityAnimationQueryParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityAnimationQueryParam() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityMontage();
// End Cross Module References
class UScriptStruct* FSBZAgilityAnimationQueryParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgilityAnimationQueryParam"), sizeof(FSBZAgilityAnimationQueryParam), Get_Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgilityAnimationQueryParam>()
{
	return FSBZAgilityAnimationQueryParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgilityAnimationQueryParam(FSBZAgilityAnimationQueryParam::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgilityAnimationQueryParam"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityAnimationQueryParam
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityAnimationQueryParam()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgilityAnimationQueryParam>(FName(TEXT("SBZAgilityAnimationQueryParam")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityAnimationQueryParam;
	struct Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntrySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntrySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryRotationDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntryRotationDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignmentAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlignmentAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationFilters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationFilters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AgilityMontages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityMontages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AgilityMontages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityAnimationQueryParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgilityAnimationQueryParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AnimationName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityAnimationQueryParam" },
		{ "ModuleRelativePath", "Public/SBZAgilityAnimationQueryParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityAnimationQueryParam, AnimationName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AnimationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AnimationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_EntrySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityAnimationQueryParam" },
		{ "ModuleRelativePath", "Public/SBZAgilityAnimationQueryParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_EntrySpeed = { "EntrySpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityAnimationQueryParam, EntrySpeed), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_EntrySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_EntrySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_EntryRotationDiff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityAnimationQueryParam" },
		{ "ModuleRelativePath", "Public/SBZAgilityAnimationQueryParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_EntryRotationDiff = { "EntryRotationDiff", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityAnimationQueryParam, EntryRotationDiff), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_EntryRotationDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_EntryRotationDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AlignmentAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityAnimationQueryParam" },
		{ "ModuleRelativePath", "Public/SBZAgilityAnimationQueryParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AlignmentAngle = { "AlignmentAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityAnimationQueryParam, AlignmentAngle), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AlignmentAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AlignmentAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AreaClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityAnimationQueryParam" },
		{ "ModuleRelativePath", "Public/SBZAgilityAnimationQueryParam.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityAnimationQueryParam, AreaClass), Z_Construct_UClass_UNavAreaBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AreaClass_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AnimationFilters_Inner = { "AnimationFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryFilter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AnimationFilters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityAnimationQueryParam" },
		{ "ModuleRelativePath", "Public/SBZAgilityAnimationQueryParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AnimationFilters = { "AnimationFilters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityAnimationQueryParam, AnimationFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AnimationFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AnimationFilters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AgilityMontages_Inner = { "AgilityMontages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAgilityMontage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AgilityMontages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityAnimationQueryParam" },
		{ "ModuleRelativePath", "Public/SBZAgilityAnimationQueryParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AgilityMontages = { "AgilityMontages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityAnimationQueryParam, AgilityMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AgilityMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AgilityMontages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AnimationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_EntrySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_EntryRotationDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AlignmentAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AreaClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AnimationFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AnimationFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AgilityMontages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::NewProp_AgilityMontages,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgilityAnimationQueryParam",
		sizeof(FSBZAgilityAnimationQueryParam),
		alignof(FSBZAgilityAnimationQueryParam),
		Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgilityAnimationQueryParam"), sizeof(FSBZAgilityAnimationQueryParam), Get_Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam_Hash() { return 3874265063U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
