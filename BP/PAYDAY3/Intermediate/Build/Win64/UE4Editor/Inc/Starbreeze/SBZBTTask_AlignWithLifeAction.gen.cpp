// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_AlignWithLifeAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_AlignWithLifeAction() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_AlignWithLifeAction();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLifeActionAlignmentMode();
// End Cross Module References
	void USBZBTTask_AlignWithLifeAction::StaticRegisterNativesUSBZBTTask_AlignWithLifeAction()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_NoRegister()
	{
		return USBZBTTask_AlignWithLifeAction::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAlignmentDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAlignmentDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitDurationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitDurationFactor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AlignmentMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignmentMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AlignmentMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_AlignWithLifeAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AlignWithLifeAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_MaxAlignmentDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AlignWithLifeAction" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AlignWithLifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_MaxAlignmentDuration = { "MaxAlignmentDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AlignWithLifeAction, MaxAlignmentDuration), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_MaxAlignmentDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_MaxAlignmentDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_WaitDurationFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AlignWithLifeAction" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AlignWithLifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_WaitDurationFactor = { "WaitDurationFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AlignWithLifeAction, WaitDurationFactor), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_WaitDurationFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_WaitDurationFactor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_AlignmentMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_AlignmentMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AlignWithLifeAction" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AlignWithLifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_AlignmentMode = { "AlignmentMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AlignWithLifeAction, AlignmentMode), Z_Construct_UEnum_Starbreeze_ESBZLifeActionAlignmentMode, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_AlignmentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_AlignmentMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_MaxAlignmentDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_WaitDurationFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_AlignmentMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::NewProp_AlignmentMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_AlignWithLifeAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::ClassParams = {
		&USBZBTTask_AlignWithLifeAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_AlignWithLifeAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_AlignWithLifeAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_AlignWithLifeAction, 413936267);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_AlignWithLifeAction>()
	{
		return USBZBTTask_AlignWithLifeAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_AlignWithLifeAction(Z_Construct_UClass_USBZBTTask_AlignWithLifeAction, &USBZBTTask_AlignWithLifeAction::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_AlignWithLifeAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_AlignWithLifeAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
