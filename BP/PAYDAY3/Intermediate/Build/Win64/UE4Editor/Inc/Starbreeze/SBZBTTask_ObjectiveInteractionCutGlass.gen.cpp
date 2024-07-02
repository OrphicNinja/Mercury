// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_ObjectiveInteractionCutGlass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_ObjectiveInteractionCutGlass() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionCutGlass_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionCutGlass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_ObjectiveInteractionCutGlass::StaticRegisterNativesUSBZBTTask_ObjectiveInteractionCutGlass()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionCutGlass_NoRegister()
	{
		return USBZBTTask_ObjectiveInteractionCutGlass::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_ObjectiveInteractionCutGlass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_ObjectiveInteractionCutGlass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_ObjectiveInteractionCutGlass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_ObjectiveInteractionCutGlass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_ObjectiveInteractionCutGlass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_ObjectiveInteractionCutGlass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_ObjectiveInteractionCutGlass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_ObjectiveInteractionCutGlass_Statics::ClassParams = {
		&USBZBTTask_ObjectiveInteractionCutGlass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_ObjectiveInteractionCutGlass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_ObjectiveInteractionCutGlass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionCutGlass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_ObjectiveInteractionCutGlass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_ObjectiveInteractionCutGlass, 547495367);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_ObjectiveInteractionCutGlass>()
	{
		return USBZBTTask_ObjectiveInteractionCutGlass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_ObjectiveInteractionCutGlass(Z_Construct_UClass_USBZBTTask_ObjectiveInteractionCutGlass, &USBZBTTask_ObjectiveInteractionCutGlass::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_ObjectiveInteractionCutGlass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_ObjectiveInteractionCutGlass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
