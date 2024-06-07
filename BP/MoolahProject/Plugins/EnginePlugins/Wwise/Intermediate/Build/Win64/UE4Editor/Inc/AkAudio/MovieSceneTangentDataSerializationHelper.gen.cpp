// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/MovieSceneTangentDataSerializationHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTangentDataSerializationHelper() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode();
// End Cross Module References
class UScriptStruct* FMovieSceneTangentDataSerializationHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper, Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneTangentDataSerializationHelper"), sizeof(FMovieSceneTangentDataSerializationHelper), Get_Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FMovieSceneTangentDataSerializationHelper>()
{
	return FMovieSceneTangentDataSerializationHelper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTangentDataSerializationHelper(FMovieSceneTangentDataSerializationHelper::StaticStruct, TEXT("/Script/AkAudio"), TEXT("MovieSceneTangentDataSerializationHelper"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneTangentDataSerializationHelper
{
	FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneTangentDataSerializationHelper()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneTangentDataSerializationHelper>(FName(TEXT("MovieSceneTangentDataSerializationHelper")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneTangentDataSerializationHelper;
	struct Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArriveTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaveTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentWeightMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TangentWeightMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArriveTangentWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaveTangentWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTangentDataSerializationHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTangentDataSerializationHelper>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneTangentDataSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneTangentDataSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangent = { "ArriveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, ArriveTangent), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneTangentDataSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneTangentDataSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangent = { "LeaveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, LeaveTangent), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_TangentWeightMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneTangentDataSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneTangentDataSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_TangentWeightMode = { "TangentWeightMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, TangentWeightMode), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_TangentWeightMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_TangentWeightMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangentWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneTangentDataSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneTangentDataSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangentWeight = { "ArriveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, ArriveTangentWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangentWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangentWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangentWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneTangentDataSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneTangentDataSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangentWeight = { "LeaveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, LeaveTangentWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangentWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangentWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_TangentWeightMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangentWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangentWeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"MovieSceneTangentDataSerializationHelper",
		sizeof(FMovieSceneTangentDataSerializationHelper),
		alignof(FMovieSceneTangentDataSerializationHelper),
		Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTangentDataSerializationHelper"), sizeof(FMovieSceneTangentDataSerializationHelper), Get_Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Hash() { return 1538670431U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
