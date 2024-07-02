// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillFortitudeFortitude.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillFortitudeFortitude() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillFortitudeFortitude_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillFortitudeFortitude();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillFortitudeFortitude::StaticRegisterNativesUSBZSkillFortitudeFortitude()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillFortitudeFortitude_NoRegister()
	{
		return USBZSkillFortitudeFortitude::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillFortitudeFortitude_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillFortitudeFortitude_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillFortitudeFortitude_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillFortitudeFortitude.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillFortitudeFortitude.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillFortitudeFortitude_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillFortitudeFortitude>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillFortitudeFortitude_Statics::ClassParams = {
		&USBZSkillFortitudeFortitude::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillFortitudeFortitude_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillFortitudeFortitude_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillFortitudeFortitude()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillFortitudeFortitude_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillFortitudeFortitude, 1729962485);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillFortitudeFortitude>()
	{
		return USBZSkillFortitudeFortitude::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillFortitudeFortitude(Z_Construct_UClass_USBZSkillFortitudeFortitude, &USBZSkillFortitudeFortitude::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillFortitudeFortitude"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillFortitudeFortitude);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
