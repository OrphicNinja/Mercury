// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_ObjectiveInteractionThrowBag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_ObjectiveInteractionThrowBag() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionThrowBag_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionThrowBag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_ObjectiveInteractionThrowBag::StaticRegisterNativesUSBZBTTask_ObjectiveInteractionThrowBag()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionThrowBag_NoRegister()
	{
		return USBZBTTask_ObjectiveInteractionThrowBag::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_ObjectiveInteractionThrowBag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_ObjectiveInteractionThrowBag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_ObjectiveInteractionThrowBag_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_ObjectiveInteractionThrowBag.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_ObjectiveInteractionThrowBag.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_ObjectiveInteractionThrowBag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_ObjectiveInteractionThrowBag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_ObjectiveInteractionThrowBag_Statics::ClassParams = {
		&USBZBTTask_ObjectiveInteractionThrowBag::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_ObjectiveInteractionThrowBag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_ObjectiveInteractionThrowBag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionThrowBag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_ObjectiveInteractionThrowBag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_ObjectiveInteractionThrowBag, 3758987193);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_ObjectiveInteractionThrowBag>()
	{
		return USBZBTTask_ObjectiveInteractionThrowBag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_ObjectiveInteractionThrowBag(Z_Construct_UClass_USBZBTTask_ObjectiveInteractionThrowBag, &USBZBTTask_ObjectiveInteractionThrowBag::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_ObjectiveInteractionThrowBag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_ObjectiveInteractionThrowBag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
