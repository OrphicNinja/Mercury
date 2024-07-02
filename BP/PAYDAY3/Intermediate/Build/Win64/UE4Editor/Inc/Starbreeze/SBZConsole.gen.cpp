// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZConsole.h"
#include "Engine/Classes/Engine/GameViewportClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZConsole() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZConsole_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZConsole();
	ENGINE_API UClass* Z_Construct_UClass_UConsole();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZConsole::StaticRegisterNativesUSBZConsole()
	{
	}
	UClass* Z_Construct_UClass_USBZConsole_NoRegister()
	{
		return USBZConsole::StaticClass();
	}
	struct Z_Construct_UClass_USBZConsole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZConsole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConsole,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZConsole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZConsole.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZConsole.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZConsole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZConsole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZConsole_Statics::ClassParams = {
		&USBZConsole::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_USBZConsole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZConsole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZConsole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZConsole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZConsole, 414056475);
	template<> STARBREEZE_API UClass* StaticClass<USBZConsole>()
	{
		return USBZConsole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZConsole(Z_Construct_UClass_USBZConsole, &USBZConsole::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZConsole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZConsole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
