// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_Surrender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_Surrender() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Surrender_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Surrender();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIAction_Surrender::StaticRegisterNativesUSBZAIAction_Surrender()
	{
	}
	UClass* Z_Construct_UClass_USBZAIAction_Surrender_NoRegister()
	{
		return USBZAIAction_Surrender::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_Surrender_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_Surrender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_Surrender_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_Surrender.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_Surrender.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_Surrender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_Surrender>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_Surrender_Statics::ClassParams = {
		&USBZAIAction_Surrender::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_Surrender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_Surrender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_Surrender()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_Surrender_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_Surrender, 2765415594);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_Surrender>()
	{
		return USBZAIAction_Surrender::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_Surrender(Z_Construct_UClass_USBZAIAction_Surrender, &USBZAIAction_Surrender::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_Surrender"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_Surrender);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
