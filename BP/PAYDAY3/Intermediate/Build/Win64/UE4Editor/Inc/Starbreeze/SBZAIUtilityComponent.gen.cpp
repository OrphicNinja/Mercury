// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void USBZAIUtilityComponent::StaticRegisterNativesUSBZAIUtilityComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZAIUtilityComponent_NoRegister()
	{
		return USBZAIUtilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTimeSliceDecidersLoop_MetaData[];
#endif
		static void NewProp_bTimeSliceDecidersLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTimeSliceDecidersLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Default;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Deciders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deciders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Deciders;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedDecider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedDecider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveDecider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveDecider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentUtilityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentUtilityData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedTopDecider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedTopDecider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAIUtilityComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_bTimeSliceDecidersLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_bTimeSliceDecidersLoop_SetBit(void* Obj)
	{
		((USBZAIUtilityComponent*)Obj)->bTimeSliceDecidersLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_bTimeSliceDecidersLoop = { "bTimeSliceDecidersLoop", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIUtilityComponent), &Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_bTimeSliceDecidersLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_bTimeSliceDecidersLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_bTimeSliceDecidersLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Default_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityComponent, Default), Z_Construct_UClass_USBZAIUtilityDecider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Default_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Deciders_Inner = { "Deciders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIUtilityDecider_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Deciders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Deciders = { "Deciders", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityComponent, Deciders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Deciders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Deciders_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_AIController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityComponent, AIController), Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_SelectedDecider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_SelectedDecider = { "SelectedDecider", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityComponent, SelectedDecider), Z_Construct_UClass_USBZAIUtilityDecider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_SelectedDecider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_SelectedDecider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_ActiveDecider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_ActiveDecider = { "ActiveDecider", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityComponent, ActiveDecider), Z_Construct_UClass_USBZAIUtilityDecider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_ActiveDecider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_ActiveDecider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_CurrentUtilityData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_CurrentUtilityData = { "CurrentUtilityData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityComponent, CurrentUtilityData), Z_Construct_UClass_USBZAIUtilityData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_CurrentUtilityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_CurrentUtilityData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Pawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityComponent, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Pawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_CachedTopDecider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityComponent" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_CachedTopDecider = { "CachedTopDecider", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityComponent, CachedTopDecider), Z_Construct_UClass_USBZAIUtilityDecider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_CachedTopDecider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_CachedTopDecider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIUtilityComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_bTimeSliceDecidersLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Deciders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Deciders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_SelectedDecider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_ActiveDecider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_CurrentUtilityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityComponent_Statics::NewProp_CachedTopDecider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityComponent_Statics::ClassParams = {
		&USBZAIUtilityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIUtilityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityComponent, 798213510);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityComponent>()
	{
		return USBZAIUtilityComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityComponent(Z_Construct_UClass_USBZAIUtilityComponent, &USBZAIUtilityComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
