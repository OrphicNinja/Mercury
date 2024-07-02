// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnSpawnEditorMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnSpawnEditorMeshComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnSpawnEditorMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnSpawnEditorMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPawnSpawnEditorMeshComponent::StaticRegisterNativesUSBZPawnSpawnEditorMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZPawnSpawnEditorMeshComponent_NoRegister()
	{
		return USBZPawnSpawnEditorMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZPawnSpawnEditorMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPawnSpawnEditorMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnSpawnEditorMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "SBZPawnSpawnEditorMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnEditorMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPawnSpawnEditorMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPawnSpawnEditorMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPawnSpawnEditorMeshComponent_Statics::ClassParams = {
		&USBZPawnSpawnEditorMeshComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPawnSpawnEditorMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnSpawnEditorMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPawnSpawnEditorMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPawnSpawnEditorMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPawnSpawnEditorMeshComponent, 965896523);
	template<> STARBREEZE_API UClass* StaticClass<USBZPawnSpawnEditorMeshComponent>()
	{
		return USBZPawnSpawnEditorMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPawnSpawnEditorMeshComponent(Z_Construct_UClass_USBZPawnSpawnEditorMeshComponent, &USBZPawnSpawnEditorMeshComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPawnSpawnEditorMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPawnSpawnEditorMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
