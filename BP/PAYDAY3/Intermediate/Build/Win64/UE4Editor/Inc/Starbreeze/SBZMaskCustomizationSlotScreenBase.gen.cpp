// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskCustomizationSlotScreenBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskCustomizationSlotScreenBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMaskCustomizationSlotScreenBase::StaticRegisterNativesUSBZMaskCustomizationSlotScreenBase()
	{
	}
	UClass* Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase_NoRegister()
	{
		return USBZMaskCustomizationSlotScreenBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskCustomizationSlotScreenBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskCustomizationSlotScreenBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskCustomizationSlotScreenBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase_Statics::ClassParams = {
		&USBZMaskCustomizationSlotScreenBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskCustomizationSlotScreenBase, 2564659269);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskCustomizationSlotScreenBase>()
	{
		return USBZMaskCustomizationSlotScreenBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskCustomizationSlotScreenBase(Z_Construct_UClass_USBZMaskCustomizationSlotScreenBase, &USBZMaskCustomizationSlotScreenBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskCustomizationSlotScreenBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskCustomizationSlotScreenBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
