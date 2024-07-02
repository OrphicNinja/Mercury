// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWindReceiverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWindReceiverComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindReceiverComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindReceiverComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindApplier_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnWindChangedDelegate__DelegateSignature();
// End Cross Module References
	void USBZWindReceiverComponent::StaticRegisterNativesUSBZWindReceiverComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZWindReceiverComponent_NoRegister()
	{
		return USBZWindReceiverComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZWindReceiverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Applier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Applier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWindChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWindChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWindReceiverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindReceiverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SBZWindReceiverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWindReceiverComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindReceiverComponent_Statics::NewProp_Applier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindReceiverComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWindReceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWindReceiverComponent_Statics::NewProp_Applier = { "Applier", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindReceiverComponent, Applier), Z_Construct_UClass_USBZWindApplier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWindReceiverComponent_Statics::NewProp_Applier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindReceiverComponent_Statics::NewProp_Applier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindReceiverComponent_Statics::NewProp_OnWindChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindReceiverComponent" },
		{ "ModuleRelativePath", "Public/SBZWindReceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZWindReceiverComponent_Statics::NewProp_OnWindChanged = { "OnWindChanged", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindReceiverComponent, OnWindChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnWindChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZWindReceiverComponent_Statics::NewProp_OnWindChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindReceiverComponent_Statics::NewProp_OnWindChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWindReceiverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindReceiverComponent_Statics::NewProp_Applier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindReceiverComponent_Statics::NewProp_OnWindChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWindReceiverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWindReceiverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWindReceiverComponent_Statics::ClassParams = {
		&USBZWindReceiverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWindReceiverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindReceiverComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWindReceiverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindReceiverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWindReceiverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWindReceiverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWindReceiverComponent, 534247093);
	template<> STARBREEZE_API UClass* StaticClass<USBZWindReceiverComponent>()
	{
		return USBZWindReceiverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWindReceiverComponent(Z_Construct_UClass_USBZWindReceiverComponent, &USBZWindReceiverComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWindReceiverComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWindReceiverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
