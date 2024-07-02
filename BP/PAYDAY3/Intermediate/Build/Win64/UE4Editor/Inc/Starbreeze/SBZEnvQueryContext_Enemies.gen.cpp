// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryContext_Enemies.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryContext_Enemies() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryContext_Enemies_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryContext_Enemies();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEnvQueryContext_Enemies::StaticRegisterNativesUSBZEnvQueryContext_Enemies()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryContext_Enemies_NoRegister()
	{
		return USBZEnvQueryContext_Enemies::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryContext_Enemies_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryContext_Enemies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryContext_Enemies_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryContext_Enemies.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryContext_Enemies.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryContext_Enemies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryContext_Enemies>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryContext_Enemies_Statics::ClassParams = {
		&USBZEnvQueryContext_Enemies::StaticClass,
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
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryContext_Enemies_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryContext_Enemies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryContext_Enemies()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryContext_Enemies_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryContext_Enemies, 790949113);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryContext_Enemies>()
	{
		return USBZEnvQueryContext_Enemies::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryContext_Enemies(Z_Construct_UClass_USBZEnvQueryContext_Enemies, &USBZEnvQueryContext_Enemies::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryContext_Enemies"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryContext_Enemies);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
