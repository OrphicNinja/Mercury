// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkill.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkill() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkill_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkill();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSkill();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillLine_NoRegister();
// End Cross Module References
	void USBZSkill::StaticRegisterNativesUSBZSkill()
	{
	}
	UClass* Z_Construct_UClass_USBZSkill_NoRegister()
	{
		return USBZSkill::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkill_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkillType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkillType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkill_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkill_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkill.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkill.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkill" },
		{ "ModuleRelativePath", "Public/SBZSkill.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillType = { "SkillType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkill, SkillType), Z_Construct_UEnum_Starbreeze_ESBZSkill, METADATA_PARAMS(Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkill_Statics::NewProp_ProgressPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkill" },
		{ "ModuleRelativePath", "Public/SBZSkill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSkill_Statics::NewProp_ProgressPercentage = { "ProgressPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkill, ProgressPercentage), METADATA_PARAMS(Z_Construct_UClass_USBZSkill_Statics::NewProp_ProgressPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkill_Statics::NewProp_ProgressPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkill" },
		{ "ModuleRelativePath", "Public/SBZSkill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillData = { "SkillData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkill, SkillData), Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillLine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkill" },
		{ "ModuleRelativePath", "Public/SBZSkill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillLine = { "SkillLine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkill, SkillLine), Z_Construct_UClass_USBZSkillLine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillLine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkill_Statics::NewProp_ProgressPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkill_Statics::NewProp_SkillLine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkill_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkill>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkill_Statics::ClassParams = {
		&USBZSkill::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkill_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkill_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkill_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkill_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkill()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkill_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkill, 526983317);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkill>()
	{
		return USBZSkill::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkill(Z_Construct_UClass_USBZSkill, &USBZSkill::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkill"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkill);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
