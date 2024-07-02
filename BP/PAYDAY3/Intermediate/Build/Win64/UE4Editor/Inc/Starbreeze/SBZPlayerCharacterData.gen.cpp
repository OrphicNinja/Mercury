// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerCharacterData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerCharacterData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitBaseData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGloveData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPlayerCharacterSizeCategory();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerMenuAnimationCollection_NoRegister();
// End Cross Module References
	void USBZPlayerCharacterData::StaticRegisterNativesUSBZPlayerCharacterData()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister()
	{
		return USBZPlayerCharacterData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerCharacterData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_CharacterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaskData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMaskData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSuitBaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSuitBaseData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGloveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultGloveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BaseSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterBio_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CharacterBio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterNationality_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CharacterNationality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SizeCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SizeCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuAnimationCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuAnimationCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerCharacterData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerCharacterData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCharacterData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCharacterData, CharacterClass), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultMaskData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCharacterData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultMaskData = { "DefaultMaskData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCharacterData, DefaultMaskData), Z_Construct_UClass_USBZMaskData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultMaskData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultMaskData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultSuitBaseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCharacterData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultSuitBaseData = { "DefaultSuitBaseData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCharacterData, DefaultSuitBaseData), Z_Construct_UClass_USBZSuitBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultSuitBaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultSuitBaseData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultGloveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCharacterData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultGloveData = { "DefaultGloveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCharacterData, DefaultGloveData), Z_Construct_UClass_USBZGloveData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultGloveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultGloveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCharacterData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCharacterData, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_BaseSkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCharacterData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_BaseSkeletalMesh = { "BaseSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCharacterData, BaseSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_BaseSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_BaseSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SkeletalMesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCharacterData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SkeletalMesh1P = { "SkeletalMesh1P", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCharacterData, SkeletalMesh1P), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SkeletalMesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SkeletalMesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterBio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCharacterData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterBio = { "CharacterBio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCharacterData, CharacterBio), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterBio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterBio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterNationality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCharacterData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterNationality = { "CharacterNationality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCharacterData, CharacterNationality), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterNationality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterNationality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SizeCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SizeCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCharacterData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SizeCategory = { "SizeCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCharacterData, SizeCategory), Z_Construct_UEnum_Starbreeze_EPlayerCharacterSizeCategory, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SizeCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SizeCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_MainMenuAnimationCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCharacterData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_MainMenuAnimationCollection = { "MainMenuAnimationCollection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCharacterData, MainMenuAnimationCollection), Z_Construct_UClass_USBZPlayerMenuAnimationCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_MainMenuAnimationCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_MainMenuAnimationCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultMaskData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultSuitBaseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_DefaultGloveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_BaseSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SkeletalMesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterBio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_CharacterNationality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SizeCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_SizeCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCharacterData_Statics::NewProp_MainMenuAnimationCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerCharacterData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerCharacterData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerCharacterData_Statics::ClassParams = {
		&USBZPlayerCharacterData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerCharacterData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCharacterData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCharacterData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerCharacterData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerCharacterData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerCharacterData, 4055036666);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerCharacterData>()
	{
		return USBZPlayerCharacterData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerCharacterData(Z_Construct_UClass_USBZPlayerCharacterData, &USBZPlayerCharacterData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerCharacterData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerCharacterData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
