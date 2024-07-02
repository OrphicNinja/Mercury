// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTutorialPopUpDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTutorialPopUpDataAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTutorialPopUpDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTutorialPopUpDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
	void USBZTutorialPopUpDataAsset::StaticRegisterNativesUSBZTutorialPopUpDataAsset()
	{
	}
	UClass* Z_Construct_UClass_USBZTutorialPopUpDataAsset_NoRegister()
	{
		return USBZTutorialPopUpDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PopUpHeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TutorialDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TutorialIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTutorialPopUpDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_PopUpHeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTutorialPopUpDataAsset" },
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_PopUpHeader = { "PopUpHeader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTutorialPopUpDataAsset, PopUpHeader), METADATA_PARAMS(Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_PopUpHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_PopUpHeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_TutorialDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTutorialPopUpDataAsset" },
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_TutorialDescription = { "TutorialDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTutorialPopUpDataAsset, TutorialDescription), METADATA_PARAMS(Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_TutorialDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_TutorialDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_TutorialIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTutorialPopUpDataAsset" },
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_TutorialIcon = { "TutorialIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTutorialPopUpDataAsset, TutorialIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_TutorialIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_TutorialIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_PopUpHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_TutorialDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::NewProp_TutorialIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTutorialPopUpDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::ClassParams = {
		&USBZTutorialPopUpDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTutorialPopUpDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTutorialPopUpDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTutorialPopUpDataAsset, 1772260369);
	template<> STARBREEZE_API UClass* StaticClass<USBZTutorialPopUpDataAsset>()
	{
		return USBZTutorialPopUpDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTutorialPopUpDataAsset(Z_Construct_UClass_USBZTutorialPopUpDataAsset, &USBZTutorialPopUpDataAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTutorialPopUpDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTutorialPopUpDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
