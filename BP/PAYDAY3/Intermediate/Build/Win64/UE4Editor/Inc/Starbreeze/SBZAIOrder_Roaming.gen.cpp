// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_Roaming.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_Roaming() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Roaming_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Roaming();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIOrder_Roaming::StaticRegisterNativesUSBZAIOrder_Roaming()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_Roaming_NoRegister()
	{
		return USBZAIOrder_Roaming::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_Roaming_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_Roaming_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Roaming_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_Roaming.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Roaming.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_Roaming_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_Roaming>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_Roaming_Statics::ClassParams = {
		&USBZAIOrder_Roaming::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Roaming_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Roaming_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_Roaming()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_Roaming_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_Roaming, 1270336816);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_Roaming>()
	{
		return USBZAIOrder_Roaming::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_Roaming(Z_Construct_UClass_USBZAIOrder_Roaming, &USBZAIOrder_Roaming::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_Roaming"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_Roaming);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
