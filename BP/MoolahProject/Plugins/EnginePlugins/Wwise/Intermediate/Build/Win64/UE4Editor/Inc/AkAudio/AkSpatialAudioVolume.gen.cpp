// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSpatialAudioVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpatialAudioVolume() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister();
// End Cross Module References
	void AAkSpatialAudioVolume::StaticRegisterNativesAAkSpatialAudioVolume()
	{
	}
	UClass* Z_Construct_UClass_AAkSpatialAudioVolume_NoRegister()
	{
		return AAkSpatialAudioVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAkSpatialAudioVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceReflectorSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurfaceReflectorSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateReverb_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LateReverb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAkSpatialAudioVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpatialAudioVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkSpatialAudioVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SurfaceReflectorSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SurfaceReflectorSet = { "SurfaceReflectorSet", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, SurfaceReflectorSet), Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SurfaceReflectorSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SurfaceReflectorSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_LateReverb_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_LateReverb = { "LateReverb", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, LateReverb), Z_Construct_UClass_UAkLateReverbComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_LateReverb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_LateReverb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Room_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, Room), Z_Construct_UClass_UAkRoomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Room_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Room_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkSpatialAudioVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SurfaceReflectorSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_LateReverb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Room,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAkSpatialAudioVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkSpatialAudioVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::ClassParams = {
		&AAkSpatialAudioVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAkSpatialAudioVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAkSpatialAudioVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAkSpatialAudioVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAkSpatialAudioVolume, 518705355);
	template<> AKAUDIO_API UClass* StaticClass<AAkSpatialAudioVolume>()
	{
		return AAkSpatialAudioVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkSpatialAudioVolume(Z_Construct_UClass_AAkSpatialAudioVolume, &AAkSpatialAudioVolume::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkSpatialAudioVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkSpatialAudioVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
