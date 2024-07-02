// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTargetFinderPredicate_Linetrace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTargetFinderPredicate_Linetrace() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinderPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZTargetFinderPredicate_Linetrace::StaticRegisterNativesUSBZTargetFinderPredicate_Linetrace()
	{
	}
	UClass* Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_NoRegister()
	{
		return USBZTargetFinderPredicate_Linetrace::StaticClass();
	}
	struct Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsHit_MetaData[];
#endif
		static void NewProp_bWantsHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZTargetFinderPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTargetFinderPredicate_Linetrace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTargetFinderPredicate_Linetrace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::NewProp_bWantsHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTargetFinderPredicate_Linetrace" },
		{ "ModuleRelativePath", "Public/SBZTargetFinderPredicate_Linetrace.h" },
	};
#endif
	void Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::NewProp_bWantsHit_SetBit(void* Obj)
	{
		((USBZTargetFinderPredicate_Linetrace*)Obj)->bWantsHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::NewProp_bWantsHit = { "bWantsHit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZTargetFinderPredicate_Linetrace), &Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::NewProp_bWantsHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::NewProp_bWantsHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::NewProp_bWantsHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::NewProp_bWantsHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTargetFinderPredicate_Linetrace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::ClassParams = {
		&USBZTargetFinderPredicate_Linetrace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTargetFinderPredicate_Linetrace, 2007203932);
	template<> STARBREEZE_API UClass* StaticClass<USBZTargetFinderPredicate_Linetrace>()
	{
		return USBZTargetFinderPredicate_Linetrace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTargetFinderPredicate_Linetrace(Z_Construct_UClass_USBZTargetFinderPredicate_Linetrace, &USBZTargetFinderPredicate_Linetrace::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTargetFinderPredicate_Linetrace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTargetFinderPredicate_Linetrace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
