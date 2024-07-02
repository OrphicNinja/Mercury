// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIRepositionPredicate_Cover.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIRepositionPredicate_Cover() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIRepositionPredicate_Cover_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIRepositionPredicate_Cover();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIRepositionPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIRepositionPredicate_Cover::StaticRegisterNativesUSBZAIRepositionPredicate_Cover()
	{
	}
	UClass* Z_Construct_UClass_USBZAIRepositionPredicate_Cover_NoRegister()
	{
		return USBZAIRepositionPredicate_Cover::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIRepositionPredicate_Cover_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIRepositionPredicate_Cover_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIRepositionPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIRepositionPredicate_Cover_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIRepositionPredicate_Cover.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIRepositionPredicate_Cover.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIRepositionPredicate_Cover_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIRepositionPredicate_Cover>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIRepositionPredicate_Cover_Statics::ClassParams = {
		&USBZAIRepositionPredicate_Cover::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIRepositionPredicate_Cover_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIRepositionPredicate_Cover_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIRepositionPredicate_Cover()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIRepositionPredicate_Cover_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIRepositionPredicate_Cover, 5924946);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIRepositionPredicate_Cover>()
	{
		return USBZAIRepositionPredicate_Cover::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIRepositionPredicate_Cover(Z_Construct_UClass_USBZAIRepositionPredicate_Cover, &USBZAIRepositionPredicate_Cover::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIRepositionPredicate_Cover"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIRepositionPredicate_Cover);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
