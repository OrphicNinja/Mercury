// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZZiplineAttachmentBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZZiplineAttachmentBone() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplineAttachmentBone_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplineAttachmentBone();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZZiplineAttachmentBone::StaticRegisterNativesUSBZZiplineAttachmentBone()
	{
	}
	UClass* Z_Construct_UClass_USBZZiplineAttachmentBone_NoRegister()
	{
		return USBZZiplineAttachmentBone::StaticClass();
	}
	struct Z_Construct_UClass_USBZZiplineAttachmentBone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZZiplineAttachmentBone.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZZiplineAttachmentBone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::NewProp_BoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineAttachmentBone" },
		{ "ModuleRelativePath", "Public/SBZZiplineAttachmentBone.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZZiplineAttachmentBone, BoneName), METADATA_PARAMS(Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::NewProp_BoneName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZZiplineAttachmentBone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::ClassParams = {
		&USBZZiplineAttachmentBone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::PropPointers),
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZZiplineAttachmentBone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZZiplineAttachmentBone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZZiplineAttachmentBone, 3089559481);
	template<> STARBREEZE_API UClass* StaticClass<USBZZiplineAttachmentBone>()
	{
		return USBZZiplineAttachmentBone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZZiplineAttachmentBone(Z_Construct_UClass_USBZZiplineAttachmentBone, &USBZZiplineAttachmentBone::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZZiplineAttachmentBone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZZiplineAttachmentBone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
