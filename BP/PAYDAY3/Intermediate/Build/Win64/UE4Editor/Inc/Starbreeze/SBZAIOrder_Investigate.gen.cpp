// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_Investigate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_Investigate() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Investigate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Investigate();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Escalate_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInvestigateData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionNotificationAsset_NoRegister();
// End Cross Module References
	void USBZAIOrder_Investigate::StaticRegisterNativesUSBZAIOrder_Investigate()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_Investigate_NoRegister()
	{
		return USBZAIOrder_Investigate::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_Investigate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjectTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InjectTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateBehaviors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateBehaviors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscalateActionOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscalateActionOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInvestigation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentInvestigation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvestigateStack_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvestigateStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InvestigateStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscalationReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscalationReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_Investigate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Investigate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_Investigate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Investigate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_InjectTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Investigate" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Investigate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_InjectTag = { "InjectTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_Investigate, InjectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_InjectTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_InjectTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_StateBehaviors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Investigate" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Investigate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_StateBehaviors = { "StateBehaviors", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StateBehaviors, USBZAIOrder_Investigate), STRUCT_OFFSET(USBZAIOrder_Investigate, StateBehaviors), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_StateBehaviors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_StateBehaviors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_EscalateActionOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Investigate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Investigate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_EscalateActionOrder = { "EscalateActionOrder", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_Investigate, EscalateActionOrder), Z_Construct_UClass_USBZAIOrder_Escalate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_EscalateActionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_EscalateActionOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_CurrentInvestigation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Investigate" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Investigate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_CurrentInvestigation = { "CurrentInvestigation", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_Investigate, CurrentInvestigation), Z_Construct_UScriptStruct_FSBZInvestigateData, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_CurrentInvestigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_CurrentInvestigation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_InvestigateStack_Inner = { "InvestigateStack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZInvestigateData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_InvestigateStack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Investigate" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Investigate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_InvestigateStack = { "InvestigateStack", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_Investigate, InvestigateStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_InvestigateStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_InvestigateStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_EscalationReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Investigate" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Investigate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_EscalationReason = { "EscalationReason", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_Investigate, EscalationReason), Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_EscalationReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_EscalationReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_Investigate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_InjectTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_StateBehaviors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_EscalateActionOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_CurrentInvestigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_InvestigateStack_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_InvestigateStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Investigate_Statics::NewProp_EscalationReason,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_Investigate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_Investigate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_Investigate_Statics::ClassParams = {
		&USBZAIOrder_Investigate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_Investigate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Investigate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_Investigate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_Investigate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_Investigate, 4041559038);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_Investigate>()
	{
		return USBZAIOrder_Investigate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_Investigate(Z_Construct_UClass_USBZAIOrder_Investigate, &USBZAIOrder_Investigate::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_Investigate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_Investigate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
