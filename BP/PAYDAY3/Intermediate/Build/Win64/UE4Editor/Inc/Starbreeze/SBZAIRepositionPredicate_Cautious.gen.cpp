// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIRepositionPredicate_Cautious.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIRepositionPredicate_Cautious() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIRepositionPredicate_Cautious_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIRepositionPredicate_Cautious();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIRepositionPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIRepositionPredicate_Cautious::StaticRegisterNativesUSBZAIRepositionPredicate_Cautious()
	{
	}
	UClass* Z_Construct_UClass_USBZAIRepositionPredicate_Cautious_NoRegister()
	{
		return USBZAIRepositionPredicate_Cautious::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIRepositionPredicate_Cautious_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIRepositionPredicate_Cautious_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIRepositionPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIRepositionPredicate_Cautious_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIRepositionPredicate_Cautious.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIRepositionPredicate_Cautious.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIRepositionPredicate_Cautious_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIRepositionPredicate_Cautious>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIRepositionPredicate_Cautious_Statics::ClassParams = {
		&USBZAIRepositionPredicate_Cautious::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIRepositionPredicate_Cautious_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIRepositionPredicate_Cautious_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIRepositionPredicate_Cautious()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIRepositionPredicate_Cautious_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIRepositionPredicate_Cautious, 111562554);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIRepositionPredicate_Cautious>()
	{
		return USBZAIRepositionPredicate_Cautious::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIRepositionPredicate_Cautious(Z_Construct_UClass_USBZAIRepositionPredicate_Cautious, &USBZAIRepositionPredicate_Cautious::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIRepositionPredicate_Cautious"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIRepositionPredicate_Cautious);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
