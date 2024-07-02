// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCuttableSplineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCuttableSplineComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableSplineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableSplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCuttableSplineType();
// End Cross Module References
	DEFINE_FUNCTION(USBZCuttableSplineComponent::execSetupSplineComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupSplineComponent();
		P_NATIVE_END;
	}
	void USBZCuttableSplineComponent::StaticRegisterNativesUSBZCuttableSplineComponent()
	{
		UClass* Class = USBZCuttableSplineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupSplineComponent", &USBZCuttableSplineComponent::execSetupSplineComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCuttableSplineComponent_SetupSplineComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableSplineComponent_SetupSplineComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableSplineComponent_SetupSplineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableSplineComponent, nullptr, "SetupSplineComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableSplineComponent_SetupSplineComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableSplineComponent_SetupSplineComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableSplineComponent_SetupSplineComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableSplineComponent_SetupSplineComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCuttableSplineComponent_NoRegister()
	{
		return USBZCuttableSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZCuttableSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Segments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusPadding;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CuttableSplineType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttableSplineType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CuttableSplineType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCuttableSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCuttableSplineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCuttableSplineComponent_SetupSplineComponent, "SetupSplineComponent" }, // 4163880481
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "SBZCuttableSplineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableSplineComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_Segments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableSplineComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableSplineComponent, Segments), METADATA_PARAMS(Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_Segments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableSplineComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableSplineComponent, Radius), METADATA_PARAMS(Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_LineLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableSplineComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_LineLength = { "LineLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableSplineComponent, LineLength), METADATA_PARAMS(Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_LineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_LineLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_RadiusPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableSplineComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_RadiusPadding = { "RadiusPadding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableSplineComponent, RadiusPadding), METADATA_PARAMS(Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_RadiusPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_RadiusPadding_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_CuttableSplineType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_CuttableSplineType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableSplineComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_CuttableSplineType = { "CuttableSplineType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableSplineComponent, CuttableSplineType), Z_Construct_UEnum_Starbreeze_ESBZCuttableSplineType, METADATA_PARAMS(Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_CuttableSplineType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_CuttableSplineType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCuttableSplineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_Segments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_LineLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_RadiusPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_CuttableSplineType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableSplineComponent_Statics::NewProp_CuttableSplineType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCuttableSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCuttableSplineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCuttableSplineComponent_Statics::ClassParams = {
		&USBZCuttableSplineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCuttableSplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableSplineComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCuttableSplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCuttableSplineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCuttableSplineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCuttableSplineComponent, 3787725516);
	template<> STARBREEZE_API UClass* StaticClass<USBZCuttableSplineComponent>()
	{
		return USBZCuttableSplineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCuttableSplineComponent(Z_Construct_UClass_USBZCuttableSplineComponent, &USBZCuttableSplineComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCuttableSplineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCuttableSplineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
