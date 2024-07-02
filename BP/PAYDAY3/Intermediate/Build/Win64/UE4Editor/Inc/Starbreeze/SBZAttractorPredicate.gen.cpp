// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAttractorPredicate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAttractorPredicate() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAttractorPredicate::StaticRegisterNativesUSBZAttractorPredicate()
	{
	}
	UClass* Z_Construct_UClass_USBZAttractorPredicate_NoRegister()
	{
		return USBZAttractorPredicate::StaticClass();
	}
	struct Z_Construct_UClass_USBZAttractorPredicate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInversed_MetaData[];
#endif
		static void NewProp_bIsInversed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInversed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAttractorPredicate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorPredicate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAttractorPredicate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAttractorPredicate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorPredicate_Statics::NewProp_bIsInversed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorPredicate" },
		{ "ModuleRelativePath", "Public/SBZAttractorPredicate.h" },
	};
#endif
	void Z_Construct_UClass_USBZAttractorPredicate_Statics::NewProp_bIsInversed_SetBit(void* Obj)
	{
		((USBZAttractorPredicate*)Obj)->bIsInversed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAttractorPredicate_Statics::NewProp_bIsInversed = { "bIsInversed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAttractorPredicate), &Z_Construct_UClass_USBZAttractorPredicate_Statics::NewProp_bIsInversed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAttractorPredicate_Statics::NewProp_bIsInversed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorPredicate_Statics::NewProp_bIsInversed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAttractorPredicate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorPredicate_Statics::NewProp_bIsInversed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAttractorPredicate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAttractorPredicate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAttractorPredicate_Statics::ClassParams = {
		&USBZAttractorPredicate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAttractorPredicate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorPredicate_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAttractorPredicate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorPredicate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAttractorPredicate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAttractorPredicate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAttractorPredicate, 1204440468);
	template<> STARBREEZE_API UClass* StaticClass<USBZAttractorPredicate>()
	{
		return USBZAttractorPredicate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAttractorPredicate(Z_Construct_UClass_USBZAttractorPredicate, &USBZAttractorPredicate::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAttractorPredicate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAttractorPredicate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
