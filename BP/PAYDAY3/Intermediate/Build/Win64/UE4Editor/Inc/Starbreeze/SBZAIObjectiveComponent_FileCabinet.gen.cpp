// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIObjectiveComponent_FileCabinet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIObjectiveComponent_FileCabinet() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIObjectiveComponent_FileCabinet_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIObjectiveComponent_FileCabinet();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIObjectiveComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIObjectiveComponent_FileCabinet::StaticRegisterNativesUSBZAIObjectiveComponent_FileCabinet()
	{
	}
	UClass* Z_Construct_UClass_USBZAIObjectiveComponent_FileCabinet_NoRegister()
	{
		return USBZAIObjectiveComponent_FileCabinet::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIObjectiveComponent_FileCabinet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIObjectiveComponent_FileCabinet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIObjectiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_FileCabinet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAIObjectiveComponent_FileCabinet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent_FileCabinet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIObjectiveComponent_FileCabinet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIObjectiveComponent_FileCabinet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIObjectiveComponent_FileCabinet_Statics::ClassParams = {
		&USBZAIObjectiveComponent_FileCabinet::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_FileCabinet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_FileCabinet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIObjectiveComponent_FileCabinet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIObjectiveComponent_FileCabinet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIObjectiveComponent_FileCabinet, 2644287672);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIObjectiveComponent_FileCabinet>()
	{
		return USBZAIObjectiveComponent_FileCabinet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIObjectiveComponent_FileCabinet(Z_Construct_UClass_USBZAIObjectiveComponent_FileCabinet, &USBZAIObjectiveComponent_FileCabinet::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIObjectiveComponent_FileCabinet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIObjectiveComponent_FileCabinet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
