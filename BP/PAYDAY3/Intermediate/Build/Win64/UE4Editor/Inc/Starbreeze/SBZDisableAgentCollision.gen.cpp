// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDisableAgentCollision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDisableAgentCollision() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDisableAgentCollision_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDisableAgentCollision();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZDisableAgentCollision::StaticRegisterNativesUSBZDisableAgentCollision()
	{
	}
	UClass* Z_Construct_UClass_USBZDisableAgentCollision_NoRegister()
	{
		return USBZDisableAgentCollision::StaticClass();
	}
	struct Z_Construct_UClass_USBZDisableAgentCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDisableAgentCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDisableAgentCollision_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZDisableAgentCollision.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDisableAgentCollision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDisableAgentCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDisableAgentCollision>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDisableAgentCollision_Statics::ClassParams = {
		&USBZDisableAgentCollision::StaticClass,
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
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDisableAgentCollision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDisableAgentCollision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDisableAgentCollision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDisableAgentCollision_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDisableAgentCollision, 346787709);
	template<> STARBREEZE_API UClass* StaticClass<USBZDisableAgentCollision>()
	{
		return USBZDisableAgentCollision::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDisableAgentCollision(Z_Construct_UClass_USBZDisableAgentCollision, &USBZDisableAgentCollision::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDisableAgentCollision"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDisableAgentCollision);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
