// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillsMenuButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillsMenuButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillsMenuButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillsMenuButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSkillState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSkillType();
// End Cross Module References
	void USBZSkillsMenuButton::StaticRegisterNativesUSBZSkillsMenuButton()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillsMenuButton_NoRegister()
	{
		return USBZSkillsMenuButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillsMenuButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkillState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkillState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkillType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkillType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillsMenuButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillsMenuButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillsMenuButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillsMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillsMenuButton" },
		{ "ModuleRelativePath", "Public/SBZSkillsMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillState = { "SkillState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillsMenuButton, SkillState), Z_Construct_UEnum_Starbreeze_ESBZSkillState, METADATA_PARAMS(Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillsMenuButton" },
		{ "ModuleRelativePath", "Public/SBZSkillsMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillType = { "SkillType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillsMenuButton, SkillType), Z_Construct_UEnum_Starbreeze_ESBZSkillType, METADATA_PARAMS(Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillsMenuButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillsMenuButton_Statics::NewProp_SkillType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillsMenuButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillsMenuButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillsMenuButton_Statics::ClassParams = {
		&USBZSkillsMenuButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkillsMenuButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillsMenuButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillsMenuButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillsMenuButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillsMenuButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillsMenuButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillsMenuButton, 3922745202);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillsMenuButton>()
	{
		return USBZSkillsMenuButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillsMenuButton(Z_Construct_UClass_USBZSkillsMenuButton, &USBZSkillsMenuButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillsMenuButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillsMenuButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
