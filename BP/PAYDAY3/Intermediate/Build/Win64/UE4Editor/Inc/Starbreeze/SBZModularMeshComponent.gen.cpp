// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularMeshComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZModularMeshVisibility();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	void USBZModularMeshComponent::StaticRegisterNativesUSBZModularMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZModularMeshComponent_NoRegister()
	{
		return USBZModularMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZModularMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseRig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseRig;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisibilityMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VisibilityMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedMeshes_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreatedMeshes_ValueProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CreatedMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CreatedMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityRig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisibilityRig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLastOutlineStateToApply_MetaData[];
#endif
		static void NewProp_bLastOutlineStateToApply_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLastOutlineStateToApply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeshReady_MetaData[];
#endif
		static void NewProp_bMeshReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeshReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModularMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZModularMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModularMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_BaseRig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZModularMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_BaseRig = { "BaseRig", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularMeshComponent, BaseRig), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_BaseRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_BaseRig_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_VisibilityMeshes_Inner = { "VisibilityMeshes", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZModularMeshVisibility, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_VisibilityMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshComponent" },
		{ "ModuleRelativePath", "Public/SBZModularMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_VisibilityMeshes = { "VisibilityMeshes", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularMeshComponent, VisibilityMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_VisibilityMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_VisibilityMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_CreatedMeshes_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZModularMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_CreatedMeshes_ValueProp = { "CreatedMeshes", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_CreatedMeshes_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_CreatedMeshes_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_CreatedMeshes_Key_KeyProp = { "CreatedMeshes_Key", nullptr, (EPropertyFlags)0x0006000000080009, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_CreatedMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZModularMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_CreatedMeshes = { "CreatedMeshes", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularMeshComponent, CreatedMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_CreatedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_CreatedMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_VisibilityRig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZModularMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_VisibilityRig = { "VisibilityRig", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularMeshComponent, VisibilityRig), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_VisibilityRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_VisibilityRig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bLastOutlineStateToApply_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshComponent" },
		{ "ModuleRelativePath", "Public/SBZModularMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bLastOutlineStateToApply_SetBit(void* Obj)
	{
		((USBZModularMeshComponent*)Obj)->bLastOutlineStateToApply = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bLastOutlineStateToApply = { "bLastOutlineStateToApply", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZModularMeshComponent), &Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bLastOutlineStateToApply_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bLastOutlineStateToApply_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bLastOutlineStateToApply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bMeshReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshComponent" },
		{ "ModuleRelativePath", "Public/SBZModularMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bMeshReady_SetBit(void* Obj)
	{
		((USBZModularMeshComponent*)Obj)->bMeshReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bMeshReady = { "bMeshReady", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZModularMeshComponent), &Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bMeshReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bMeshReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bMeshReady_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZModularMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_BaseRig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_VisibilityMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_VisibilityMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_CreatedMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_CreatedMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_CreatedMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_VisibilityRig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bLastOutlineStateToApply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularMeshComponent_Statics::NewProp_bMeshReady,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModularMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModularMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModularMeshComponent_Statics::ClassParams = {
		&USBZModularMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZModularMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularMeshComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZModularMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModularMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModularMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModularMeshComponent, 195492522);
	template<> STARBREEZE_API UClass* StaticClass<USBZModularMeshComponent>()
	{
		return USBZModularMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModularMeshComponent(Z_Construct_UClass_USBZModularMeshComponent, &USBZModularMeshComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModularMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModularMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
