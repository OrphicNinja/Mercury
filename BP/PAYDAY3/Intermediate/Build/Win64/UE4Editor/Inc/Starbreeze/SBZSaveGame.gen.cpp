// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSaveGame() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSaveGame_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSaveGame::StaticRegisterNativesUSBZSaveGame()
	{
	}
	UClass* Z_Construct_UClass_USBZSaveGame_NoRegister()
	{
		return USBZSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_USBZSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatestVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LatestVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSaveGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSaveGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSaveGame_Statics::NewProp_CurrentVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSaveGame" },
		{ "ModuleRelativePath", "Public/SBZSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSaveGame_Statics::NewProp_CurrentVersion = { "CurrentVersion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSaveGame, CurrentVersion), METADATA_PARAMS(Z_Construct_UClass_USBZSaveGame_Statics::NewProp_CurrentVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveGame_Statics::NewProp_CurrentVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSaveGame_Statics::NewProp_LatestVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSaveGame" },
		{ "ModuleRelativePath", "Public/SBZSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSaveGame_Statics::NewProp_LatestVersion = { "LatestVersion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSaveGame, LatestVersion), METADATA_PARAMS(Z_Construct_UClass_USBZSaveGame_Statics::NewProp_LatestVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveGame_Statics::NewProp_LatestVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSaveGame_Statics::NewProp_CurrentVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSaveGame_Statics::NewProp_LatestVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSaveGame_Statics::ClassParams = {
		&USBZSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveGame_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSaveGame, 3143518442);
	template<> STARBREEZE_API UClass* StaticClass<USBZSaveGame>()
	{
		return USBZSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSaveGame(Z_Construct_UClass_USBZSaveGame, &USBZSaveGame::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
