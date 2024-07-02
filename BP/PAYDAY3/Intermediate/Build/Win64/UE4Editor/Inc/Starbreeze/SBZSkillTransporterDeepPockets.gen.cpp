// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillTransporterDeepPockets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillTransporterDeepPockets() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTransporterDeepPockets_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTransporterDeepPockets();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillTransporterDeepPockets::StaticRegisterNativesUSBZSkillTransporterDeepPockets()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillTransporterDeepPockets_NoRegister()
	{
		return USBZSkillTransporterDeepPockets::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillTransporterDeepPockets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillTransporterDeepPockets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillTransporterDeepPockets_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillTransporterDeepPockets.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillTransporterDeepPockets.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillTransporterDeepPockets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillTransporterDeepPockets>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillTransporterDeepPockets_Statics::ClassParams = {
		&USBZSkillTransporterDeepPockets::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillTransporterDeepPockets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillTransporterDeepPockets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillTransporterDeepPockets()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillTransporterDeepPockets_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillTransporterDeepPockets, 162221413);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillTransporterDeepPockets>()
	{
		return USBZSkillTransporterDeepPockets::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillTransporterDeepPockets(Z_Construct_UClass_USBZSkillTransporterDeepPockets, &USBZSkillTransporterDeepPockets::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillTransporterDeepPockets"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillTransporterDeepPockets);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
