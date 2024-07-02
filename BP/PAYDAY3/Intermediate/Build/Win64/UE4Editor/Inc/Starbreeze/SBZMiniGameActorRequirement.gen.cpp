// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMiniGameActorRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMiniGameActorRequirement() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMiniGameActorRequirement_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMiniGameActorRequirement();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractRequirement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMiniGameActorRequirement::StaticRegisterNativesUSBZMiniGameActorRequirement()
	{
	}
	UClass* Z_Construct_UClass_USBZMiniGameActorRequirement_NoRegister()
	{
		return USBZMiniGameActorRequirement::StaticClass();
	}
	struct Z_Construct_UClass_USBZMiniGameActorRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMiniGameActorRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseInteractRequirement,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameActorRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMiniGameActorRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMiniGameActorRequirement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMiniGameActorRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMiniGameActorRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMiniGameActorRequirement_Statics::ClassParams = {
		&USBZMiniGameActorRequirement::StaticClass,
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
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameActorRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameActorRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMiniGameActorRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMiniGameActorRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMiniGameActorRequirement, 1938836846);
	template<> STARBREEZE_API UClass* StaticClass<USBZMiniGameActorRequirement>()
	{
		return USBZMiniGameActorRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMiniGameActorRequirement(Z_Construct_UClass_USBZMiniGameActorRequirement, &USBZMiniGameActorRequirement::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMiniGameActorRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMiniGameActorRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
