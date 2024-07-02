// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAudioRaycasting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAudioRaycasting() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAudioRaycasting_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAudioRaycasting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAudioRaycasting::StaticRegisterNativesUSBZAudioRaycasting()
	{
	}
	UClass* Z_Construct_UClass_USBZAudioRaycasting_NoRegister()
	{
		return USBZAudioRaycasting::StaticClass();
	}
	struct Z_Construct_UClass_USBZAudioRaycasting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAudioRaycasting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAudioRaycasting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAudioRaycasting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAudioRaycasting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAudioRaycasting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAudioRaycasting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAudioRaycasting_Statics::ClassParams = {
		&USBZAudioRaycasting::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAudioRaycasting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAudioRaycasting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAudioRaycasting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAudioRaycasting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAudioRaycasting, 3922033648);
	template<> STARBREEZE_API UClass* StaticClass<USBZAudioRaycasting>()
	{
		return USBZAudioRaycasting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAudioRaycasting(Z_Construct_UClass_USBZAudioRaycasting, &USBZAudioRaycasting::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAudioRaycasting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAudioRaycasting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
