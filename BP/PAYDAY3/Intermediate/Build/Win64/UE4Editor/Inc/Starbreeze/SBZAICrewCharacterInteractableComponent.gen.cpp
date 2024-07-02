// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICrewCharacterInteractableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICrewCharacterInteractableComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICrewCharacterInteractableComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterInteractableComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAICrewCharacterInteractableMode();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractableModeData();
// End Cross Module References
	void USBZAICrewCharacterInteractableComponent::StaticRegisterNativesUSBZAICrewCharacterInteractableComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_NoRegister()
	{
		return USBZAICrewCharacterInteractableComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModeArray_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModeDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModeDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCharacterInteractableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAICrewCharacterInteractableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacterInteractableComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeArray_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeArray_Inner = { "ModeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZAICrewCharacterInteractableMode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacterInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacterInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeArray = { "ModeArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICrewCharacterInteractableComponent, ModeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacterInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacterInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeDataArray = { "ModeDataArray", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ModeDataArray, USBZAICrewCharacterInteractableComponent), STRUCT_OFFSET(USBZAICrewCharacterInteractableComponent, ModeDataArray), Z_Construct_UScriptStruct_FSBZInteractableModeData, METADATA_PARAMS(Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeArray_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::NewProp_ModeDataArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAICrewCharacterInteractableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::ClassParams = {
		&USBZAICrewCharacterInteractableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAICrewCharacterInteractableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAICrewCharacterInteractableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAICrewCharacterInteractableComponent, 375161071);
	template<> STARBREEZE_API UClass* StaticClass<USBZAICrewCharacterInteractableComponent>()
	{
		return USBZAICrewCharacterInteractableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAICrewCharacterInteractableComponent(Z_Construct_UClass_USBZAICrewCharacterInteractableComponent, &USBZAICrewCharacterInteractableComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAICrewCharacterInteractableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAICrewCharacterInteractableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
