// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUnblockMeleeNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUnblockMeleeNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUnblockMeleeNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUnblockMeleeNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZUnblockMeleeNotify::StaticRegisterNativesUSBZUnblockMeleeNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZUnblockMeleeNotify_NoRegister()
	{
		return USBZUnblockMeleeNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZUnblockMeleeNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUnblockMeleeNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUnblockMeleeNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZUnblockMeleeNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUnblockMeleeNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUnblockMeleeNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUnblockMeleeNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUnblockMeleeNotify_Statics::ClassParams = {
		&USBZUnblockMeleeNotify::StaticClass,
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
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZUnblockMeleeNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUnblockMeleeNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUnblockMeleeNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUnblockMeleeNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUnblockMeleeNotify, 703421239);
	template<> STARBREEZE_API UClass* StaticClass<USBZUnblockMeleeNotify>()
	{
		return USBZUnblockMeleeNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUnblockMeleeNotify(Z_Construct_UClass_USBZUnblockMeleeNotify, &USBZUnblockMeleeNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUnblockMeleeNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUnblockMeleeNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
