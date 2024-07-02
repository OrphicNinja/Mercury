// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractableWindow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractableWindow() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractableWindow_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractableWindow();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractableGate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZInteractableWindow::StaticRegisterNativesASBZInteractableWindow()
	{
	}
	UClass* Z_Construct_UClass_ASBZInteractableWindow_NoRegister()
	{
		return ASBZInteractableWindow::StaticClass();
	}
	struct Z_Construct_UClass_ASBZInteractableWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZInteractableWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZInteractableGate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractableWindow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInteractableWindow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableWindow.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZInteractableWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZInteractableWindow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZInteractableWindow_Statics::ClassParams = {
		&ASBZInteractableWindow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZInteractableWindow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractableWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZInteractableWindow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZInteractableWindow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZInteractableWindow, 3799629484);
	template<> STARBREEZE_API UClass* StaticClass<ASBZInteractableWindow>()
	{
		return ASBZInteractableWindow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZInteractableWindow(Z_Construct_UClass_ASBZInteractableWindow, &ASBZInteractableWindow::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZInteractableWindow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZInteractableWindow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
