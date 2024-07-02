// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/MovieSceneFloatChannelSerializationHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatChannelSerializationHelper() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper();
// End Cross Module References
class UScriptStruct* FMovieSceneFloatChannelSerializationHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneFloatChannelSerializationHelper"), sizeof(FMovieSceneFloatChannelSerializationHelper), Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FMovieSceneFloatChannelSerializationHelper>()
{
	return FMovieSceneFloatChannelSerializationHelper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper(FMovieSceneFloatChannelSerializationHelper::StaticStruct, TEXT("/Script/AkAudio"), TEXT("MovieSceneFloatChannelSerializationHelper"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneFloatChannelSerializationHelper
{
	FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneFloatChannelSerializationHelper()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneFloatChannelSerializationHelper>(FName(TEXT("MovieSceneFloatChannelSerializationHelper")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneFloatChannelSerializationHelper;
	struct Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreInfinityExtrap_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreInfinityExtrap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostInfinityExtrap_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PostInfinityExtrap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultValue_MetaData[];
#endif
		static void NewProp_bHasDefaultValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatChannelSerializationHelper>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PreInfinityExtrap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatChannelSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PreInfinityExtrap = { "PreInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, PreInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PreInfinityExtrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PreInfinityExtrap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PostInfinityExtrap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatChannelSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PostInfinityExtrap = { "PostInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, PostInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PostInfinityExtrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PostInfinityExtrap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Times_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatChannelSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Times_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatChannelSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatChannelSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatChannelSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue_SetBit(void* Obj)
	{
		((FMovieSceneFloatChannelSerializationHelper*)Obj)->bHasDefaultValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue = { "bHasDefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneFloatChannelSerializationHelper), &Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PreInfinityExtrap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PostInfinityExtrap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Times_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Times,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"MovieSceneFloatChannelSerializationHelper",
		sizeof(FMovieSceneFloatChannelSerializationHelper),
		alignof(FMovieSceneFloatChannelSerializationHelper),
		Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneFloatChannelSerializationHelper"), sizeof(FMovieSceneFloatChannelSerializationHelper), Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Hash() { return 376050157U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
