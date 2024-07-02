// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLocalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLocalPlayer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZLocalPlayer::StaticRegisterNativesUSBZLocalPlayer()
	{
	}
	UClass* Z_Construct_UClass_USBZLocalPlayer_NoRegister()
	{
		return USBZLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_USBZLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLocalPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLocalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLocalPlayer_Statics::ClassParams = {
		&USBZLocalPlayer::StaticClass,
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
		0x000000AEu,
		METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLocalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLocalPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLocalPlayer, 3160243703);
	template<> STARBREEZE_API UClass* StaticClass<USBZLocalPlayer>()
	{
		return USBZLocalPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLocalPlayer(Z_Construct_UClass_USBZLocalPlayer, &USBZLocalPlayer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLocalPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLocalPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
