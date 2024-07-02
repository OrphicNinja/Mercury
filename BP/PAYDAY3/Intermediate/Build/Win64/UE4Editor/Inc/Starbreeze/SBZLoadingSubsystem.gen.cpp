// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoadingSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoadingSubsystem() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadingSubsystem_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadingSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZLoadingSubsystem::StaticRegisterNativesUSBZLoadingSubsystem()
	{
	}
	UClass* Z_Construct_UClass_USBZLoadingSubsystem_NoRegister()
	{
		return USBZLoadingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USBZLoadingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLoadingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLoadingSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLoadingSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLoadingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLoadingSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLoadingSubsystem_Statics::ClassParams = {
		&USBZLoadingSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZLoadingSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadingSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLoadingSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLoadingSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLoadingSubsystem, 1920153908);
	template<> STARBREEZE_API UClass* StaticClass<USBZLoadingSubsystem>()
	{
		return USBZLoadingSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLoadingSubsystem(Z_Construct_UClass_USBZLoadingSubsystem, &USBZLoadingSubsystem::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLoadingSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLoadingSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
