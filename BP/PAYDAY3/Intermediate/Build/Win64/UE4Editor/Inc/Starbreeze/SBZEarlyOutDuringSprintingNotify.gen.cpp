// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEarlyOutDuringSprintingNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEarlyOutDuringSprintingNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEarlyOutDuringSprintingNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEarlyOutDuringSprintingNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEarlyOutDuringSprintingNotify::StaticRegisterNativesUSBZEarlyOutDuringSprintingNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZEarlyOutDuringSprintingNotify_NoRegister()
	{
		return USBZEarlyOutDuringSprintingNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZEarlyOutDuringSprintingNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEarlyOutDuringSprintingNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEarlyOutDuringSprintingNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZEarlyOutDuringSprintingNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEarlyOutDuringSprintingNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEarlyOutDuringSprintingNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEarlyOutDuringSprintingNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEarlyOutDuringSprintingNotify_Statics::ClassParams = {
		&USBZEarlyOutDuringSprintingNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZEarlyOutDuringSprintingNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEarlyOutDuringSprintingNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEarlyOutDuringSprintingNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEarlyOutDuringSprintingNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEarlyOutDuringSprintingNotify, 3054651503);
	template<> STARBREEZE_API UClass* StaticClass<USBZEarlyOutDuringSprintingNotify>()
	{
		return USBZEarlyOutDuringSprintingNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEarlyOutDuringSprintingNotify(Z_Construct_UClass_USBZEarlyOutDuringSprintingNotify, &USBZEarlyOutDuringSprintingNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEarlyOutDuringSprintingNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEarlyOutDuringSprintingNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
