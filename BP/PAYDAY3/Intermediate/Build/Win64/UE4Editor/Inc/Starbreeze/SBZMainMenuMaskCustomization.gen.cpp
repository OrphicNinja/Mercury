// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuMaskCustomization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuMaskCustomization() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuMaskCustomization_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuMaskCustomization();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMainMenuMaskCustomization::StaticRegisterNativesUSBZMainMenuMaskCustomization()
	{
	}
	UClass* Z_Construct_UClass_USBZMainMenuMaskCustomization_NoRegister()
	{
		return USBZMainMenuMaskCustomization::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuMaskCustomization.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskCustomization.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::NewProp_MaskSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuMaskCustomization" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMaskCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::NewProp_MaskSlotIndex = { "MaskSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuMaskCustomization, MaskSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::NewProp_MaskSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::NewProp_MaskSlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::NewProp_MaskSlotIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuMaskCustomization>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::ClassParams = {
		&USBZMainMenuMaskCustomization::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuMaskCustomization()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuMaskCustomization_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuMaskCustomization, 1270533681);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuMaskCustomization>()
	{
		return USBZMainMenuMaskCustomization::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuMaskCustomization(Z_Construct_UClass_USBZMainMenuMaskCustomization, &USBZMainMenuMaskCustomization::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuMaskCustomization"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuMaskCustomization);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
