// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameViewportClient.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameViewportClient() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameViewportClient_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZGameViewportClient::StaticRegisterNativesUSBZGameViewportClient()
	{
	}
	UClass* Z_Construct_UClass_USBZGameViewportClient_NoRegister()
	{
		return USBZGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameViewportClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameViewportClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameViewportClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameViewportClient_Statics::ClassParams = {
		&USBZGameViewportClient::StaticClass,
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
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameViewportClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameViewportClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameViewportClient, 715227008);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameViewportClient>()
	{
		return USBZGameViewportClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameViewportClient(Z_Construct_UClass_USBZGameViewportClient, &USBZGameViewportClient::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
