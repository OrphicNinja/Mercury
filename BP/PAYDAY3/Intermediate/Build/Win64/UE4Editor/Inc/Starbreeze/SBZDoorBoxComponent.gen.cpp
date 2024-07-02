// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDoorBoxComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDoorBoxComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDoorBoxComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDoorBoxComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGateState();
// End Cross Module References
	void USBZDoorBoxComponent::StaticRegisterNativesUSBZDoorBoxComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZDoorBoxComponent_NoRegister()
	{
		return USBZDoorBoxComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZDoorBoxComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpenDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OpenDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDoorBoxComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDoorBoxComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "SBZDoorBoxComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDoorBoxComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZDoorBoxComponent_Statics::NewProp_OpenDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDoorBoxComponent_Statics::NewProp_OpenDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDoorBoxComponent" },
		{ "ModuleRelativePath", "Public/SBZDoorBoxComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZDoorBoxComponent_Statics::NewProp_OpenDirection = { "OpenDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDoorBoxComponent, OpenDirection), Z_Construct_UEnum_Starbreeze_ESBZGateState, METADATA_PARAMS(Z_Construct_UClass_USBZDoorBoxComponent_Statics::NewProp_OpenDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDoorBoxComponent_Statics::NewProp_OpenDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDoorBoxComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDoorBoxComponent_Statics::NewProp_OpenDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDoorBoxComponent_Statics::NewProp_OpenDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDoorBoxComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDoorBoxComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDoorBoxComponent_Statics::ClassParams = {
		&USBZDoorBoxComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDoorBoxComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDoorBoxComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDoorBoxComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDoorBoxComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDoorBoxComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDoorBoxComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDoorBoxComponent, 2122921431);
	template<> STARBREEZE_API UClass* StaticClass<USBZDoorBoxComponent>()
	{
		return USBZDoorBoxComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDoorBoxComponent(Z_Construct_UClass_USBZDoorBoxComponent, &USBZDoorBoxComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDoorBoxComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDoorBoxComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
