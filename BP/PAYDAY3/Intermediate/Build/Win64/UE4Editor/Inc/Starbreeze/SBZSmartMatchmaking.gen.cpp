// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSmartMatchmaking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSmartMatchmaking() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSmartMatchmaking_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSmartMatchmaking();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmaking();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSmartMatchmaking::StaticRegisterNativesUSBZSmartMatchmaking()
	{
	}
	UClass* Z_Construct_UClass_USBZSmartMatchmaking_NoRegister()
	{
		return USBZSmartMatchmaking::StaticClass();
	}
	struct Z_Construct_UClass_USBZSmartMatchmaking_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSmartMatchmaking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMatchmaking,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmartMatchmaking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSmartMatchmaking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSmartMatchmaking.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSmartMatchmaking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSmartMatchmaking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSmartMatchmaking_Statics::ClassParams = {
		&USBZSmartMatchmaking::StaticClass,
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
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSmartMatchmaking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmartMatchmaking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSmartMatchmaking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSmartMatchmaking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSmartMatchmaking, 4018511265);
	template<> STARBREEZE_API UClass* StaticClass<USBZSmartMatchmaking>()
	{
		return USBZSmartMatchmaking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSmartMatchmaking(Z_Construct_UClass_USBZSmartMatchmaking, &USBZSmartMatchmaking::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSmartMatchmaking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSmartMatchmaking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
