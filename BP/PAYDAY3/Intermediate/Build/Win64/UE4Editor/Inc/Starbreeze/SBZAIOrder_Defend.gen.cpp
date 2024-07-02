// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_Defend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_Defend() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Defend_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Defend();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_TacticalMoveTo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIOrder_Defend::StaticRegisterNativesUSBZAIOrder_Defend()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_Defend_NoRegister()
	{
		return USBZAIOrder_Defend::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_Defend_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_Defend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder_TacticalMoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Defend_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_Defend.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Defend.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_Defend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_Defend>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_Defend_Statics::ClassParams = {
		&USBZAIOrder_Defend::StaticClass,
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
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Defend_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Defend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_Defend()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_Defend_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_Defend, 3424234013);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_Defend>()
	{
		return USBZAIOrder_Defend::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_Defend(Z_Construct_UClass_USBZAIOrder_Defend, &USBZAIOrder_Defend::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_Defend"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_Defend);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
