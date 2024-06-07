// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/MovieSceneAkAudioEventTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventTemplate() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneAkAudioEventTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneAkAudioEventTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

class UScriptStruct* FMovieSceneAkAudioEventTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate, Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneAkAudioEventTemplate"), sizeof(FMovieSceneAkAudioEventTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FMovieSceneAkAudioEventTemplate>()
{
	return FMovieSceneAkAudioEventTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAkAudioEventTemplate(FMovieSceneAkAudioEventTemplate::StaticStruct, TEXT("/Script/AkAudio"), TEXT("MovieSceneAkAudioEventTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioEventTemplate
{
	FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioEventTemplate()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneAkAudioEventTemplate>(FName(TEXT("MovieSceneAkAudioEventTemplate")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioEventTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAkAudioEventTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAkAudioEventTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewProp_Section_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAkAudioEventTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAkAudioEventTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAkAudioEventTemplate, Section), Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewProp_Section_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewProp_Section,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneAkAudioEventTemplate",
		sizeof(FMovieSceneAkAudioEventTemplate),
		alignof(FMovieSceneAkAudioEventTemplate),
		Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAkAudioEventTemplate"), sizeof(FMovieSceneAkAudioEventTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Hash() { return 85116483U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
