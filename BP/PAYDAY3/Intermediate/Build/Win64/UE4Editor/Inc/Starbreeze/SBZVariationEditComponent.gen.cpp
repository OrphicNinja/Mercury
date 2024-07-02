// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVariationEditComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVariationEditComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVariationEditComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVariationEditComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVariationSetData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEditVariationSetData();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void USBZVariationEditComponent::StaticRegisterNativesUSBZVariationEditComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZVariationEditComponent_NoRegister()
	{
		return USBZVariationEditComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZVariationEditComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariationSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VariationSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditVariationSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditVariationSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVariationIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentVariationIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVariationEditComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVariationEditComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZVariationEditComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVariationEditComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_VariationSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVariationEditComponent" },
		{ "ModuleRelativePath", "Public/SBZVariationEditComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_VariationSet = { "VariationSet", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVariationEditComponent, VariationSet), Z_Construct_UClass_USBZVariationSetData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_VariationSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_VariationSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_EditVariationSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVariationEditComponent" },
		{ "ModuleRelativePath", "Public/SBZVariationEditComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_EditVariationSet = { "EditVariationSet", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVariationEditComponent, EditVariationSet), Z_Construct_UScriptStruct_FSBZEditVariationSetData, METADATA_PARAMS(Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_EditVariationSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_EditVariationSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_CurrentVariationIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVariationEditComponent" },
		{ "ModuleRelativePath", "Public/SBZVariationEditComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_CurrentVariationIdx = { "CurrentVariationIdx", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVariationEditComponent, CurrentVariationIdx), METADATA_PARAMS(Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_CurrentVariationIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_CurrentVariationIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVariationEditComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZVariationEditComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVariationEditComponent, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVariationEditComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZVariationEditComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVariationEditComponent, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVariationEditComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_VariationSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_EditVariationSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_CurrentVariationIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVariationEditComponent_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVariationEditComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVariationEditComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVariationEditComponent_Statics::ClassParams = {
		&USBZVariationEditComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZVariationEditComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVariationEditComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVariationEditComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVariationEditComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVariationEditComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVariationEditComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVariationEditComponent, 1623009909);
	template<> STARBREEZE_API UClass* StaticClass<USBZVariationEditComponent>()
	{
		return USBZVariationEditComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVariationEditComponent(Z_Construct_UClass_USBZVariationEditComponent, &USBZVariationEditComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVariationEditComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVariationEditComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
