// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerControllerMainMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerControllerMainMenu() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerControllerMainMenu_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerControllerMainMenu();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerControllerBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZPlayerControllerMainMenu::StaticRegisterNativesASBZPlayerControllerMainMenu()
	{
	}
	UClass* Z_Construct_UClass_ASBZPlayerControllerMainMenu_NoRegister()
	{
		return ASBZPlayerControllerMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlayerControllerMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlayerControllerMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlayerControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerControllerMainMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZPlayerControllerMainMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerControllerMainMenu.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlayerControllerMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlayerControllerMainMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlayerControllerMainMenu_Statics::ClassParams = {
		&ASBZPlayerControllerMainMenu::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerControllerMainMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerControllerMainMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlayerControllerMainMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlayerControllerMainMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlayerControllerMainMenu, 3985409962);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlayerControllerMainMenu>()
	{
		return ASBZPlayerControllerMainMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlayerControllerMainMenu(Z_Construct_UClass_ASBZPlayerControllerMainMenu, &ASBZPlayerControllerMainMenu::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlayerControllerMainMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlayerControllerMainMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
