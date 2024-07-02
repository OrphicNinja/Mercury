// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSplineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSplineComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSplineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZYawControl();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSplineType();
// End Cross Module References
	void USBZSplineComponent::StaticRegisterNativesUSBZSplineComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZSplineComponent_NoRegister()
	{
		return USBZSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputSplineActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputSplineActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputSplineActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputSplineActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputSplineActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputSplineActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputSplines_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputSplines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputSplines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputSplines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputSplines_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputSplines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputSplines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputSplines;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_YawControls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bYawControlEnabled_MetaData[];
#endif
		static void NewProp_bYawControlEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bYawControlEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SplineType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SplineType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "SBZSplineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSplineComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplineActors_Inner = { "InputSplineActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplineActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSplineComponent" },
		{ "ModuleRelativePath", "Public/SBZSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplineActors = { "InputSplineActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSplineComponent, InputSplineActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplineActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplineActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplineActors_Inner = { "OutputSplineActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplineActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSplineComponent" },
		{ "ModuleRelativePath", "Public/SBZSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplineActors = { "OutputSplineActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSplineComponent, OutputSplineActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplineActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplineActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplines_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSplineComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplines_Inner = { "InputSplines", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplines_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplines_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSplineComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplines = { "InputSplines", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSplineComponent, InputSplines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplines_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSplineComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplines_Inner = { "OutputSplines", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplines_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplines_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSplineComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplines = { "OutputSplines", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSplineComponent, OutputSplines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplines_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_YawControls_Inner = { "YawControls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZYawControl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_YawControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSplineComponent" },
		{ "ModuleRelativePath", "Public/SBZSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_YawControls = { "YawControls", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSplineComponent, YawControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_YawControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_YawControls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bYawControlEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSplineComponent" },
		{ "ModuleRelativePath", "Public/SBZSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bYawControlEnabled_SetBit(void* Obj)
	{
		((USBZSplineComponent*)Obj)->bYawControlEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bYawControlEnabled = { "bYawControlEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZSplineComponent), &Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bYawControlEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bYawControlEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bYawControlEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bReverse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSplineComponent" },
		{ "ModuleRelativePath", "Public/SBZSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((USBZSplineComponent*)Obj)->bReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZSplineComponent), &Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bReverse_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_SplineType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_SplineType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSplineComponent" },
		{ "ModuleRelativePath", "Public/SBZSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_SplineType = { "SplineType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSplineComponent, SplineType), Z_Construct_UEnum_Starbreeze_ESBZSplineType, METADATA_PARAMS(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_SplineType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_SplineType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSplineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplineActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplineActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplineActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplineActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_InputSplines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_OutputSplines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_YawControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_YawControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bYawControlEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_bReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_SplineType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSplineComponent_Statics::NewProp_SplineType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSplineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSplineComponent_Statics::ClassParams = {
		&USBZSplineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSplineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSplineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSplineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSplineComponent, 3500206742);
	template<> STARBREEZE_API UClass* StaticClass<USBZSplineComponent>()
	{
		return USBZSplineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSplineComponent(Z_Construct_UClass_USBZSplineComponent, &USBZSplineComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSplineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSplineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
