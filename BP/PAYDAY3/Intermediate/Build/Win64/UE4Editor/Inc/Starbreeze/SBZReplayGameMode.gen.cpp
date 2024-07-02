// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplayGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplayGameMode() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplayGameMode_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplayGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZReplayGameMode::StaticRegisterNativesASBZReplayGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASBZReplayGameMode_NoRegister()
	{
		return ASBZReplayGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASBZReplayGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZReplayGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplayGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZReplayGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplayGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZReplayGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZReplayGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZReplayGameMode_Statics::ClassParams = {
		&ASBZReplayGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZReplayGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplayGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZReplayGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZReplayGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZReplayGameMode, 2625441812);
	template<> STARBREEZE_API UClass* StaticClass<ASBZReplayGameMode>()
	{
		return ASBZReplayGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZReplayGameMode(Z_Construct_UClass_ASBZReplayGameMode, &ASBZReplayGameMode::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZReplayGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZReplayGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
