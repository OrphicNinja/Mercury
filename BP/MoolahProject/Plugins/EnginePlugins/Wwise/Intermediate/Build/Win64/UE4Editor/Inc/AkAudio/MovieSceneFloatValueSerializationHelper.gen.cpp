// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/MovieSceneFloatValueSerializationHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatValueSerializationHelper() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper();
// End Cross Module References
class UScriptStruct* FMovieSceneFloatValueSerializationHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper, Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneFloatValueSerializationHelper"), sizeof(FMovieSceneFloatValueSerializationHelper), Get_Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FMovieSceneFloatValueSerializationHelper>()
{
	return FMovieSceneFloatValueSerializationHelper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneFloatValueSerializationHelper(FMovieSceneFloatValueSerializationHelper::StaticStruct, TEXT("/Script/AkAudio"), TEXT("MovieSceneFloatValueSerializationHelper"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneFloatValueSerializationHelper
{
	FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneFloatValueSerializationHelper()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneFloatValueSerializationHelper>(FName(TEXT("MovieSceneFloatValueSerializationHelper")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneFloatValueSerializationHelper;
	struct Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TangentMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatValueSerializationHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatValueSerializationHelper>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatValueSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatValueSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_InterpMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatValueSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatValueSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_InterpMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_InterpMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_TangentMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatValueSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatValueSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_TangentMode = { "TangentMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_TangentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_TangentMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Tangent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatValueSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatValueSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, Tangent), Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Tangent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_InterpMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_TangentMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Tangent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"MovieSceneFloatValueSerializationHelper",
		sizeof(FMovieSceneFloatValueSerializationHelper),
		alignof(FMovieSceneFloatValueSerializationHelper),
		Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneFloatValueSerializationHelper"), sizeof(FMovieSceneFloatValueSerializationHelper), Get_Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Hash() { return 4927095U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
