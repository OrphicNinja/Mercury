// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAISenseConfig_Touch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAISenseConfig_Touch() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISenseConfig_Touch_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISenseConfig_Touch();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAISenseConfig_Touch::StaticRegisterNativesUSBZAISenseConfig_Touch()
	{
	}
	UClass* Z_Construct_UClass_USBZAISenseConfig_Touch_NoRegister()
	{
		return USBZAISenseConfig_Touch::StaticClass();
	}
	struct Z_Construct_UClass_USBZAISenseConfig_Touch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAISenseConfig_Touch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISenseConfig_Touch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAISenseConfig_Touch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAISenseConfig_Touch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAISenseConfig_Touch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAISenseConfig_Touch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAISenseConfig_Touch_Statics::ClassParams = {
		&USBZAISenseConfig_Touch::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAISenseConfig_Touch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISenseConfig_Touch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAISenseConfig_Touch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAISenseConfig_Touch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAISenseConfig_Touch, 75713238);
	template<> STARBREEZE_API UClass* StaticClass<USBZAISenseConfig_Touch>()
	{
		return USBZAISenseConfig_Touch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAISenseConfig_Touch(Z_Construct_UClass_USBZAISenseConfig_Touch, &USBZAISenseConfig_Touch::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAISenseConfig_Touch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAISenseConfig_Touch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
