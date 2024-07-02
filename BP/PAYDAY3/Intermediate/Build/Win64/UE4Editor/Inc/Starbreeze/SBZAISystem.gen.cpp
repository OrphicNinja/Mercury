// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAISystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAISystem() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISystem_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISystem();
	AIMODULE_API UClass* Z_Construct_UClass_UAISystem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAirPathFinder_NoRegister();
// End Cross Module References
	void USBZAISystem::StaticRegisterNativesUSBZAISystem()
	{
	}
	UClass* Z_Construct_UClass_USBZAISystem_NoRegister()
	{
		return USBZAISystem::StaticClass();
	}
	struct Z_Construct_UClass_USBZAISystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPathFinder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AirPathFinder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAISystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAISystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAISystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISystem_Statics::NewProp_AirPathFinder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISystem" },
		{ "ModuleRelativePath", "Public/SBZAISystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAISystem_Statics::NewProp_AirPathFinder = { "AirPathFinder", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISystem, AirPathFinder), Z_Construct_UClass_USBZAirPathFinder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAISystem_Statics::NewProp_AirPathFinder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISystem_Statics::NewProp_AirPathFinder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAISystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISystem_Statics::NewProp_AirPathFinder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAISystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAISystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAISystem_Statics::ClassParams = {
		&USBZAISystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAISystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISystem_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAISystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAISystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAISystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAISystem, 4245779796);
	template<> STARBREEZE_API UClass* StaticClass<USBZAISystem>()
	{
		return USBZAISystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAISystem(Z_Construct_UClass_USBZAISystem, &USBZAISystem::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAISystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAISystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
