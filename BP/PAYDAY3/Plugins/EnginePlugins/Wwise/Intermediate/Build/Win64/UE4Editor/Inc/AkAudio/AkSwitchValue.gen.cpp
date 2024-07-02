// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSwitchValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSwitchValue() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkSwitchValue::StaticRegisterNativesUAkSwitchValue()
	{
	}
	UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister()
	{
		return UAkSwitchValue::StaticClass();
	}
	struct Z_Construct_UClass_UAkSwitchValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSwitchValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkGroupValue,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSwitchValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkSwitchValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkSwitchValue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSwitchValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSwitchValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkSwitchValue_Statics::ClassParams = {
		&UAkSwitchValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkSwitchValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSwitchValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSwitchValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkSwitchValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSwitchValue, 949657882);
	template<> AKAUDIO_API UClass* StaticClass<UAkSwitchValue>()
	{
		return UAkSwitchValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSwitchValue(Z_Construct_UClass_UAkSwitchValue, &UAkSwitchValue::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSwitchValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSwitchValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
