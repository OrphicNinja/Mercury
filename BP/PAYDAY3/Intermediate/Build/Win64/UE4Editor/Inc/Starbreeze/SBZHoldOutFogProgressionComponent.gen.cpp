// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutFogProgressionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutFogProgressionComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutFogProgressionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutFogProgressionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZProgressionFogMapping();
// End Cross Module References
	void USBZHoldOutFogProgressionComponent::StaticRegisterNativesUSBZHoldOutFogProgressionComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZHoldOutFogProgressionComponent_NoRegister()
	{
		return USBZHoldOutFogProgressionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressionFogMapping_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionFogMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProgressionFogMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZHoldOutFogProgressionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutFogProgressionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::NewProp_ProgressionFogMapping_Inner = { "ProgressionFogMapping", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZProgressionFogMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::NewProp_ProgressionFogMapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutFogProgressionComponent" },
		{ "ModuleRelativePath", "Public/SBZHoldOutFogProgressionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::NewProp_ProgressionFogMapping = { "ProgressionFogMapping", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutFogProgressionComponent, ProgressionFogMapping), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::NewProp_ProgressionFogMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::NewProp_ProgressionFogMapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::NewProp_ProgressionFogMapping_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::NewProp_ProgressionFogMapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHoldOutFogProgressionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::ClassParams = {
		&USBZHoldOutFogProgressionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHoldOutFogProgressionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHoldOutFogProgressionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHoldOutFogProgressionComponent, 709256391);
	template<> STARBREEZE_API UClass* StaticClass<USBZHoldOutFogProgressionComponent>()
	{
		return USBZHoldOutFogProgressionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHoldOutFogProgressionComponent(Z_Construct_UClass_USBZHoldOutFogProgressionComponent, &USBZHoldOutFogProgressionComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHoldOutFogProgressionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHoldOutFogProgressionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
