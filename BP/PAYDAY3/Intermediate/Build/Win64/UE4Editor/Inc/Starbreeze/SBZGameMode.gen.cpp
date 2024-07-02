// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameMode() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGameMode_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGameMode();
	SBZUTILITYPLUGIN_API UClass* Z_Construct_UClass_ASBZGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZGameMode::StaticRegisterNativesASBZGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASBZGameMode_NoRegister()
	{
		return ASBZGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASBZGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZGameMode_Statics::ClassParams = {
		&ASBZGameMode::StaticClass,
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
		0x008002ADu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZGameMode, 1649990455);
	template<> STARBREEZE_API UClass* StaticClass<ASBZGameMode>()
	{
		return ASBZGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZGameMode(Z_Construct_UClass_ASBZGameMode, &ASBZGameMode::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
