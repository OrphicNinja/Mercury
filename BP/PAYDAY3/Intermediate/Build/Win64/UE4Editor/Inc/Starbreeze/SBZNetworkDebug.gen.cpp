// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNetworkDebug.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNetworkDebug() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZNetworkDebug_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZNetworkDebug();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZNetworkDebug::StaticRegisterNativesASBZNetworkDebug()
	{
	}
	UClass* Z_Construct_UClass_ASBZNetworkDebug_NoRegister()
	{
		return ASBZNetworkDebug::StaticClass();
	}
	struct Z_Construct_UClass_ASBZNetworkDebug_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZNetworkDebug_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZNetworkDebug_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "SBZNetworkDebug.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNetworkDebug.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZNetworkDebug_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZNetworkDebug>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZNetworkDebug_Statics::ClassParams = {
		&ASBZNetworkDebug::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZNetworkDebug_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZNetworkDebug_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZNetworkDebug()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZNetworkDebug_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZNetworkDebug, 3642214795);
	template<> STARBREEZE_API UClass* StaticClass<ASBZNetworkDebug>()
	{
		return ASBZNetworkDebug::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZNetworkDebug(Z_Construct_UClass_ASBZNetworkDebug, &ASBZNetworkDebug::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZNetworkDebug"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZNetworkDebug);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
