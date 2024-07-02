// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_Investigate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_Investigate() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Investigate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Investigate();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionNotificationAsset_NoRegister();
// End Cross Module References
	void USBZAIAction_Investigate::StaticRegisterNativesUSBZAIAction_Investigate()
	{
	}
	UClass* Z_Construct_UClass_USBZAIAction_Investigate_NoRegister()
	{
		return USBZAIAction_Investigate::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_Investigate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSendOnlyOneInvestigator_MetaData[];
#endif
		static void NewProp_bSendOnlyOneInvestigator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSendOnlyOneInvestigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUrgent_MetaData[];
#endif
		static void NewProp_bIsUrgent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUrgent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscalationReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscalationReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_Investigate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_Investigate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_Investigate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_Investigate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bSendOnlyOneInvestigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_Investigate" },
		{ "ModuleRelativePath", "Public/SBZAIAction_Investigate.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bSendOnlyOneInvestigator_SetBit(void* Obj)
	{
		((USBZAIAction_Investigate*)Obj)->bSendOnlyOneInvestigator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bSendOnlyOneInvestigator = { "bSendOnlyOneInvestigator", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIAction_Investigate), &Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bSendOnlyOneInvestigator_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bSendOnlyOneInvestigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bSendOnlyOneInvestigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bIsUrgent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_Investigate" },
		{ "ModuleRelativePath", "Public/SBZAIAction_Investigate.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bIsUrgent_SetBit(void* Obj)
	{
		((USBZAIAction_Investigate*)Obj)->bIsUrgent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bIsUrgent = { "bIsUrgent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIAction_Investigate), &Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bIsUrgent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bIsUrgent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bIsUrgent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_EscalationReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_Investigate" },
		{ "ModuleRelativePath", "Public/SBZAIAction_Investigate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_EscalationReason = { "EscalationReason", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_Investigate, EscalationReason), Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_EscalationReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_EscalationReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAction_Investigate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bSendOnlyOneInvestigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_bIsUrgent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_Investigate_Statics::NewProp_EscalationReason,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_Investigate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_Investigate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_Investigate_Statics::ClassParams = {
		&USBZAIAction_Investigate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIAction_Investigate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_Investigate_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_Investigate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_Investigate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_Investigate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_Investigate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_Investigate, 2428812118);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_Investigate>()
	{
		return USBZAIAction_Investigate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_Investigate(Z_Construct_UClass_USBZAIAction_Investigate, &USBZAIAction_Investigate::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_Investigate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_Investigate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
