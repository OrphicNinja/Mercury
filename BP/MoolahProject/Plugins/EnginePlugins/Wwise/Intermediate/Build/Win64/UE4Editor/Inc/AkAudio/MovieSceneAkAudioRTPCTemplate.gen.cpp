// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/MovieSceneAkAudioRTPCTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioRTPCTemplate() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneAkAudioRTPCTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneAkAudioRTPCTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

class UScriptStruct* FMovieSceneAkAudioRTPCTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate, Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneAkAudioRTPCTemplate"), sizeof(FMovieSceneAkAudioRTPCTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FMovieSceneAkAudioRTPCTemplate>()
{
	return FMovieSceneAkAudioRTPCTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate(FMovieSceneAkAudioRTPCTemplate::StaticStruct, TEXT("/Script/AkAudio"), TEXT("MovieSceneAkAudioRTPCTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCTemplate
{
	FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCTemplate()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneAkAudioRTPCTemplate>(FName(TEXT("MovieSceneAkAudioRTPCTemplate")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAkAudioRTPCTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAkAudioRTPCTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::NewProp_Section_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAkAudioRTPCTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAkAudioRTPCTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAkAudioRTPCTemplate, Section), Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::NewProp_Section_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::NewProp_Section,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneAkAudioRTPCTemplate",
		sizeof(FMovieSceneAkAudioRTPCTemplate),
		alignof(FMovieSceneAkAudioRTPCTemplate),
		Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAkAudioRTPCTemplate"), sizeof(FMovieSceneAkAudioRTPCTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Hash() { return 1238725504U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
