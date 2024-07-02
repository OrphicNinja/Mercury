// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTargetFinderPredicate_Dot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTargetFinderPredicate_Dot() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinderPredicate_Dot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinderPredicate_Dot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinderPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
// End Cross Module References
	void USBZTargetFinderPredicate_Dot::StaticRegisterNativesUSBZTargetFinderPredicate_Dot()
	{
	}
	UClass* Z_Construct_UClass_USBZTargetFinderPredicate_Dot_NoRegister()
	{
		return USBZTargetFinderPredicate_Dot::StaticClass();
	}
	struct Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZTargetFinderPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTargetFinderPredicate_Dot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTargetFinderPredicate_Dot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::NewProp_Range_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTargetFinderPredicate_Dot" },
		{ "ModuleRelativePath", "Public/SBZTargetFinderPredicate_Dot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTargetFinderPredicate_Dot, Range), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::NewProp_Range_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::NewProp_Range,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTargetFinderPredicate_Dot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::ClassParams = {
		&USBZTargetFinderPredicate_Dot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTargetFinderPredicate_Dot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTargetFinderPredicate_Dot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTargetFinderPredicate_Dot, 3506102949);
	template<> STARBREEZE_API UClass* StaticClass<USBZTargetFinderPredicate_Dot>()
	{
		return USBZTargetFinderPredicate_Dot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTargetFinderPredicate_Dot(Z_Construct_UClass_USBZTargetFinderPredicate_Dot, &USBZTargetFinderPredicate_Dot::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTargetFinderPredicate_Dot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTargetFinderPredicate_Dot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
