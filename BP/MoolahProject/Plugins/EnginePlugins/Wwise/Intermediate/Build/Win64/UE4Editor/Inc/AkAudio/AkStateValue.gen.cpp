// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkStateValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkStateValue() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkStateValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkStateValue();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkStateValue::StaticRegisterNativesUAkStateValue()
	{
	}
	UClass* Z_Construct_UClass_UAkStateValue_NoRegister()
	{
		return UAkStateValue::StaticClass();
	}
	struct Z_Construct_UClass_UAkStateValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkStateValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkGroupValue,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkStateValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkStateValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkStateValue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkStateValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkStateValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkStateValue_Statics::ClassParams = {
		&UAkStateValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkStateValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkStateValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkStateValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkStateValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkStateValue, 2401985489);
	template<> AKAUDIO_API UClass* StaticClass<UAkStateValue>()
	{
		return UAkStateValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkStateValue(Z_Construct_UClass_UAkStateValue, &UAkStateValue::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkStateValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkStateValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
