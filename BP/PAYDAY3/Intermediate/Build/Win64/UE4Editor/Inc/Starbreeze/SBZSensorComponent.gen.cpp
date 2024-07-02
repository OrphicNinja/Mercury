// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSensorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSensorComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSensorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSensorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSensorComponent::StaticRegisterNativesUSBZSensorComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZSensorComponent_NoRegister()
	{
		return USBZSensorComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZSensorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBlueMode_MetaData[];
#endif
		static void NewProp_bIsBlueMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBlueMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSensorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZSensorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSensorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorComponent_Statics::NewProp_bIsBlueMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSensorComponent" },
		{ "ModuleRelativePath", "Public/SBZSensorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZSensorComponent_Statics::NewProp_bIsBlueMode_SetBit(void* Obj)
	{
		((USBZSensorComponent*)Obj)->bIsBlueMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSensorComponent_Statics::NewProp_bIsBlueMode = { "bIsBlueMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSensorComponent), &Z_Construct_UClass_USBZSensorComponent_Statics::NewProp_bIsBlueMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSensorComponent_Statics::NewProp_bIsBlueMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorComponent_Statics::NewProp_bIsBlueMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSensorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSensorComponent_Statics::NewProp_bIsBlueMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSensorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSensorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSensorComponent_Statics::ClassParams = {
		&USBZSensorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSensorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSensorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSensorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSensorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSensorComponent, 251085014);
	template<> STARBREEZE_API UClass* StaticClass<USBZSensorComponent>()
	{
		return USBZSensorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSensorComponent(Z_Construct_UClass_USBZSensorComponent, &USBZSensorComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSensorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSensorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
