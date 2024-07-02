// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_ShoveHumanShieldInstigator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_ShoveHumanShieldInstigator() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICharacter_NoRegister();
// End Cross Module References
	void USBZAIOrder_ShoveHumanShieldInstigator::StaticRegisterNativesUSBZAIOrder_ShoveHumanShieldInstigator()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_NoRegister()
	{
		return USBZAIOrder_ShoveHumanShieldInstigator::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanShieldHostage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HumanShieldHostage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_ShoveHumanShieldInstigator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_ShoveHumanShieldInstigator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::NewProp_HumanShieldHostage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_ShoveHumanShieldInstigator" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_ShoveHumanShieldInstigator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::NewProp_HumanShieldHostage = { "HumanShieldHostage", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_ShoveHumanShieldInstigator, HumanShieldHostage), Z_Construct_UClass_ASBZAICharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::NewProp_HumanShieldHostage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::NewProp_HumanShieldHostage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::NewProp_HumanShieldHostage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_ShoveHumanShieldInstigator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::ClassParams = {
		&USBZAIOrder_ShoveHumanShieldInstigator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_ShoveHumanShieldInstigator, 437662182);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_ShoveHumanShieldInstigator>()
	{
		return USBZAIOrder_ShoveHumanShieldInstigator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_ShoveHumanShieldInstigator(Z_Construct_UClass_USBZAIOrder_ShoveHumanShieldInstigator, &USBZAIOrder_ShoveHumanShieldInstigator::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_ShoveHumanShieldInstigator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_ShoveHumanShieldInstigator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
