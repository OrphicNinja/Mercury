// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuQuickMatch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuQuickMatch() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuQuickMatch_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuQuickMatch();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMainMenuQuickMatch::StaticRegisterNativesUSBZMainMenuQuickMatch()
	{
	}
	UClass* Z_Construct_UClass_USBZMainMenuQuickMatch_NoRegister()
	{
		return USBZMainMenuQuickMatch::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuQuickMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuQuickMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuQuickMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuQuickMatch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuQuickMatch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuQuickMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuQuickMatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuQuickMatch_Statics::ClassParams = {
		&USBZMainMenuQuickMatch::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuQuickMatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuQuickMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuQuickMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuQuickMatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuQuickMatch, 4005116985);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuQuickMatch>()
	{
		return USBZMainMenuQuickMatch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuQuickMatch(Z_Construct_UClass_USBZMainMenuQuickMatch, &USBZMainMenuQuickMatch::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuQuickMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuQuickMatch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
