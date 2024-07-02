// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAssetDataSwitchContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAssetDataSwitchContainer() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataWithMedia();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainerData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
// End Cross Module References
	void UAkAssetDataSwitchContainer::StaticRegisterNativesUAkAssetDataSwitchContainer()
	{
	}
	UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer_NoRegister()
	{
		return UAkAssetDataSwitchContainer::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwitchContainers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SwitchContainers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGroupValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultGroupValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetDataWithMedia,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAssetDataSwitchContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAssetDataSwitchContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_Inner = { "SwitchContainers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAssetDataSwitchContainerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAssetDataSwitchContainer" },
		{ "ModuleRelativePath", "Public/AkAssetDataSwitchContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers = { "SwitchContainers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetDataSwitchContainer, SwitchContainers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAssetDataSwitchContainer" },
		{ "ModuleRelativePath", "Public/AkAssetDataSwitchContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue = { "DefaultGroupValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetDataSwitchContainer, DefaultGroupValue), Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetDataSwitchContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::ClassParams = {
		&UAkAssetDataSwitchContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAssetDataSwitchContainer, 9552970);
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetDataSwitchContainer>()
	{
		return UAkAssetDataSwitchContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAssetDataSwitchContainer(Z_Construct_UClass_UAkAssetDataSwitchContainer, &UAkAssetDataSwitchContainer::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAssetDataSwitchContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetDataSwitchContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
