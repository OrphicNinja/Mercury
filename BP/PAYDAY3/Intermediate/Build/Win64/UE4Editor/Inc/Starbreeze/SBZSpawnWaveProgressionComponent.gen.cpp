// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnWaveProgressionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnWaveProgressionComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnWaveProgressionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnWaveProgressionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZProgressionWaveMapping();
// End Cross Module References
	void USBZSpawnWaveProgressionComponent::StaticRegisterNativesUSBZSpawnWaveProgressionComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZSpawnWaveProgressionComponent_NoRegister()
	{
		return USBZSpawnWaveProgressionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressionWaveMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionWaveMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProgressionWaveMappings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZSpawnWaveProgressionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveProgressionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::NewProp_ProgressionWaveMappings_Inner = { "ProgressionWaveMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZProgressionWaveMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::NewProp_ProgressionWaveMappings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveProgressionComponent" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveProgressionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::NewProp_ProgressionWaveMappings = { "ProgressionWaveMappings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSpawnWaveProgressionComponent, ProgressionWaveMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::NewProp_ProgressionWaveMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::NewProp_ProgressionWaveMappings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::NewProp_ProgressionWaveMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::NewProp_ProgressionWaveMappings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSpawnWaveProgressionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::ClassParams = {
		&USBZSpawnWaveProgressionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSpawnWaveProgressionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSpawnWaveProgressionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSpawnWaveProgressionComponent, 271641086);
	template<> STARBREEZE_API UClass* StaticClass<USBZSpawnWaveProgressionComponent>()
	{
		return USBZSpawnWaveProgressionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSpawnWaveProgressionComponent(Z_Construct_UClass_USBZSpawnWaveProgressionComponent, &USBZSpawnWaveProgressionComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSpawnWaveProgressionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSpawnWaveProgressionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
