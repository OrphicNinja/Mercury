// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskOnInputAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskOnInputAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskOnInputAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskOnInputAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMaskOnInputAbility::StaticRegisterNativesUSBZMaskOnInputAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZMaskOnInputAbility_NoRegister()
	{
		return USBZMaskOnInputAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskOnInputAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskOnDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaskOnDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskOnInputAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskOnInputAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskOnInputAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskOnInputAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskOnInputAbility_Statics::NewProp_MaskOnDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskOnInputAbility" },
		{ "ModuleRelativePath", "Public/SBZMaskOnInputAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMaskOnInputAbility_Statics::NewProp_MaskOnDuration = { "MaskOnDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskOnInputAbility, MaskOnDuration), METADATA_PARAMS(Z_Construct_UClass_USBZMaskOnInputAbility_Statics::NewProp_MaskOnDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskOnInputAbility_Statics::NewProp_MaskOnDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMaskOnInputAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskOnInputAbility_Statics::NewProp_MaskOnDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskOnInputAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskOnInputAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskOnInputAbility_Statics::ClassParams = {
		&USBZMaskOnInputAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMaskOnInputAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskOnInputAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskOnInputAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskOnInputAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskOnInputAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskOnInputAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskOnInputAbility, 1289915283);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskOnInputAbility>()
	{
		return USBZMaskOnInputAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskOnInputAbility(Z_Construct_UClass_USBZMaskOnInputAbility, &USBZMaskOnInputAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskOnInputAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskOnInputAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
