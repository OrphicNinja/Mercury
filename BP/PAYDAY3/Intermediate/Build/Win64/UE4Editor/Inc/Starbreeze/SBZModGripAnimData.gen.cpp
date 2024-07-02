// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModGripAnimData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModGripAnimData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModGripAnimData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModGripAnimData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartCustomData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	void USBZModGripAnimData::StaticRegisterNativesUSBZModGripAnimData()
	{
	}
	UClass* Z_Construct_UClass_USBZModGripAnimData_NoRegister()
	{
		return USBZModGripAnimData::StaticClass();
	}
	struct Z_Construct_UClass_USBZModGripAnimData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideRightGripFPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideRightGripFPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideLeftGripFPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideLeftGripFPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideRightGripTPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideRightGripTPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideLeftGripTPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideLeftGripTPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideTriggerDisciplineRightGripFPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideTriggerDisciplineRightGripFPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideTriggerDisciplineLeftGripFPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideTriggerDisciplineLeftGripFPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideTriggerDisciplineRightGripTPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideTriggerDisciplineRightGripTPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideTriggerDisciplineLeftGripTPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideTriggerDisciplineLeftGripTPPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModGripAnimData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippablePartCustomData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModGripAnimData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModGripAnimData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModGripAnimData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModGripAnimData" },
		{ "ModuleRelativePath", "Public/SBZModGripAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModGripAnimData, Priority), METADATA_PARAMS(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideRightGripFPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModGripAnimData" },
		{ "ModuleRelativePath", "Public/SBZModGripAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideRightGripFPPose = { "OverrideRightGripFPPose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModGripAnimData, OverrideRightGripFPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideRightGripFPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideRightGripFPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideLeftGripFPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModGripAnimData" },
		{ "ModuleRelativePath", "Public/SBZModGripAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideLeftGripFPPose = { "OverrideLeftGripFPPose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModGripAnimData, OverrideLeftGripFPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideLeftGripFPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideLeftGripFPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideRightGripTPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModGripAnimData" },
		{ "ModuleRelativePath", "Public/SBZModGripAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideRightGripTPPose = { "OverrideRightGripTPPose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModGripAnimData, OverrideRightGripTPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideRightGripTPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideRightGripTPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideLeftGripTPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModGripAnimData" },
		{ "ModuleRelativePath", "Public/SBZModGripAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideLeftGripTPPose = { "OverrideLeftGripTPPose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModGripAnimData, OverrideLeftGripTPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideLeftGripTPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideLeftGripTPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineRightGripFPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModGripAnimData" },
		{ "ModuleRelativePath", "Public/SBZModGripAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineRightGripFPPose = { "OverrideTriggerDisciplineRightGripFPPose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModGripAnimData, OverrideTriggerDisciplineRightGripFPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineRightGripFPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineRightGripFPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineLeftGripFPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModGripAnimData" },
		{ "ModuleRelativePath", "Public/SBZModGripAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineLeftGripFPPose = { "OverrideTriggerDisciplineLeftGripFPPose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModGripAnimData, OverrideTriggerDisciplineLeftGripFPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineLeftGripFPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineLeftGripFPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineRightGripTPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModGripAnimData" },
		{ "ModuleRelativePath", "Public/SBZModGripAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineRightGripTPPose = { "OverrideTriggerDisciplineRightGripTPPose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModGripAnimData, OverrideTriggerDisciplineRightGripTPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineRightGripTPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineRightGripTPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineLeftGripTPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModGripAnimData" },
		{ "ModuleRelativePath", "Public/SBZModGripAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineLeftGripTPPose = { "OverrideTriggerDisciplineLeftGripTPPose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModGripAnimData, OverrideTriggerDisciplineLeftGripTPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineLeftGripTPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineLeftGripTPPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZModGripAnimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideRightGripFPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideLeftGripFPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideRightGripTPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideLeftGripTPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineRightGripFPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineLeftGripFPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineRightGripTPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModGripAnimData_Statics::NewProp_OverrideTriggerDisciplineLeftGripTPPose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModGripAnimData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModGripAnimData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModGripAnimData_Statics::ClassParams = {
		&USBZModGripAnimData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZModGripAnimData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZModGripAnimData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZModGripAnimData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModGripAnimData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModGripAnimData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModGripAnimData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModGripAnimData, 2547400709);
	template<> STARBREEZE_API UClass* StaticClass<USBZModGripAnimData>()
	{
		return USBZModGripAnimData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModGripAnimData(Z_Construct_UClass_USBZModGripAnimData, &USBZModGripAnimData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModGripAnimData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModGripAnimData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
