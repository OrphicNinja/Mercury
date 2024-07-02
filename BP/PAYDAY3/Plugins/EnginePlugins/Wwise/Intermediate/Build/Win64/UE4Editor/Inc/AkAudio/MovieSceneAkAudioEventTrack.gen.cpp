// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/MovieSceneAkAudioEventTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventTrack() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UMovieSceneAkAudioEventTrack::StaticRegisterNativesUMovieSceneAkAudioEventTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack_NoRegister()
	{
		return UMovieSceneAkAudioEventTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneAkTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovieSceneAkAudioEventTrack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAkAudioEventTrack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkAudioEventTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::ClassParams = {
		&UMovieSceneAkAudioEventTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAkAudioEventTrack, 4200572635);
	template<> AKAUDIO_API UClass* StaticClass<UMovieSceneAkAudioEventTrack>()
	{
		return UMovieSceneAkAudioEventTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkAudioEventTrack(Z_Construct_UClass_UMovieSceneAkAudioEventTrack, &UMovieSceneAkAudioEventTrack::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkAudioEventTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioEventTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
