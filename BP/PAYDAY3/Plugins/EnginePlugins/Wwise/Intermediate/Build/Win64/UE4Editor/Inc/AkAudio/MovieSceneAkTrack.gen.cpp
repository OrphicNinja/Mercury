// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/MovieSceneAkTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkTrack() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieSceneAkTrack::StaticRegisterNativesUMovieSceneAkTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkTrack_NoRegister()
	{
		return UMovieSceneAkTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAkTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAMasterTrack_MetaData[];
#endif
		static void NewProp_bIsAMasterTrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAMasterTrack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAkTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovieSceneAkTrack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAkTrack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAkTrack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAkTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAkTrack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAkTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAkTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_bIsAMasterTrack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAkTrack" },
		{ "ModuleRelativePath", "Public/MovieSceneAkTrack.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_bIsAMasterTrack_SetBit(void* Obj)
	{
		((UMovieSceneAkTrack*)Obj)->bIsAMasterTrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_bIsAMasterTrack = { "bIsAMasterTrack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneAkTrack), &Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_bIsAMasterTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_bIsAMasterTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_bIsAMasterTrack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAkTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_bIsAMasterTrack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAkTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAkTrack_Statics::ClassParams = {
		&UMovieSceneAkTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneAkTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkTrack_Statics::PropPointers),
		0,
		0x00A800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAkTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneAkTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAkTrack, 2028366223);
	template<> AKAUDIO_API UClass* StaticClass<UMovieSceneAkTrack>()
	{
		return UMovieSceneAkTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkTrack(Z_Construct_UClass_UMovieSceneAkTrack, &UMovieSceneAkTrack::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
