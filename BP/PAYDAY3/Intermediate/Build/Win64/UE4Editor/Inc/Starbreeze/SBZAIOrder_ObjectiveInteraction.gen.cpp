// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_ObjectiveInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_ObjectiveInteraction() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_ObjectiveInteraction_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_ObjectiveInteraction();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIOrder_ObjectiveInteraction::StaticRegisterNativesUSBZAIOrder_ObjectiveInteraction()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_ObjectiveInteraction_NoRegister()
	{
		return USBZAIOrder_ObjectiveInteraction::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_ObjectiveInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_ObjectiveInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_ObjectiveInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_ObjectiveInteraction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_ObjectiveInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_ObjectiveInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_ObjectiveInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_ObjectiveInteraction_Statics::ClassParams = {
		&USBZAIOrder_ObjectiveInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_ObjectiveInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_ObjectiveInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_ObjectiveInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_ObjectiveInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_ObjectiveInteraction, 1346759896);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_ObjectiveInteraction>()
	{
		return USBZAIOrder_ObjectiveInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_ObjectiveInteraction(Z_Construct_UClass_USBZAIOrder_ObjectiveInteraction, &USBZAIOrder_ObjectiveInteraction::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_ObjectiveInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_ObjectiveInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
