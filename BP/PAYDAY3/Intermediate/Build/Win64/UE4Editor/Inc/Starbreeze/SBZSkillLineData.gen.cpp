// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillLineData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillLineData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillLineData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillLineData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData_NoRegister();
// End Cross Module References
	void USBZSkillLineData::StaticRegisterNativesUSBZSkillLineData()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillLineData_NoRegister()
	{
		return USBZSkillLineData::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillLineData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressLevelID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProgressLevelID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchLevelID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ResearchLevelID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResearchLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseSkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcedBaseSkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcedBaseSkill;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpgradeSkillArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpgradeSkillArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpgradeSkillArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterySkillArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterySkillArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MasterySkillArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillLineData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLineData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillLineData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillLineData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ProgressLevelID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLineData" },
		{ "ModuleRelativePath", "Public/SBZSkillLineData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ProgressLevelID = { "ProgressLevelID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillLineData, ProgressLevelID), METADATA_PARAMS(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ProgressLevelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ProgressLevelID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ResearchLevelID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLineData" },
		{ "ModuleRelativePath", "Public/SBZSkillLineData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ResearchLevelID = { "ResearchLevelID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillLineData, ResearchLevelID), METADATA_PARAMS(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ResearchLevelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ResearchLevelID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ResearchLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLineData" },
		{ "ModuleRelativePath", "Public/SBZSkillLineData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ResearchLevel = { "ResearchLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillLineData, ResearchLevel), METADATA_PARAMS(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ResearchLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ResearchLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_BaseSkill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLineData" },
		{ "ModuleRelativePath", "Public/SBZSkillLineData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_BaseSkill = { "BaseSkill", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillLineData, BaseSkill), Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_BaseSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_BaseSkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_AcedBaseSkill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLineData" },
		{ "ModuleRelativePath", "Public/SBZSkillLineData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_AcedBaseSkill = { "AcedBaseSkill", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillLineData, AcedBaseSkill), Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_AcedBaseSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_AcedBaseSkill_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_UpgradeSkillArray_Inner = { "UpgradeSkillArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_UpgradeSkillArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLineData" },
		{ "ModuleRelativePath", "Public/SBZSkillLineData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_UpgradeSkillArray = { "UpgradeSkillArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillLineData, UpgradeSkillArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_UpgradeSkillArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_UpgradeSkillArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_MasterySkillArray_Inner = { "MasterySkillArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_MasterySkillArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLineData" },
		{ "ModuleRelativePath", "Public/SBZSkillLineData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_MasterySkillArray = { "MasterySkillArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillLineData, MasterySkillArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_MasterySkillArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_MasterySkillArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillLineData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ProgressLevelID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ResearchLevelID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_ResearchLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_BaseSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_AcedBaseSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_UpgradeSkillArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_UpgradeSkillArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_MasterySkillArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLineData_Statics::NewProp_MasterySkillArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillLineData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillLineData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillLineData_Statics::ClassParams = {
		&USBZSkillLineData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkillLineData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLineData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillLineData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLineData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillLineData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillLineData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillLineData, 2347024354);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillLineData>()
	{
		return USBZSkillLineData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillLineData(Z_Construct_UClass_USBZSkillLineData, &USBZSkillLineData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillLineData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillLineData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
