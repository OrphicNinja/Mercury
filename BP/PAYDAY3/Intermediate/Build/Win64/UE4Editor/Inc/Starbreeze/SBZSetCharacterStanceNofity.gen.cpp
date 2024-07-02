// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSetCharacterStanceNofity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSetCharacterStanceNofity() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSetCharacterStanceNofity_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSetCharacterStanceNofity();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterStance();
// End Cross Module References
	void USBZSetCharacterStanceNofity::StaticRegisterNativesUSBZSetCharacterStanceNofity()
	{
	}
	UClass* Z_Construct_UClass_USBZSetCharacterStanceNofity_NoRegister()
	{
		return USBZSetCharacterStanceNofity::StaticClass();
	}
	struct Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stance_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stance_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZSetCharacterStanceNofity.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSetCharacterStanceNofity.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::NewProp_Stance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::NewProp_Stance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSetCharacterStanceNofity" },
		{ "ModuleRelativePath", "Public/SBZSetCharacterStanceNofity.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::NewProp_Stance = { "Stance", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSetCharacterStanceNofity, Stance), Z_Construct_UEnum_Starbreeze_ESBZCharacterStance, METADATA_PARAMS(Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::NewProp_Stance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::NewProp_Stance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::NewProp_Stance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::NewProp_Stance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSetCharacterStanceNofity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::ClassParams = {
		&USBZSetCharacterStanceNofity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::PropPointers),
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSetCharacterStanceNofity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSetCharacterStanceNofity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSetCharacterStanceNofity, 3258326390);
	template<> STARBREEZE_API UClass* StaticClass<USBZSetCharacterStanceNofity>()
	{
		return USBZSetCharacterStanceNofity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSetCharacterStanceNofity(Z_Construct_UClass_USBZSetCharacterStanceNofity, &USBZSetCharacterStanceNofity::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSetCharacterStanceNofity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSetCharacterStanceNofity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
