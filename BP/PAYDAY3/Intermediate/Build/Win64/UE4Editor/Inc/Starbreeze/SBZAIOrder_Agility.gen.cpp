// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_Agility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_Agility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Agility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Agility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAgilityNavLink_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityTrajectoryInterface_NoRegister();
// End Cross Module References
	void USBZAIOrder_Agility::StaticRegisterNativesUSBZAIOrder_Agility()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_Agility_NoRegister()
	{
		return USBZAIOrder_Agility::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_Agility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityNavLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgilityNavLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityNavLinkInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AgilityNavLinkInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_Agility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Agility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_Agility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Agility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Agility_Statics::NewProp_AgilityNavLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Agility" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Agility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_Agility_Statics::NewProp_AgilityNavLink = { "AgilityNavLink", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_Agility, AgilityNavLink), Z_Construct_UClass_ASBZAgilityNavLink_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Agility_Statics::NewProp_AgilityNavLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Agility_Statics::NewProp_AgilityNavLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Agility_Statics::NewProp_AgilityNavLinkInterface_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Agility" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Agility.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_USBZAIOrder_Agility_Statics::NewProp_AgilityNavLinkInterface = { "AgilityNavLinkInterface", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_Agility, AgilityNavLinkInterface), Z_Construct_UClass_USBZAgilityTrajectoryInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Agility_Statics::NewProp_AgilityNavLinkInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Agility_Statics::NewProp_AgilityNavLinkInterface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_Agility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Agility_Statics::NewProp_AgilityNavLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Agility_Statics::NewProp_AgilityNavLinkInterface,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_Agility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_Agility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_Agility_Statics::ClassParams = {
		&USBZAIOrder_Agility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_Agility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Agility_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Agility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Agility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_Agility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_Agility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_Agility, 1233113504);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_Agility>()
	{
		return USBZAIOrder_Agility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_Agility(Z_Construct_UClass_USBZAIOrder_Agility, &USBZAIOrder_Agility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_Agility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_Agility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
