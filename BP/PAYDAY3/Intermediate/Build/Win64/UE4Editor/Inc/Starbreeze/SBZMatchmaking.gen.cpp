// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMatchmaking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMatchmaking() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmaking_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmaking();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMatchmaking::StaticRegisterNativesUSBZMatchmaking()
	{
	}
	UClass* Z_Construct_UClass_USBZMatchmaking_NoRegister()
	{
		return USBZMatchmaking::StaticClass();
	}
	struct Z_Construct_UClass_USBZMatchmaking_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMatchmaking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMatchmaking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMatchmaking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMatchmaking.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMatchmaking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMatchmaking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMatchmaking_Statics::ClassParams = {
		&USBZMatchmaking::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMatchmaking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMatchmaking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMatchmaking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMatchmaking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMatchmaking, 855868737);
	template<> STARBREEZE_API UClass* StaticClass<USBZMatchmaking>()
	{
		return USBZMatchmaking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMatchmaking(Z_Construct_UClass_USBZMatchmaking, &USBZMatchmaking::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMatchmaking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMatchmaking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
