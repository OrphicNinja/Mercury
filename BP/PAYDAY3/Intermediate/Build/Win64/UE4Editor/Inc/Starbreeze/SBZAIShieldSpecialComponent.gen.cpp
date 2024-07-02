// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIShieldSpecialComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIShieldSpecialComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIShieldSpecialComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIShieldSpecialComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpecialAIComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_NoRegister();
// End Cross Module References
	void USBZAIShieldSpecialComponent::StaticRegisterNativesUSBZAIShieldSpecialComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZAIShieldSpecialComponent_NoRegister()
	{
		return USBZAIShieldSpecialComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumberOfSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpaceBetweenSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpaceBetweenSlots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoverAttachPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoverAttachPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CoverAttachPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSpecialAIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAIShieldSpecialComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIShieldSpecialComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_NumberOfSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShieldSpecialComponent" },
		{ "ModuleRelativePath", "Public/SBZAIShieldSpecialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_NumberOfSlots = { "NumberOfSlots", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShieldSpecialComponent, NumberOfSlots), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_NumberOfSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_NumberOfSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_SpaceBetweenSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShieldSpecialComponent" },
		{ "ModuleRelativePath", "Public/SBZAIShieldSpecialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_SpaceBetweenSlots = { "SpaceBetweenSlots", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShieldSpecialComponent, SpaceBetweenSlots), METADATA_PARAMS(Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_SpaceBetweenSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_SpaceBetweenSlots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_CoverAttachPoints_Inner = { "CoverAttachPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_CoverAttachPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShieldSpecialComponent" },
		{ "ModuleRelativePath", "Public/SBZAIShieldSpecialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_CoverAttachPoints = { "CoverAttachPoints", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShieldSpecialComponent, CoverAttachPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_CoverAttachPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_CoverAttachPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_NumberOfSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_SpaceBetweenSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_CoverAttachPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::NewProp_CoverAttachPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIShieldSpecialComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::ClassParams = {
		&USBZAIShieldSpecialComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIShieldSpecialComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIShieldSpecialComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIShieldSpecialComponent, 3449576390);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIShieldSpecialComponent>()
	{
		return USBZAIShieldSpecialComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIShieldSpecialComponent(Z_Construct_UClass_USBZAIShieldSpecialComponent, &USBZAIShieldSpecialComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIShieldSpecialComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIShieldSpecialComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
