// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBaseCharacterAnimationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBaseCharacterAnimationData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseCharacterAnimationData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseCharacterAnimationData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBaseCharacterAnimationData::StaticRegisterNativesUSBZBaseCharacterAnimationData()
	{
	}
	UClass* Z_Construct_UClass_USBZBaseCharacterAnimationData_NoRegister()
	{
		return USBZBaseCharacterAnimationData::StaticClass();
	}
	struct Z_Construct_UClass_USBZBaseCharacterAnimationData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBaseCharacterAnimationData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseCharacterAnimationData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBaseCharacterAnimationData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseCharacterAnimationData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBaseCharacterAnimationData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBaseCharacterAnimationData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBaseCharacterAnimationData_Statics::ClassParams = {
		&USBZBaseCharacterAnimationData::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBaseCharacterAnimationData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseCharacterAnimationData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBaseCharacterAnimationData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBaseCharacterAnimationData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBaseCharacterAnimationData, 3641777094);
	template<> STARBREEZE_API UClass* StaticClass<USBZBaseCharacterAnimationData>()
	{
		return USBZBaseCharacterAnimationData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBaseCharacterAnimationData(Z_Construct_UClass_USBZBaseCharacterAnimationData, &USBZBaseCharacterAnimationData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBaseCharacterAnimationData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBaseCharacterAnimationData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
