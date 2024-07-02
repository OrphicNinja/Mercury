// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNavLinkTraversalComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNavLinkTraversalComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkTraversalComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkTraversalComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityTraversalQueryParams_NoRegister();
// End Cross Module References
	void USBZNavLinkTraversalComponent::StaticRegisterNativesUSBZNavLinkTraversalComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZNavLinkTraversalComponent_NoRegister()
	{
		return USBZNavLinkTraversalComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftTrajectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftTrajectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightTrajectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightTrajectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZNavLinkTraversalComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNavLinkTraversalComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_LeftTrajectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkTraversalComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkTraversalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_LeftTrajectory = { "LeftTrajectory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkTraversalComponent, LeftTrajectory), Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_LeftTrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_LeftTrajectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_RightTrajectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkTraversalComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkTraversalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_RightTrajectory = { "RightTrajectory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkTraversalComponent, RightTrajectory), Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_RightTrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_RightTrajectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_QueryParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkTraversalComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkTraversalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkTraversalComponent, QueryParams), Z_Construct_UClass_USBZAgilityTraversalQueryParams_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_QueryParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_LeftTrajectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_RightTrajectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::NewProp_QueryParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNavLinkTraversalComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::ClassParams = {
		&USBZNavLinkTraversalComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNavLinkTraversalComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNavLinkTraversalComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNavLinkTraversalComponent, 2303539350);
	template<> STARBREEZE_API UClass* StaticClass<USBZNavLinkTraversalComponent>()
	{
		return USBZNavLinkTraversalComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNavLinkTraversalComponent(Z_Construct_UClass_USBZNavLinkTraversalComponent, &USBZNavLinkTraversalComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNavLinkTraversalComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNavLinkTraversalComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
