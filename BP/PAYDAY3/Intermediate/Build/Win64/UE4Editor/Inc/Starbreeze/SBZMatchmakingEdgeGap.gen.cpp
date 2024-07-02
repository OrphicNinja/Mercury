// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMatchmakingEdgeGap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMatchmakingEdgeGap() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmakingEdgeGap_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmakingEdgeGap();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmaking();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMatchmakingEdgeGap::StaticRegisterNativesUSBZMatchmakingEdgeGap()
	{
	}
	UClass* Z_Construct_UClass_USBZMatchmakingEdgeGap_NoRegister()
	{
		return USBZMatchmakingEdgeGap::StaticClass();
	}
	struct Z_Construct_UClass_USBZMatchmakingEdgeGap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMatchmakingEdgeGap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMatchmaking,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMatchmakingEdgeGap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMatchmakingEdgeGap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingEdgeGap.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMatchmakingEdgeGap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMatchmakingEdgeGap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMatchmakingEdgeGap_Statics::ClassParams = {
		&USBZMatchmakingEdgeGap::StaticClass,
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
		0x000000A2u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMatchmakingEdgeGap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMatchmakingEdgeGap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMatchmakingEdgeGap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMatchmakingEdgeGap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMatchmakingEdgeGap, 3932833184);
	template<> STARBREEZE_API UClass* StaticClass<USBZMatchmakingEdgeGap>()
	{
		return USBZMatchmakingEdgeGap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMatchmakingEdgeGap(Z_Construct_UClass_USBZMatchmakingEdgeGap, &USBZMatchmakingEdgeGap::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMatchmakingEdgeGap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMatchmakingEdgeGap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
