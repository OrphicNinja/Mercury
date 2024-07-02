// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTargetFinder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTargetFinder() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinderPredicate_NoRegister();
// End Cross Module References
	void USBZTargetFinder::StaticRegisterNativesUSBZTargetFinder()
	{
	}
	UClass* Z_Construct_UClass_USBZTargetFinder_NoRegister()
	{
		return USBZTargetFinder::StaticClass();
	}
	struct Z_Construct_UClass_USBZTargetFinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Predicates_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Predicates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Predicates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Predicates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTargetFinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTargetFinder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTargetFinder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTargetFinder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTargetFinder_Statics::NewProp_Predicates_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTargetFinder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTargetFinder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTargetFinder_Statics::NewProp_Predicates_Inner = { "Predicates", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZTargetFinderPredicate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTargetFinder_Statics::NewProp_Predicates_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinder_Statics::NewProp_Predicates_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTargetFinder_Statics::NewProp_Predicates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTargetFinder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTargetFinder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZTargetFinder_Statics::NewProp_Predicates = { "Predicates", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTargetFinder, Predicates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTargetFinder_Statics::NewProp_Predicates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinder_Statics::NewProp_Predicates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTargetFinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTargetFinder_Statics::NewProp_Predicates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTargetFinder_Statics::NewProp_Predicates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTargetFinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTargetFinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTargetFinder_Statics::ClassParams = {
		&USBZTargetFinder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZTargetFinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinder_Statics::PropPointers),
		0,
		0x008010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTargetFinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTargetFinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTargetFinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTargetFinder, 4290094677);
	template<> STARBREEZE_API UClass* StaticClass<USBZTargetFinder>()
	{
		return USBZTargetFinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTargetFinder(Z_Construct_UClass_USBZTargetFinder, &USBZTargetFinder::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTargetFinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTargetFinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
