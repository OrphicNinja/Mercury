// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkRtpc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkRtpc() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkRtpc::StaticRegisterNativesUAkRtpc()
	{
	}
	UClass* Z_Construct_UClass_UAkRtpc_NoRegister()
	{
		return UAkRtpc::StaticClass();
	}
	struct Z_Construct_UClass_UAkRtpc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkRtpc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRtpc_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkRtpc.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkRtpc.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkRtpc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkRtpc>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkRtpc_Statics::ClassParams = {
		&UAkRtpc::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkRtpc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkRtpc()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkRtpc_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkRtpc, 863245579);
	template<> AKAUDIO_API UClass* StaticClass<UAkRtpc>()
	{
		return UAkRtpc::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkRtpc(Z_Construct_UClass_UAkRtpc, &UAkRtpc::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkRtpc"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkRtpc);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
